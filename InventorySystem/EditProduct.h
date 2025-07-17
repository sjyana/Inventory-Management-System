#pragma once
#include "Product.h"
#include "DatabaseHelper.h"

namespace InventorySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditProduct
	/// </summary>
	public ref class EditProduct : public System::Windows::Forms::Form
	{
	public:
		EditProduct(Product^ product)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//

			if (product == nullptr) {
				MessageBox::Show("Product data is missing.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
				return;
			}

			tbProductName->Text = product->product_name;
			tbID->Text = product->id.ToString();
			tbQuantity->Value = product->quantity;
			tbPrice->Text = product->price.ToString();
			cbCategory->Text = product->category;
			tbDescription->Text = product->description;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ tbQuantity;
	protected:

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ bttnCancel;
	private: System::Windows::Forms::Button^ bttnView;
	private: System::Windows::Forms::Button^ bttnSave;
	private: System::Windows::Forms::ComboBox^ cbCategory;
	private: System::Windows::Forms::RichTextBox^ tbDescription;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPrice;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbProductName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ tbID;

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
			this->cbCategory = (gcnew System::Windows::Forms::ComboBox());
			this->tbDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbID = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbQuantity))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbQuantity
			// 
			this->tbQuantity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbQuantity->Location = System::Drawing::Point(646, 116);
			this->tbQuantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(202, 34);
			this->tbQuantity->TabIndex = 26;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->groupBox1->Controls->Add(this->bttnCancel);
			this->groupBox1->Controls->Add(this->bttnView);
			this->groupBox1->Controls->Add(this->bttnSave);
			this->groupBox1->Location = System::Drawing::Point(35, 412);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(815, 87);
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
			this->bttnCancel->Location = System::Drawing::Point(669, 20);
			this->bttnCancel->Margin = System::Windows::Forms::Padding(4);
			this->bttnCancel->Name = L"bttnCancel";
			this->bttnCancel->Size = System::Drawing::Size(131, 54);
			this->bttnCancel->TabIndex = 2;
			this->bttnCancel->Text = L"Cancel";
			this->bttnCancel->UseVisualStyleBackColor = false;
			this->bttnCancel->Click += gcnew System::EventHandler(this, &EditProduct::bttnCancel_Click);
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
			this->bttnView->Location = System::Drawing::Point(177, 20);
			this->bttnView->Margin = System::Windows::Forms::Padding(4);
			this->bttnView->Name = L"bttnView";
			this->bttnView->Size = System::Drawing::Size(200, 54);
			this->bttnView->TabIndex = 1;
			this->bttnView->Text = L"View All Products";
			this->bttnView->UseVisualStyleBackColor = false;
			this->bttnView->Click += gcnew System::EventHandler(this, &EditProduct::bttnView_Click);
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
			this->bttnSave->Size = System::Drawing::Size(155, 54);
			this->bttnSave->TabIndex = 0;
			this->bttnSave->Text = L"Save Product";
			this->bttnSave->UseVisualStyleBackColor = false;
			this->bttnSave->Click += gcnew System::EventHandler(this, &EditProduct::bttnSave_Click);
			// 
			// cbCategory
			// 
			this->cbCategory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbCategory->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCategory->FormattingEnabled = true;
			this->cbCategory->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Electronics", L"Furniture", L"Stationery", L"Home & Kitchen",
					L"Beauty & Health", L"Toys & Games", L"Apparel"
			});
			this->cbCategory->Location = System::Drawing::Point(35, 203);
			this->cbCategory->Margin = System::Windows::Forms::Padding(4);
			this->cbCategory->Name = L"cbCategory";
			this->cbCategory->Size = System::Drawing::Size(361, 36);
			this->cbCategory->TabIndex = 24;
			// 
			// tbDescription
			// 
			this->tbDescription->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbDescription->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDescription->Location = System::Drawing::Point(35, 295);
			this->tbDescription->Margin = System::Windows::Forms::Padding(4);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(813, 78);
			this->tbDescription->TabIndex = 23;
			this->tbDescription->Text = L"";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 263);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 28);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Description";
			// 
			// tbPrice
			// 
			this->tbPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPrice->Location = System::Drawing::Point(487, 203);
			this->tbPrice->Margin = System::Windows::Forms::Padding(4);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(361, 34);
			this->tbPrice->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(481, 171);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 28);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Price";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(641, 83);
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
			this->label3->Location = System::Drawing::Point(29, 171);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 28);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Category";
			// 
			// tbProductName
			// 
			this->tbProductName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbProductName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProductName->Location = System::Drawing::Point(35, 115);
			this->tbProductName->Margin = System::Windows::Forms::Padding(4);
			this->tbProductName->Name = L"tbProductName";
			this->tbProductName->Size = System::Drawing::Size(361, 34);
			this->tbProductName->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 83);
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
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(884, 58);
			this->label1->TabIndex = 15;
			this->label1->Text = L"  Edit Product";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(480, 83);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 28);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Product ID";
			// 
			// tbID
			// 
			this->tbID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbID->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tbID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbID->Location = System::Drawing::Point(487, 115);
			this->tbID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(141, 34);
			this->tbID->TabIndex = 29;
			// 
			// EditProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(884, 532);
			this->Controls->Add(this->tbID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cbCategory);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbProductName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditProduct";
			this->Text = L"Edit Product";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbQuantity))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void allProductsForm();
	void backToDashboard();
	private: System::Void bttnView_Click(System::Object^ sender, System::EventArgs^ e) {
		allProductsForm();
	}
	private: System::Void bttnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		backToDashboard();
	}
	private: System::Void bttnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productName = tbProductName->Text;
		String^ category = cbCategory->SelectedItem->ToString();
		DatabaseHelper::ValidatePriceQuantityInput(tbQuantity->Text, tbPrice->Text);
		String^ description = tbDescription->Text;

		if (productName->Length == 0 || category->Length == 0 || tbQuantity->Text->Length == 0 || tbPrice->Text->Length == 0) {
			MessageBox::Show("Please fill in all fields.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		DatabaseHelper::SqlUpdate(Convert::ToInt32(tbID->Text), productName, category, Convert::ToInt32(tbQuantity->Text), Convert::ToInt32(tbPrice->Text), description);
		allProductsForm();
	}
};
}
