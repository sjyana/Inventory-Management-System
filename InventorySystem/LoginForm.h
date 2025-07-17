#pragma once

namespace InventorySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ bttnOK;
	private: System::Windows::Forms::Button^ bttnCancel;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->bttnOK = (gcnew System::Windows::Forms::Button());
			this->bttnCancel = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(-2, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(627, 58);
			this->label1->TabIndex = 1;
			this->label1->Text = L"  Admin Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 40);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 40);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(249, 115);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(329, 34);
			this->txtUsername->TabIndex = 4;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(249, 171);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(329, 34);
			this->txtPassword->TabIndex = 5;
			// 
			// bttnOK
			// 
			this->bttnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->bttnOK->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnOK->ForeColor = System::Drawing::Color::White;
			this->bttnOK->Location = System::Drawing::Point(249, 251);
			this->bttnOK->Name = L"bttnOK";
			this->bttnOK->Size = System::Drawing::Size(160, 56);
			this->bttnOK->TabIndex = 6;
			this->bttnOK->Text = L"OK";
			this->bttnOK->UseVisualStyleBackColor = false;
			this->bttnOK->Click += gcnew System::EventHandler(this, &LoginForm::bttnOK_Click);
			// 
			// bttnCancel
			// 
			this->bttnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bttnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnCancel->ForeColor = System::Drawing::Color::White;
			this->bttnCancel->Location = System::Drawing::Point(415, 251);
			this->bttnCancel->Name = L"bttnCancel";
			this->bttnCancel->Size = System::Drawing::Size(163, 56);
			this->bttnCancel->TabIndex = 7;
			this->bttnCancel->Text = L"Cancel";
			this->bttnCancel->UseVisualStyleBackColor = false;
			this->bttnCancel->Click += gcnew System::EventHandler(this, &LoginForm::bttnCancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 372);
			this->Controls->Add(this->bttnCancel);
			this->Controls->Add(this->bttnOK);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool LoginSuccessful = false;

	private: System::Void bttnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bttnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;

		if(username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter both username and password.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if(username == "admin" && password == "pass123") {
			LoginSuccessful = true;
			this->Close(); 
		} else {
			MessageBox::Show("Invalid username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
