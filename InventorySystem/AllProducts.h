#pragma once
#include "AddProduct.h"
#include "Product.h"
#include "DatabaseHelper.h"

namespace InventorySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;

	/// <summary>
	/// Summary for AllProducts
	/// </summary>
	public ref class AllProducts : public System::Windows::Forms::Form
	{
	public:

		AllProducts(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
			DataTable^ productsTable = DatabaseHelper::LoadTables("SELECT Id, product_name, category, quantity, price, description FROM product");
			dataGridViewProduct->DataSource = productsTable;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllProducts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbSearch;
	private: System::Windows::Forms::Button^ bttnSearch;
	private: System::Windows::Forms::Button^ bttnAdd;


	private: System::Windows::Forms::DataGridView^ dataGridViewProduct;
	private: System::Windows::Forms::Button^ bttnCancel;
	private: System::Windows::Forms::Button^ bttnDelete;
	private: System::Windows::Forms::Button^ bttnEdit;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->bttnSearch = (gcnew System::Windows::Forms::Button());
			this->bttnAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridViewProduct = (gcnew System::Windows::Forms::DataGridView());
			this->bttnCancel = (gcnew System::Windows::Forms::Button());
			this->bttnDelete = (gcnew System::Windows::Forms::Button());
			this->bttnEdit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProduct))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1146, 58);
			this->label1->TabIndex = 1;
			this->label1->Text = L"  View All Products";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(32, 85);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(816, 34);
			this->tbSearch->TabIndex = 2;
			this->tbSearch->Text = L"Search product by name, or category...";
			this->tbSearch->TextChanged += gcnew System::EventHandler(this, &AllProducts::tbSearch_TextChanged);
			// 
			// bttnSearch
			// 
			this->bttnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->bttnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnSearch->ForeColor = System::Drawing::Color::White;
			this->bttnSearch->Location = System::Drawing::Point(865, 78);
			this->bttnSearch->Name = L"bttnSearch";
			this->bttnSearch->Size = System::Drawing::Size(120, 50);
			this->bttnSearch->TabIndex = 3;
			this->bttnSearch->Text = L"Search";
			this->bttnSearch->UseVisualStyleBackColor = false;
			this->bttnSearch->Click += gcnew System::EventHandler(this, &AllProducts::bttnSearch_Click);
			// 
			// bttnAdd
			// 
			this->bttnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bttnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnAdd->ForeColor = System::Drawing::Color::White;
			this->bttnAdd->Location = System::Drawing::Point(991, 78);
			this->bttnAdd->Name = L"bttnAdd";
			this->bttnAdd->Size = System::Drawing::Size(120, 50);
			this->bttnAdd->TabIndex = 4;
			this->bttnAdd->Text = L"Add New";
			this->bttnAdd->UseVisualStyleBackColor = false;
			this->bttnAdd->Click += gcnew System::EventHandler(this, &AllProducts::bttnAdd_Click);
			// 
			// dataGridViewProduct
			// 
			this->dataGridViewProduct->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewProduct->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewProduct->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewProduct->ColumnHeadersHeight = 45;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewProduct->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewProduct->EnableHeadersVisualStyles = false;
			this->dataGridViewProduct->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->dataGridViewProduct->Location = System::Drawing::Point(32, 162);
			this->dataGridViewProduct->MultiSelect = false;
			this->dataGridViewProduct->Name = L"dataGridViewProduct";
			this->dataGridViewProduct->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewProduct->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewProduct->RowHeadersWidth = 30;
			this->dataGridViewProduct->RowTemplate->Height = 24;
			this->dataGridViewProduct->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewProduct->Size = System::Drawing::Size(1079, 382);
			this->dataGridViewProduct->TabIndex = 5;
			// 
			// bttnCancel
			// 
			this->bttnCancel->BackColor = System::Drawing::Color::White;
			this->bttnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bttnCancel->Location = System::Drawing::Point(980, 562);
			this->bttnCancel->Margin = System::Windows::Forms::Padding(4);
			this->bttnCancel->Name = L"bttnCancel";
			this->bttnCancel->Size = System::Drawing::Size(131, 54);
			this->bttnCancel->TabIndex = 8;
			this->bttnCancel->Text = L"Cancel";
			this->bttnCancel->UseVisualStyleBackColor = false;
			this->bttnCancel->Click += gcnew System::EventHandler(this, &AllProducts::bttnCancel_Click);
			// 
			// bttnDelete
			// 
			this->bttnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bttnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnDelete->ForeColor = System::Drawing::Color::White;
			this->bttnDelete->Location = System::Drawing::Point(171, 562);
			this->bttnDelete->Margin = System::Windows::Forms::Padding(4);
			this->bttnDelete->Name = L"bttnDelete";
			this->bttnDelete->Size = System::Drawing::Size(131, 54);
			this->bttnDelete->TabIndex = 9;
			this->bttnDelete->Text = L"Delete";
			this->bttnDelete->UseVisualStyleBackColor = false;
			this->bttnDelete->Click += gcnew System::EventHandler(this, &AllProducts::bttnDelete_Click);
			// 
			// bttnEdit
			// 
			this->bttnEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->bttnEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnEdit->ForeColor = System::Drawing::Color::White;
			this->bttnEdit->Location = System::Drawing::Point(32, 562);
			this->bttnEdit->Margin = System::Windows::Forms::Padding(4);
			this->bttnEdit->Name = L"bttnEdit";
			this->bttnEdit->Size = System::Drawing::Size(131, 54);
			this->bttnEdit->TabIndex = 10;
			this->bttnEdit->Text = L"Edit";
			this->bttnEdit->UseVisualStyleBackColor = false;
			this->bttnEdit->Click += gcnew System::EventHandler(this, &AllProducts::bttnEdit_Click);
			// 
			// AllProducts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(1144, 643);
			this->Controls->Add(this->bttnEdit);
			this->Controls->Add(this->bttnDelete);
			this->Controls->Add(this->bttnCancel);
			this->Controls->Add(this->dataGridViewProduct);
			this->Controls->Add(this->bttnAdd);
			this->Controls->Add(this->bttnSearch);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->label1);
			this->Name = L"AllProducts";
			this->Text = L"All Products";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProduct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Product^ product = nullptr;
	void backToDashboard();
	void addProductForm();
	void editProductForm();
	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=inventoryDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";

	void loadTable() {
		DataTable^ productsTable = DatabaseHelper::LoadTables("SELECT Id, product_name, category, quantity, price, description FROM product");
		dataGridViewProduct->DataSource = productsTable;
	}
	
	void getProductDetails() {
		if (dataGridViewProduct->SelectedRows->Count == 0) {
			MessageBox::Show("Please select a product to edit details.");
			return;
		}

		int selectedId = Convert::ToInt32(dataGridViewProduct->SelectedRows[0]->Cells["Id"]->Value);
		String^ query = "SELECT * FROM product WHERE Id = @Id";
		SqlConnection^ conn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@Id", selectedId);
		try {
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->Read()) {
				product = gcnew Product();
				product->id = reader->GetInt32(0);
				product->product_name = reader->GetString(1);
				product->category = reader->GetString(2);
				product->quantity = reader->GetInt32(3);
				product->price = reader->GetInt32(4);
				product->description = reader->GetString(5);
			}
			else {
				MessageBox::Show("No product found with the selected ID.");
			}
			conn->Close();
			editProductForm();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Error retrieving product details: " + ex->Message);
		}
	}

	private: System::Void bttnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		backToDashboard();
	}
	private: System::Void bttnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		addProductForm();
	}
	private: System::Void bttnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		getProductDetails();
	}
	private: System::Void bttnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewProduct->SelectedRows->Count == 0) {
			MessageBox::Show("Please select a product to delete.");
			return;
		}
		int selectedId = Convert::ToInt32(dataGridViewProduct->SelectedRows[0]->Cells["Id"]->Value);
		DatabaseHelper::DeleteFromTable(selectedId, "DELETE FROM product WHERE Id = @Id");
		loadTable();
	}
	private: System::Void bttnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ searchTerm = tbSearch->Text->Trim();
		if (searchTerm->Length == 0) {
			MessageBox::Show("Please enter a search term.");
			return;
		}
		DataTable^ searchResults = DatabaseHelper::SearchFromTable(searchTerm, "SELECT * FROM product WHERE product_name LIKE @searchTerm OR category LIKE @searchTerm");
		dataGridViewProduct->DataSource = searchResults;
	}
	private: System::Void tbSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (tbSearch->Text->Length == 0) {
			loadTable();
		}
	}
};
}
