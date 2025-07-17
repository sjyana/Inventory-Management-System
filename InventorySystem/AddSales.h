#pragma once
#include "SalesDatabaseHelper.h"
#include "DatabaseHelper.h"


namespace InventorySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddSales
	/// </summary>
	public ref class AddSales : public System::Windows::Forms::Form
	{
	public:
		AddSales(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
			DataTable^ products = DatabaseHelper::LoadTables("SELECT Id, product_name, category, quantity, price, description FROM product");
			cbProduct->Items->Clear();
			for each (DataRow^ row in products->Rows){
				cbProduct->Items->Add(row["product_name"]->ToString());
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddSales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ tbQuantity;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ bttnCancel;
	private: System::Windows::Forms::Button^ bttnView;
	private: System::Windows::Forms::Button^ bttnSave;


	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbProduct;
	private: System::Windows::Forms::DateTimePicker^ dtPicker;

	private: System::Windows::Forms::Label^ lblPrice;
	private: System::Windows::Forms::ComboBox^ cbMOP;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


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
			this->tbQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bttnCancel = (gcnew System::Windows::Forms::Button());
			this->bttnView = (gcnew System::Windows::Forms::Button());
			this->bttnSave = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbProduct = (gcnew System::Windows::Forms::ComboBox());
			this->dtPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->cbMOP = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbQuantity))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbQuantity
			// 
			this->tbQuantity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbQuantity->Location = System::Drawing::Point(459, 115);
			this->tbQuantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(170, 34);
			this->tbQuantity->TabIndex = 26;
			this->tbQuantity->ValueChanged += gcnew System::EventHandler(this, &AddSales::tbQuantity_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->groupBox1->Controls->Add(this->bttnCancel);
			this->groupBox1->Controls->Add(this->bttnView);
			this->groupBox1->Controls->Add(this->bttnSave);
			this->groupBox1->Location = System::Drawing::Point(34, 411);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(595, 87);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			// 
			// bttnCancel
			// 
			this->bttnCancel->BackColor = System::Drawing::Color::White;
			this->bttnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bttnCancel->Location = System::Drawing::Point(452, 20);
			this->bttnCancel->Margin = System::Windows::Forms::Padding(4);
			this->bttnCancel->Name = L"bttnCancel";
			this->bttnCancel->Size = System::Drawing::Size(131, 54);
			this->bttnCancel->TabIndex = 2;
			this->bttnCancel->Text = L"Cancel";
			this->bttnCancel->UseVisualStyleBackColor = false;
			this->bttnCancel->Click += gcnew System::EventHandler(this, &AddSales::bttnCancel_Click);
			// 
			// bttnView
			// 
			this->bttnView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->bttnView->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnView->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnView->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bttnView->Location = System::Drawing::Point(166, 20);
			this->bttnView->Margin = System::Windows::Forms::Padding(4);
			this->bttnView->Name = L"bttnView";
			this->bttnView->Size = System::Drawing::Size(161, 54);
			this->bttnView->TabIndex = 1;
			this->bttnView->Text = L"View All Sales";
			this->bttnView->UseVisualStyleBackColor = false;
			this->bttnView->Click += gcnew System::EventHandler(this, &AddSales::bttnView_Click);
			// 
			// bttnSave
			// 
			this->bttnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bttnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnSave->ForeColor = System::Drawing::Color::White;
			this->bttnSave->Location = System::Drawing::Point(15, 20);
			this->bttnSave->Margin = System::Windows::Forms::Padding(4);
			this->bttnSave->Name = L"bttnSave";
			this->bttnSave->Size = System::Drawing::Size(143, 54);
			this->bttnSave->TabIndex = 0;
			this->bttnSave->Text = L"Save Sale";
			this->bttnSave->UseVisualStyleBackColor = false;
			this->bttnSave->Click += gcnew System::EventHandler(this, &AddSales::bttnSave_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(453, 270);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 28);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Total Price";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(453, 170);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 28);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Unit Price";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(453, 82);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 28);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Quantity";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 170);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 28);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Date and Time";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 82);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 28);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Product Name";
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
			this->label1->Size = System::Drawing::Size(668, 58);
			this->label1->TabIndex = 15;
			this->label1->Text = L"  Add New Sales";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// cbProduct
			// 
			this->cbProduct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbProduct->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbProduct->FormattingEnabled = true;
			this->cbProduct->Location = System::Drawing::Point(33, 113);
			this->cbProduct->Margin = System::Windows::Forms::Padding(4);
			this->cbProduct->Name = L"cbProduct";
			this->cbProduct->Size = System::Drawing::Size(361, 36);
			this->cbProduct->TabIndex = 27;
			this->cbProduct->SelectedIndexChanged += gcnew System::EventHandler(this, &AddSales::cbProduct_SelectedIndexChanged);
			// 
			// dtPicker
			// 
			this->dtPicker->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtPicker->Location = System::Drawing::Point(33, 201);
			this->dtPicker->Name = L"dtPicker";
			this->dtPicker->Size = System::Drawing::Size(361, 34);
			this->dtPicker->TabIndex = 28;
			// 
			// lblPrice
			// 
			this->lblPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrice->Location = System::Drawing::Point(481, 198);
			this->lblPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(148, 34);
			this->lblPrice->TabIndex = 30;
			// 
			// cbMOP
			// 
			this->cbMOP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbMOP->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbMOP->FormattingEnabled = true;
			this->cbMOP->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Cash", L"GCash", L"Debit/Credit Card" });
			this->cbMOP->Location = System::Drawing::Point(33, 302);
			this->cbMOP->Margin = System::Windows::Forms::Padding(4);
			this->cbMOP->Name = L"cbMOP";
			this->cbMOP->Size = System::Drawing::Size(361, 36);
			this->cbMOP->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 270);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(250, 28);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Mode of Payment";
			// 
			// lblTotal
			// 
			this->lblTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(480, 298);
			this->lblTotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(143, 34);
			this->lblTotal->TabIndex = 33;
			this->lblTotal->Text = L"0.00";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(462, 198);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 34);
			this->label8->TabIndex = 34;
			this->label8->Text = L"₱";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(462, 298);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 34);
			this->label9->TabIndex = 35;
			this->label9->Text = L"₱";
			// 
			// AddSales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(668, 532);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblTotal);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cbMOP);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->dtPicker);
			this->Controls->Add(this->cbProduct);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddSales";
			this->Text = L"Add Sales";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbQuantity))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	void backToDashboard();
	void allSalesForm();
	void initTextBoxes() {
		cbProduct->SelectedIndex = -1;
		tbQuantity->Value = 0;
		lblPrice->Text = "0.00";
		cbMOP->SelectedIndex = -1;
		dtPicker->Value = DateTime::Now;
	}

    private: System::Void cbProduct_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbProduct->SelectedItem == nullptr) {
			lblPrice->Text = "0.00";
			return;
		}
		String^ selectedProduct = cbProduct->SelectedItem->ToString();
		DataTable^ products = DatabaseHelper::LoadTables("SELECT Id, product_name, category, quantity, price, description FROM product");
		for each(DataRow^ row in products->Rows) {
			if (row["product_name"]->ToString() == selectedProduct) {
				lblPrice->Text = row["price"]->ToString();
				break;
			}
		}
    }

	private: System::Void bttnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productName = cbProduct->SelectedItem->ToString();
		int quantity = static_cast<int>(tbQuantity->Value);
		int price = System::Convert::ToInt32(lblPrice->Text);
		int total = quantity * price;
		String^ paymentMethod = cbMOP->SelectedItem->ToString();
		DateTime saleDate = dtPicker->Value;

		if (productName->Length == 0 || quantity <= 0 || price <= 0 || paymentMethod->Length == 0) {
			MessageBox::Show("Please fill in all fields correctly.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		SalesDatabaseHelper::SqlInsertSales(productName, quantity, total, paymentMethod, saleDate);
		initTextBoxes();
	}
	private: System::Void tbQuantity_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int quantity = static_cast<int>(tbQuantity->Value);
		// With this safer version to avoid FormatException:
		double price = 0.0;
		if (!double::TryParse(lblPrice->Text, price)) {
			price = 0.0;
		}
		double total = quantity * price;
		lblTotal->Text = total.ToString("F2"); 
		lblTotal->Refresh();
	}
	private: System::Void bttnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		backToDashboard();
	}
	private: System::Void bttnView_Click(System::Object^ sender, System::EventArgs^ e) {
		allSalesForm();
	}
};
}
