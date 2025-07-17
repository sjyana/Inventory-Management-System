#pragma once
#include "DatabaseHelper.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
using namespace System::Data;
using namespace System::Collections::Generic;

public ref class SalesDatabaseHelper abstract sealed {
public:

    static int GetProductQuantity(String^ productName) {
        int quantity = -1; // default if not found

        String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
        String^ query = "SELECT quantity FROM product WHERE product_name = @product_name";

        SqlConnection^ conn = gcnew SqlConnection(connString);
        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        cmd->Parameters->AddWithValue("@product_name", productName);

        try {
            conn->Open();
            Object^ result = cmd->ExecuteScalar();
            if (result != nullptr) {
                quantity = Convert::ToInt32(result);
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error fetching quantity: " + ex->Message);
        }
        finally {
            conn->Close();
        }

        return quantity;
    }

    static void EditProductQuantity(String^ product_name, int quantity) {
        String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
        SqlConnection^ sqlConn = gcnew SqlConnection(connString);
        String^ sqlQuery = "UPDATE product SET quantity = @quantity WHERE product_name = @product_name";
        try {
            sqlConn->Open();
            SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, sqlConn);
            sqlCmd->Parameters->AddWithValue("@quantity", quantity);
            sqlCmd->Parameters->AddWithValue("@product_name", product_name);
            sqlCmd->ExecuteNonQuery();
            return;
        }
        catch (Exception^ ex) {
            MessageBox::Show("An error occurred while updating: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    static void SqlInsertSales(String^ productName, int quantity, double total, String^ mode_of_payment, DateTime^ date_time) {
        int product_quantity = GetProductQuantity(productName);
        if (product_quantity >= quantity) {
            EditProductQuantity(productName, product_quantity - quantity);
        }
        else {
            MessageBox::Show("Insufficient stock for the selected product.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        try {
            String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(connString);
            sqlConn->Open();

            String^ sqlQuery = "INSERT INTO sales (Product_Name, Quantity, Total, Mode_of_Payment, Date_Time) " +
                "VALUES(@product_name, @quantity, @total, @mode_of_payment, @date_time)";

            SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, sqlConn);
            sqlCmd->Parameters->AddWithValue("@product_name", productName);
            sqlCmd->Parameters->AddWithValue("@quantity", quantity);
            sqlCmd->Parameters->AddWithValue("@total", total);
            sqlCmd->Parameters->AddWithValue("@mode_of_payment", mode_of_payment);
            sqlCmd->Parameters->AddWithValue("@date_time", date_time);

            sqlCmd->ExecuteNonQuery();
            MessageBox::Show("Sales added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }
        catch (Exception^ ex) {
            MessageBox::Show("An error occurred while addding: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    
};