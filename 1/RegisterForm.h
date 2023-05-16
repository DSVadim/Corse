#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <direct.h>
#pragma once

namespace  My1 {
	typedef struct {
		char login[164];
		char password[164];
	} Registration;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ login;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ configpassword;
	protected:



	private: System::Windows::Forms::TextBox^ tbLogin;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbConfigPassword;
	private: System::Windows::Forms::Button^ btRegister;
	private: System::Windows::Forms::LinkLabel^ linkLogin;
	private: String^ RegBoxLogin;
	private: String^ RegBoxPassword;
	private: String^ RegBoxConfigPassword;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->configpassword = (gcnew System::Windows::Forms::Label());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfigPassword = (gcnew System::Windows::Forms::TextBox());
			this->btRegister = (gcnew System::Windows::Forms::Button());
			this->linkLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(458, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Реєстрація";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->BackColor = System::Drawing::Color::Transparent;
			this->login->ForeColor = System::Drawing::Color::White;
			this->login->Location = System::Drawing::Point(65, 115);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(47, 25);
			this->login->TabIndex = 1;
			this->login->Text = L"Ім\'я";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->BackColor = System::Drawing::Color::Transparent;
			this->password->ForeColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(65, 177);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(86, 25);
			this->password->TabIndex = 2;
			this->password->Text = L"Пароль";
			// 
			// configpassword
			// 
			this->configpassword->AutoSize = true;
			this->configpassword->BackColor = System::Drawing::Color::Transparent;
			this->configpassword->ForeColor = System::Drawing::Color::White;
			this->configpassword->Location = System::Drawing::Point(65, 239);
			this->configpassword->Name = L"configpassword";
			this->configpassword->Size = System::Drawing::Size(240, 25);
			this->configpassword->TabIndex = 2;
			this->configpassword->Text = L"Підтвердження пароль";
			// 
			// tbLogin
			// 
			this->tbLogin->Location = System::Drawing::Point(70, 143);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(375, 31);
			this->tbLogin->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(70, 205);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(375, 31);
			this->tbPassword->TabIndex = 3;
			// 
			// tbConfigPassword
			// 
			this->tbConfigPassword->Location = System::Drawing::Point(70, 267);
			this->tbConfigPassword->Name = L"tbConfigPassword";
			this->tbConfigPassword->Size = System::Drawing::Size(375, 31);
			this->tbConfigPassword->TabIndex = 3;
			// 
			// btRegister
			// 
			this->btRegister->AutoSize = true;
			this->btRegister->BackColor = System::Drawing::Color::Gray;
			this->btRegister->ForeColor = System::Drawing::Color::White;
			this->btRegister->Location = System::Drawing::Point(148, 346);
			this->btRegister->Name = L"btRegister";
			this->btRegister->Size = System::Drawing::Size(193, 35);
			this->btRegister->TabIndex = 4;
			this->btRegister->Text = L"Зареєструватися";
			this->btRegister->UseVisualStyleBackColor = false;
			this->btRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btRegister_Click);
			// 
			// linkLogin
			// 
			this->linkLogin->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLogin->AutoSize = true;
			this->linkLogin->BackColor = System::Drawing::Color::Transparent;
			this->linkLogin->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->linkLogin->LinkColor = System::Drawing::Color::White;
			this->linkLogin->Location = System::Drawing::Point(381, 301);
			this->linkLogin->Name = L"linkLogin";
			this->linkLogin->Size = System::Drawing::Size(64, 25);
			this->linkLogin->TabIndex = 5;
			this->linkLogin->TabStop = true;
			this->linkLogin->Text = L"Логін";
			this->linkLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(470, 393);
			this->Controls->Add(this->linkLogin);
			this->Controls->Add(this->btRegister);
			this->Controls->Add(this->tbConfigPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbLogin);
			this->Controls->Add(this->configpassword);
			this->Controls->Add(this->password);
			this->Controls->Add(this->login);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToLogin = false;
	private: System::Void linkLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void btRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		RegBoxLogin = System::Convert::ToString(tbLogin->Text);
		RegBoxPassword = System::Convert::ToString(tbPassword->Text);
		RegBoxConfigPassword = System::Convert::ToString(tbConfigPassword->Text);

		if (RegBoxPassword != RegBoxConfigPassword) {
			System::Windows::Forms::MessageBox::Show("Паролі не зівпали.", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		}
		else {
			char* temp_path = getenv("TEMP");
			char* folder_path = "\\Vadim\\Database";
			char file_name[255];

			sprintf(file_name, "%s%s", temp_path, folder_path);

			int result = mkdir(file_name);

			sprintf(file_name, "%s\\%s.bin", file_name, RegBoxLogin);

			char Usernamechar[64];
			sprintf(Usernamechar, "Login: %s", tbLogin->Text);
			char Passwordchar[128];
			sprintf(Passwordchar, "\nPassword: %s", tbPassword->Text);


			Registration registration;
			strcpy(registration.login, Usernamechar);
			strcpy(registration.password, Passwordchar);

			FILE* fp = fopen(file_name, "rb");
			if (fp == NULL) {
				fp = fopen(file_name, "wb");
				if (fp == NULL) {
					System::String^ temp_path_str = gcnew System::String(file_name);
					System::Windows::Forms::MessageBox::Show(temp_path_str, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				}
				else {
					fwrite(&registration, sizeof(Registration), 1, fp);
					fclose(fp);

				}
			}

			this->Close();
		}
	}
	};
}