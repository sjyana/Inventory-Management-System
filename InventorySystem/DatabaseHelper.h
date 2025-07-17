#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
using namespace System::Data;
using namespace System::Collections::Generic;

public ref class DatabaseHelper abstract sealed {
public:
    static List<String^>^ initDashboard() {
        List<String^>^ infoData = gcnew List<String^>();
        String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
        String^ countQuery = "SELECT COUNT(*) FROM product";
        String^ valueQuery = "SELECT quantity, price FROM product";
        String^ salesQuery = "SELECT total FROM sales";

        SqlConnection^ connection = gcnew SqlConnection(connString);
        SqlCommand^ countcmd = gcnew SqlCommand(countQuery, connection);
        SqlCommand^ valuecmd = gcnew SqlCommand(valueQuery, connection);
        SqlCommand^ salescmd = gcnew SqlCommand(salesQuery, connection);

        try {
            connection->Open();

            int totalProducts = safe_cast<int>(countcmd->ExecuteScalar());
            infoData->Add(totalProducts.ToString());

            SqlDataReader^ reader = valuecmd->ExecuteReader();

            int outOfStock = 0;
            int totalValue = 0;
            while (reader->Read()) {
                int quantity = reader->GetInt32(0);
                int price = reader->GetInt32(1);
                int currentValue = quantity * price;
                totalValue += currentValue;

                if (quantity == 0) {
                    outOfStock++;
                }
            }
            reader->Close();
            infoData->Add(totalValue.ToString("F2"));
            infoData->Add(outOfStock.ToString());

            SqlDataReader^ salesReader = salescmd->ExecuteReader();
            int totalSales = 0;
            while (salesReader->Read()) {
                double total = salesReader->GetDouble(0);
                totalSales += total;
            }
            infoData->Add(totalSales.ToString("F2"));
            salesReader->Close();
            return infoData;
        }
        catch (SqlException^ e) {
            MessageBox::Show("Error connecting to database: " + e->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            connection->Close();
        }
    }

    static void ValidatePriceQuantityInput(String^ inputQuantity, String^ inputPrice) {
        int quantity_value;
        int price_value;
        try {
            quantity_value = Convert::ToInt32(inputQuantity);
			price_value = Convert::ToInt32(inputPrice);
        }
        catch (FormatException^) {
            MessageBox::Show("Please enter a valid price or quantity.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    static void SqlInsert(String^ productName, String^ category, int quantity, int price, String^ description) {
        try {
            String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(connString);
            sqlConn->Open();

            String^ sqlQuery = "INSERT INTO product (product_name, category, quantity, price, description) " +
                "VALUES(@product_name, @category, @quantity, @price, @description)";

            SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, sqlConn);
            sqlCmd->Parameters->AddWithValue("@product_name", productName);
            sqlCmd->Parameters->AddWithValue("@category", category);
            sqlCmd->Parameters->AddWithValue("@quantity", quantity);
            sqlCmd->Parameters->AddWithValue("@price", price);
            sqlCmd->Parameters->AddWithValue("@description", description);

            sqlCmd->ExecuteNonQuery();
            MessageBox::Show("Product registered successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

            return;
        }
        catch (Exception^ ex) {
            MessageBox::Show("An error occurred while registering: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    static void SqlUpdate(int id, String^ productName, String^ category, int quantity, int price, String^ description) {
        try {
            String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(connString);
            sqlConn->Open();
            String^ sqlQuery = "UPDATE product SET product_name = @product_name, category = @category, quantity = @quantity, price = @price, description = @description WHERE Id = @id";
            SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, sqlConn);
            sqlCmd->Parameters->AddWithValue("@id", id);
            sqlCmd->Parameters->AddWithValue("@product_name", productName);
            sqlCmd->Parameters->AddWithValue("@category", category);
            sqlCmd->Parameters->AddWithValue("@quantity", quantity);
            sqlCmd->Parameters->AddWithValue("@price", price);
            sqlCmd->Parameters->AddWithValue("@description", description);
            sqlCmd->ExecuteNonQuery();
            MessageBox::Show("Product updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
            MessageBox::Show("An error occurred while updating: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
	}

    static DataTable^ LoadTables(String^ query) {
        String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";

        SqlConnection^ conn = gcnew SqlConnection(connString);
        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
        DataTable^ table = gcnew DataTable();

        try {
            conn->Open();
            adapter->Fill(table);
            return table;

        }
        catch (Exception^ e) {
            MessageBox::Show("Failed to load products " + e->Message);
        }
        finally {
            conn->Close();
        }
    }

    static void DeleteFromTable(int selectedId, String^ deleteQuery) {
        String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
        SqlConnection^ conn = gcnew SqlConnection(connString);
        SqlCommand^ cmd = gcnew SqlCommand(deleteQuery, conn);
        cmd->Parameters->AddWithValue("@Id", selectedId);

        try {
            conn->Open();
            int result = cmd->ExecuteNonQuery();

            if (result > 0) {
                MessageBox::Show("Product deleted successfully.");
            }
            else {
                MessageBox::Show("No product found with the selected ID.");
            }

            conn->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error deleting product: " + ex->Message);
        }
    }

    static DataTable^ SearchFromTable(String^ searchTerm, String^ query) {
        String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";

		SqlConnection^ conn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@searchTerm", "%" + searchTerm + "%");

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataTable^ table = gcnew DataTable();

		try {
			conn->Open();
			adapter->Fill(table);
			conn->Close();
            return table;
		} catch(Exception^ ex) {
			MessageBox::Show("Error searching products: " + ex->Message);
		}

	}
};
