#pragma once
#include "AddProduct.h"
#include "AllProducts.h"
#include "DatabaseHelper.h"

namespace InventorySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
			List<String^>^ infoData = gcnew List<String^>();
			infoData = DatabaseHelper::initDashboard();
			lblTotalProduct->Text = infoData[0];
			lblTotalValue->Text = infoData[1];
			lblOutOfStock->Text = infoData[2];
			lblTotalSales->Text = infoData[3];

			DataTable^ salesTable = DatabaseHelper::LoadTables("SELECT * FROM product WHERE quantity <= 5");
			dataGridViewStock->DataSource = salesTable;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lblTotalProduct;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblTotalValue;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblOutOfStock;
	private: System::Windows::Forms::Button^ bttnAllProducts;
	private: System::Windows::Forms::Button^ bttnAddProduct;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblTotalSales;
	private: System::Windows::Forms::DataGridView^ dataGridViewStock;




	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblTotalProduct = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblTotalValue = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblOutOfStock = (gcnew System::Windows::Forms::Label());
			this->bttnAllProducts = (gcnew System::Windows::Forms::Button());
			this->bttnAddProduct = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblTotalSales = (gcnew System::Windows::Forms::Label());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->BeginInit();
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
			this->label1->Location = System::Drawing::Point(-1, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1105, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"  Inventory Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->lblTotalProduct);
			this->groupBox1->Location = System::Drawing::Point(27, 79);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(215, 143);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(5, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Total Products";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTotalProduct
			// 
			this->lblTotalProduct->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTotalProduct->BackColor = System::Drawing::Color::Transparent;
			this->lblTotalProduct->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalProduct->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lblTotalProduct->Location = System::Drawing::Point(5, 32);
			this->lblTotalProduct->Name = L"lblTotalProduct";
			this->lblTotalProduct->Size = System::Drawing::Size(203, 46);
			this->lblTotalProduct->TabIndex = 2;
			this->lblTotalProduct->Text = L"0";
			this->lblTotalProduct->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->lblTotalValue);
			this->groupBox2->Location = System::Drawing::Point(257, 79);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(288, 143);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->label6->Location = System::Drawing::Point(17, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 46);
			this->label6->TabIndex = 4;
			this->label6->Text = L"₱";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(5, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Total Product Value";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTotalValue
			// 
			this->lblTotalValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTotalValue->BackColor = System::Drawing::Color::Transparent;
			this->lblTotalValue->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalValue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lblTotalValue->Location = System::Drawing::Point(46, 32);
			this->lblTotalValue->Name = L"lblTotalValue";
			this->lblTotalValue->Size = System::Drawing::Size(224, 46);
			this->lblTotalValue->TabIndex = 2;
			this->lblTotalValue->Text = L"0";
			this->lblTotalValue->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->lblOutOfStock);
			this->groupBox3->Location = System::Drawing::Point(863, 79);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(215, 143);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(5, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 30);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Out of Stock";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblOutOfStock
			// 
			this->lblOutOfStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblOutOfStock->BackColor = System::Drawing::Color::Transparent;
			this->lblOutOfStock->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOutOfStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lblOutOfStock->Location = System::Drawing::Point(5, 32);
			this->lblOutOfStock->Name = L"lblOutOfStock";
			this->lblOutOfStock->Size = System::Drawing::Size(203, 46);
			this->lblOutOfStock->TabIndex = 2;
			this->lblOutOfStock->Text = L"0";
			this->lblOutOfStock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bttnAllProducts
			// 
			this->bttnAllProducts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->bttnAllProducts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnAllProducts->FlatAppearance->BorderSize = 0;
			this->bttnAllProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnAllProducts->ForeColor = System::Drawing::Color::Transparent;
			this->bttnAllProducts->Location = System::Drawing::Point(27, 238);
			this->bttnAllProducts->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttnAllProducts->Name = L"bttnAllProducts";
			this->bttnAllProducts->Size = System::Drawing::Size(158, 54);
			this->bttnAllProducts->TabIndex = 0;
			this->bttnAllProducts->Text = L"View Products";
			this->bttnAllProducts->UseVisualStyleBackColor = false;
			this->bttnAllProducts->Click += gcnew System::EventHandler(this, &Dashboard::bttnAllProducts_Click);
			// 
			// bttnAddProduct
			// 
			this->bttnAddProduct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bttnAddProduct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnAddProduct->FlatAppearance->BorderSize = 0;
			this->bttnAddProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnAddProduct->ForeColor = System::Drawing::Color::White;
			this->bttnAddProduct->Location = System::Drawing::Point(191, 238);
			this->bttnAddProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bttnAddProduct->Name = L"bttnAddProduct";
			this->bttnAddProduct->Size = System::Drawing::Size(158, 54);
			this->bttnAddProduct->TabIndex = 5;
			this->bttnAddProduct->Text = L"Add Product";
			this->bttnAddProduct->UseVisualStyleBackColor = false;
			this->bttnAddProduct->Click += gcnew System::EventHandler(this, &Dashboard::bttnAddProduct_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(355, 238);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 54);
			this->button1->TabIndex = 6;
			this->button1->Text = L"View Sales";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(519, 238);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 54);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Add Sale";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(20, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1044, 44);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Low Stock Items (≤5 units)";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->lblTotalSales);
			this->groupBox4->Location = System::Drawing::Point(560, 79);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(288, 143);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->label7->Location = System::Drawing::Point(35, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 46);
			this->label7->TabIndex = 4;
			this->label7->Text = L"₱";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(5, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(276, 30);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Total Sales";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTotalSales
			// 
			this->lblTotalSales->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTotalSales->BackColor = System::Drawing::Color::Transparent;
			this->lblTotalSales->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalSales->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lblTotalSales->Location = System::Drawing::Point(63, 32);
			this->lblTotalSales->Name = L"lblTotalSales";
			this->lblTotalSales->Size = System::Drawing::Size(207, 46);
			this->lblTotalSales->TabIndex = 2;
			this->lblTotalSales->Text = L"0";
			this->lblTotalSales->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dataGridViewStock
			// 
			this->dataGridViewStock->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewStock->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
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
			this->dataGridViewStock->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewStock->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewStock->EnableHeadersVisualStyles = false;
			this->dataGridViewStock->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->dataGridViewStock->Location = System::Drawing::Point(27, 365);
			this->dataGridViewStock->MultiSelect = false;
			this->dataGridViewStock->Name = L"dataGridViewStock";
			this->dataGridViewStock->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewStock->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewStock->RowHeadersWidth = 30;
			this->dataGridViewStock->RowTemplate->Height = 24;
			this->dataGridViewStock->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewStock->Size = System::Drawing::Size(1051, 154);
			this->dataGridViewStock->TabIndex = 16;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1103, 555);
			this->Controls->Add(this->dataGridViewStock);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bttnAddProduct);
			this->Controls->Add(this->bttnAllProducts);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void addProductForm();
		void allProductsForm();
		void salesForm();
		void allSalesForm();
	private: System::Void bttnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		addProductForm();
	}
	private: System::Void bttnAllProducts_Click(System::Object^ sender, System::EventArgs^ e) {
		allProductsForm();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		salesForm();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		allSalesForm();
	}
};
}
