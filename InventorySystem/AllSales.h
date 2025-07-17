#pragma once
#include "DatabaseHelper.h"
#include "SalesDatabaseHelper.h"

namespace InventorySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AllSales
	/// </summary>
	public ref class AllSales : public System::Windows::Forms::Form
	{
	public:
		AllSales(void)
		{
			InitializeComponent(); 
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
			DataTable^ salesTable = DatabaseHelper::LoadTables("SELECT Id, product_name, quantity, total, mode_of_payment, date_time FROM sales");
			dataGridViewSales->DataSource = salesTable;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllSales()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ bttnDelete;
	private: System::Windows::Forms::Button^ bttnCancel;
	private: System::Windows::Forms::DataGridView^ dataGridViewSales;
	private: System::Windows::Forms::Button^ bttnAdd;
	private: System::Windows::Forms::Button^ bttnSearch;
	private: System::Windows::Forms::TextBox^ tbSearch;
	private: System::Windows::Forms::Label^ label1;

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
			this->bttnDelete = (gcnew System::Windows::Forms::Button());
			this->bttnCancel = (gcnew System::Windows::Forms::Button());
			this->dataGridViewSales = (gcnew System::Windows::Forms::DataGridView());
			this->bttnAdd = (gcnew System::Windows::Forms::Button());
			this->bttnSearch = (gcnew System::Windows::Forms::Button());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSales))->BeginInit();
			this->SuspendLayout();
			// 
			// bttnDelete
			// 
			this->bttnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bttnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnDelete->ForeColor = System::Drawing::Color::White;
			this->bttnDelete->Location = System::Drawing::Point(31, 562);
			this->bttnDelete->Margin = System::Windows::Forms::Padding(4);
			this->bttnDelete->Name = L"bttnDelete";
			this->bttnDelete->Size = System::Drawing::Size(131, 54);
			this->bttnDelete->TabIndex = 17;
			this->bttnDelete->Text = L"Delete";
			this->bttnDelete->UseVisualStyleBackColor = false;
			this->bttnDelete->Click += gcnew System::EventHandler(this, &AllSales::bttnDelete_Click);
			// 
			// bttnCancel
			// 
			this->bttnCancel->BackColor = System::Drawing::Color::White;
			this->bttnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bttnCancel->Location = System::Drawing::Point(170, 562);
			this->bttnCancel->Margin = System::Windows::Forms::Padding(4);
			this->bttnCancel->Name = L"bttnCancel";
			this->bttnCancel->Size = System::Drawing::Size(131, 54);
			this->bttnCancel->TabIndex = 16;
			this->bttnCancel->Text = L"Cancel";
			this->bttnCancel->UseVisualStyleBackColor = false;
			this->bttnCancel->Click += gcnew System::EventHandler(this, &AllSales::bttnCancel_Click);
			// 
			// dataGridViewSales
			// 
			this->dataGridViewSales->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewSales->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
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
			this->dataGridViewSales->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewSales->ColumnHeadersHeight = 45;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewSales->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewSales->EnableHeadersVisualStyles = false;
			this->dataGridViewSales->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->dataGridViewSales->Location = System::Drawing::Point(31, 162);
			this->dataGridViewSales->MultiSelect = false;
			this->dataGridViewSales->Name = L"dataGridViewSales";
			this->dataGridViewSales->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewSales->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewSales->RowHeadersWidth = 30;
			this->dataGridViewSales->RowTemplate->Height = 24;
			this->dataGridViewSales->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewSales->Size = System::Drawing::Size(1079, 382);
			this->dataGridViewSales->TabIndex = 15;
			// 
			// bttnAdd
			// 
			this->bttnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bttnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnAdd->ForeColor = System::Drawing::Color::White;
			this->bttnAdd->Location = System::Drawing::Point(990, 78);
			this->bttnAdd->Name = L"bttnAdd";
			this->bttnAdd->Size = System::Drawing::Size(120, 50);
			this->bttnAdd->TabIndex = 14;
			this->bttnAdd->Text = L"Add New";
			this->bttnAdd->UseVisualStyleBackColor = false;
			this->bttnAdd->Click += gcnew System::EventHandler(this, &AllSales::bttnAdd_Click);
			// 
			// bttnSearch
			// 
			this->bttnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->bttnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnSearch->ForeColor = System::Drawing::Color::White;
			this->bttnSearch->Location = System::Drawing::Point(864, 78);
			this->bttnSearch->Name = L"bttnSearch";
			this->bttnSearch->Size = System::Drawing::Size(120, 50);
			this->bttnSearch->TabIndex = 13;
			this->bttnSearch->Text = L"Search";
			this->bttnSearch->UseVisualStyleBackColor = false;
			this->bttnSearch->Click += gcnew System::EventHandler(this, &AllSales::bttnSearch_Click);
			// 
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(31, 85);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(816, 34);
			this->tbSearch->TabIndex = 12;
			this->tbSearch->Text = L"Search product by name, date and time, or mode of payment...";
			this->tbSearch->TextChanged += gcnew System::EventHandler(this, &AllSales::tbSearch_TextChanged);
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
			this->label1->Location = System::Drawing::Point(-1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1146, 58);
			this->label1->TabIndex = 11;
			this->label1->Text = L"  View All Sales";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// AllSales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(1144, 643);
			this->Controls->Add(this->bttnDelete);
			this->Controls->Add(this->bttnCancel);
			this->Controls->Add(this->dataGridViewSales);
			this->Controls->Add(this->bttnAdd);
			this->Controls->Add(this->bttnSearch);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->label1);
			this->Name = L"AllSales";
			this->Text = L"All Sales";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSales))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void backToDashboard();
	void addSaleForm();
	void loadTable() {
		DataTable^ salesTable = DatabaseHelper::LoadTables("SELECT Id, Product_Name, Quantity, Total, Mode_of_Payment, Date_Time FROM sales");
		dataGridViewSales->DataSource = salesTable;
	}
	private: System::Void bttnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewSales->SelectedRows->Count == 0) {
			MessageBox::Show("Please select sale information to delete.");
			return;
		}
		int selectedId = Convert::ToInt32(dataGridViewSales->SelectedRows[0]->Cells["Id"]->Value);
		DatabaseHelper::DeleteFromTable(selectedId, "DELETE FROM sales WHERE Id = @Id");
		loadTable();
	}
	private: System::Void bttnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ searchTerm = tbSearch->Text->Trim();
		if (searchTerm->Length == 0) {
			MessageBox::Show("Please enter a search term.");
			return;
		}
		DataTable^ searchResults = DatabaseHelper::SearchFromTable(searchTerm, "SELECT * FROM sales WHERE Product_Name LIKE @searchTerm OR Mode_of_Payment LIKE @searchTerm OR Date_Time LIKE @searchTerm");
		dataGridViewSales->DataSource = searchResults;
	}
	private: System::Void tbSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (tbSearch->Text->Length == 0) {
			loadTable();
		}
	}
	private: System::Void bttnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		backToDashboard();
	}
	private: System::Void bttnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		addSaleForm();
	}
};
}
