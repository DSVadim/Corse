#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <direct.h>
#include <cstdio>
#include <cstring>
#include <msclr/marshal_cppstd.h> 
#include <msclr\marshal.h>



#pragma once

namespace My1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace	System::Runtime::InteropServices;
	using namespace	System::IO;
	using namespace msclr::interop;

	static struct  Question {
		char question_text[25];
		char v1[25];
		char v2[25];
		char v3[25];
		char v4[25];
		char v5[25];
		int answer;
	};
	static struct Question_list
	{
		 Question question;
		 Question_list* next;
		 Question_list* prev;
	};

	static Question_list* head = NULL;
	static Question_list* tail = NULL;
	static Question_list* global_pointer;
	static bool edit_mode = false;

	
	

	/// <summary>
	/// Summary for SystemForm1
	/// </summary>
	public ref class SystemForm : public System::Windows::Forms::Form
	{
	public:
		SystemForm(void)
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
		~SystemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ TP3;
	private: System::Windows::Forms::Button^ btReg;
	protected:

	private: System::Windows::Forms::Button^ btVnesok;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btSave;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ TP2;
	private: System::Windows::Forms::TabPage^ TP1;
	private: System::Windows::Forms::TabControl^ TC1;
	private: System::Windows::Forms::Button^ btRight;
	private: System::Windows::Forms::Button^ btLeft;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ TP4;

	private: System::Windows::Forms::Button^ btRight1;
	private: System::Windows::Forms::Button^ btLeft1;
	private: System::Windows::Forms::Button^ btSave1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ lb1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SystemForm::typeid));
			this->TP3 = (gcnew System::Windows::Forms::TabPage());
			this->btRight = (gcnew System::Windows::Forms::Button());
			this->btLeft = (gcnew System::Windows::Forms::Button());
			this->btReg = (gcnew System::Windows::Forms::Button());
			this->btVnesok = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btSave = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->TP2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->TP1 = (gcnew System::Windows::Forms::TabPage());
			this->TC1 = (gcnew System::Windows::Forms::TabControl());
			this->TP4 = (gcnew System::Windows::Forms::TabPage());
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->btRight1 = (gcnew System::Windows::Forms::Button());
			this->btLeft1 = (gcnew System::Windows::Forms::Button());
			this->btSave1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->TP3->SuspendLayout();
			this->TP2->SuspendLayout();
			this->TC1->SuspendLayout();
			this->TP4->SuspendLayout();
			this->SuspendLayout();
			// 
			// TP3
			// 
			this->TP3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TP3.BackgroundImage")));
			this->TP3->Controls->Add(this->btRight);
			this->TP3->Controls->Add(this->btLeft);
			this->TP3->Controls->Add(this->btReg);
			this->TP3->Controls->Add(this->btVnesok);
			this->TP3->Controls->Add(this->label3);
			this->TP3->Controls->Add(this->label2);
			this->TP3->Controls->Add(this->label1);
			this->TP3->Controls->Add(this->btSave);
			this->TP3->Controls->Add(this->textBox7);
			this->TP3->Controls->Add(this->textBox6);
			this->TP3->Controls->Add(this->textBox5);
			this->TP3->Controls->Add(this->textBox4);
			this->TP3->Controls->Add(this->textBox3);
			this->TP3->Controls->Add(this->textBox2);
			this->TP3->Controls->Add(this->textBox1);
			this->TP3->ForeColor = System::Drawing::Color::White;
			this->TP3->Location = System::Drawing::Point(4, 22);
			this->TP3->Name = L"TP3";
			this->TP3->Size = System::Drawing::Size(766, 479);
			this->TP3->TabIndex = 2;
			this->TP3->Text = L"Створити тест";
			this->TP3->UseVisualStyleBackColor = true;
			// 
			// btRight
			// 
			this->btRight->ForeColor = System::Drawing::Color::Black;
			this->btRight->Location = System::Drawing::Point(505, 425);
			this->btRight->Name = L"btRight";
			this->btRight->Size = System::Drawing::Size(39, 34);
			this->btRight->TabIndex = 4;
			this->btRight->Text = L">";
			this->btRight->UseVisualStyleBackColor = true;
			this->btRight->Click += gcnew System::EventHandler(this, &SystemForm::btRight_Click);
			// 
			// btLeft
			// 
			this->btLeft->ForeColor = System::Drawing::Color::Black;
			this->btLeft->Location = System::Drawing::Point(275, 424);
			this->btLeft->Name = L"btLeft";
			this->btLeft->Size = System::Drawing::Size(39, 34);
			this->btLeft->TabIndex = 4;
			this->btLeft->Text = L"<";
			this->btLeft->UseVisualStyleBackColor = true;
			this->btLeft->Click += gcnew System::EventHandler(this, &SystemForm::btLeft_Click);
			// 
			// btReg
			// 
			this->btReg->ForeColor = System::Drawing::Color::Black;
			this->btReg->Location = System::Drawing::Point(17, 65);
			this->btReg->Name = L"btReg";
			this->btReg->Size = System::Drawing::Size(94, 23);
			this->btReg->TabIndex = 3;
			this->btReg->Text = L"Редагування";
			this->btReg->UseVisualStyleBackColor = true;
			this->btReg->Click += gcnew System::EventHandler(this, &SystemForm::btReg_Click);
			// 
			// btVnesok
			// 
			this->btVnesok->ForeColor = System::Drawing::Color::Black;
			this->btVnesok->Location = System::Drawing::Point(17, 33);
			this->btVnesok->Name = L"btVnesok";
			this->btVnesok->Size = System::Drawing::Size(94, 23);
			this->btVnesok->TabIndex = 3;
			this->btVnesok->Text = L"Внесення";
			this->btVnesok->UseVisualStyleBackColor = true;
			this->btVnesok->Click += gcnew System::EventHandler(this, &SystemForm::btVnesok_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(257, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Номер правильна відповідь";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(295, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Варіанти відповідей";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(336, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Запитання";
			// 
			// btSave
			// 
			this->btSave->ForeColor = System::Drawing::Color::Black;
			this->btSave->Location = System::Drawing::Point(341, 424);
			this->btSave->Name = L"btSave";
			this->btSave->Size = System::Drawing::Size(136, 35);
			this->btSave->TabIndex = 1;
			this->btSave->Text = L"Зберегти";
			this->btSave->UseVisualStyleBackColor = true;
			this->btSave->Click += gcnew System::EventHandler(this, &SystemForm::btSave_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(222, 368);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(362, 31);
			this->textBox7->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(222, 272);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(362, 31);
			this->textBox6->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(222, 235);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(362, 31);
			this->textBox5->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(222, 198);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(362, 31);
			this->textBox4->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(222, 161);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(362, 31);
			this->textBox3->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(222, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(362, 31);
			this->textBox2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(222, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(362, 31);
			this->textBox1->TabIndex = 0;
			// 
			// TP2
			// 
			this->TP2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TP2.BackgroundImage")));
			this->TP2->Controls->Add(this->richTextBox1);
			this->TP2->Location = System::Drawing::Point(4, 22);
			this->TP2->Name = L"TP2";
			this->TP2->Padding = System::Windows::Forms::Padding(3);
			this->TP2->Size = System::Drawing::Size(766, 479);
			this->TP2->TabIndex = 1;
			this->TP2->Text = L"Результат тестів";
			this->TP2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(312, 479);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// TP1
			// 
			this->TP1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TP1.BackgroundImage")));
			this->TP1->Location = System::Drawing::Point(4, 22);
			this->TP1->Name = L"TP1";
			this->TP1->Padding = System::Windows::Forms::Padding(3);
			this->TP1->Size = System::Drawing::Size(766, 479);
			this->TP1->TabIndex = 0;
			this->TP1->Text = L"Перелік тестів";
			this->TP1->UseVisualStyleBackColor = true;
			// 
			// TC1
			// 
			this->TC1->Controls->Add(this->TP4);
			this->TC1->Controls->Add(this->TP1);
			this->TC1->Controls->Add(this->TP2);
			this->TC1->Controls->Add(this->TP3);
			this->TC1->Location = System::Drawing::Point(0, 1);
			this->TC1->Name = L"TC1";
			this->TC1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TC1->RightToLeftLayout = true;
			this->TC1->SelectedIndex = 0;
			this->TC1->Size = System::Drawing::Size(774, 505);
			this->TC1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->TC1->TabIndex = 0;
			this->TC1->TabStop = false;
			// 
			// TP4
			// 
			this->TP4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TP4.BackgroundImage")));
			this->TP4->Controls->Add(this->lb1);
			this->TP4->Controls->Add(this->btRight1);
			this->TP4->Controls->Add(this->btLeft1);
			this->TP4->Controls->Add(this->btSave1);
			this->TP4->Controls->Add(this->label5);
			this->TP4->Controls->Add(this->label4);
			this->TP4->Controls->Add(this->radioButton5);
			this->TP4->Controls->Add(this->radioButton4);
			this->TP4->Controls->Add(this->radioButton3);
			this->TP4->Controls->Add(this->radioButton2);
			this->TP4->Controls->Add(this->radioButton1);
			this->TP4->Controls->Add(this->textBox8);
			this->TP4->Location = System::Drawing::Point(4, 22);
			this->TP4->Name = L"TP4";
			this->TP4->Size = System::Drawing::Size(766, 479);
			this->TP4->TabIndex = 3;
			this->TP4->Text = L"Проходження тестів";
			this->TP4->UseVisualStyleBackColor = true;
			// 
			// lb1
			// 
			this->lb1->AutoSize = true;
			this->lb1->Location = System::Drawing::Point(628, 34);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(0, 13);
			this->lb1->TabIndex = 8;
			// 
			// btRight1
			// 
			this->btRight1->ForeColor = System::Drawing::Color::Black;
			this->btRight1->Location = System::Drawing::Point(497, 376);
			this->btRight1->Name = L"btRight1";
			this->btRight1->Size = System::Drawing::Size(39, 34);
			this->btRight1->TabIndex = 7;
			this->btRight1->Text = L">";
			this->btRight1->UseVisualStyleBackColor = true;
			// 
			// btLeft1
			// 
			this->btLeft1->ForeColor = System::Drawing::Color::Black;
			this->btLeft1->Location = System::Drawing::Point(267, 375);
			this->btLeft1->Name = L"btLeft1";
			this->btLeft1->Size = System::Drawing::Size(39, 34);
			this->btLeft1->TabIndex = 6;
			this->btLeft1->Text = L"<";
			this->btLeft1->UseVisualStyleBackColor = true;
			// 
			// btSave1
			// 
			this->btSave1->ForeColor = System::Drawing::Color::Black;
			this->btSave1->Location = System::Drawing::Point(333, 375);
			this->btSave1->Name = L"btSave1";
			this->btSave1->Size = System::Drawing::Size(136, 35);
			this->btSave1->TabIndex = 5;
			this->btSave1->Text = L"Зберегти";
			this->btSave1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(340, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Варіанти";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(340, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Завдання";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(226, 283);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(226, 248);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(226, 178);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(226, 213);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(226, 143);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(226, 75);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(337, 31);
			this->textBox8->TabIndex = 0;
			// 
			// SystemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(771, 504);
			this->Controls->Add(this->TC1);
			this->Name = L"SystemForm";
			this->Text = L"SystemForm1";
			this->Load += gcnew System::EventHandler(this, &SystemForm::SystemForm_Load_1);
			this->TP3->ResumeLayout(false);
			this->TP3->PerformLayout();
			this->TP2->ResumeLayout(false);
			this->TC1->ResumeLayout(false);
			this->TP4->ResumeLayout(false);
			this->TP4->PerformLayout();
			this->ResumeLayout(false);

		}
		void print(Question_list* p)
		{
			textBox1->Text = marshal_as<String^>(p->question.question_text);
			textBox2->Text = marshal_as<String^>(p->question.v1);
			textBox3->Text = marshal_as<String^>(p->question.v2);
			textBox4->Text = marshal_as<String^>(p->question.v3);
			textBox5->Text = marshal_as<String^>(p->question.v4);
			textBox6->Text = marshal_as<String^>(p->question.v5);
			textBox7->Text = p->question.answer.ToString();
		}
		char* GetUsername() {
		char* temp_path = getenv("TEMP");
		char* folder_path2 = "\\Vadim\\User info\\User.bin";
		char file_name[255];

		sprintf(file_name, "%s%s", temp_path, folder_path2);

		char* login = (char*)malloc(64);
		FILE* fp = fopen(file_name, "rb");
		char line[256];
		return login;
		fclose(fp);
		}
		void push_end(Question_list*& head, Question_list*& tail, char* question_text, char* v1,
			char* v2, char* v3, char* v4, char* v5, int answer)
		{
			Question_list* NewNode =
				(Question_list*)malloc(sizeof(Question_list));
			strcpy(NewNode->question.question_text, question_text);
			strcpy(NewNode->question.v1, v1);
			strcpy(NewNode->question.v2, v2);
			strcpy(NewNode->question.v3, v3);
			strcpy(NewNode->question.v4, v4);
			strcpy(NewNode->question.v5, v5);
			NewNode->question.answer = answer;
			if (head == NULL)
			{
				NewNode->next = NULL;
				NewNode->prev = NULL;
				tail = NewNode;
				head = NewNode;
				return;
			}
			else
			{
				NewNode->next = NULL;
				tail->next = NewNode;
				NewNode->prev = tail;
				tail = NewNode;
			}
		}
		void Delete(Question_list*& head, Question_list*& tail)
		{
			Question_list* temp = head;
			while (head)
			{
				head = head->next;
				free(temp);
				temp = head;
			}
			head = NULL;
			tail = NULL;
		}
		
#pragma endregion
		//char* System_to_char(System::String^ string, int max_length)
		//{
			//std::string stdString = marshal_as<std::string>(string);


			//if (stdString.length() > max_length)
		//	{
		//		stdString = stdString.substr(0, max_length);
		//	}

			//char* charString = new char[max_length + 1];
			//strcpy_s(charString, max_length + 1, stdString.c_str());

			//return charString;
		//}
		
		char* System_to_char(String^ s)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			return (char*)ptr;
		}

private: System::Void btSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") &&
		(textBox4->Text != "") && (textBox5->Text != "") && (textBox6->Text != "") && (textBox7 -> Text != ""))
{ 
		
		Question Question1;
		FILE* f;
	
		strcpy(Question1.question_text,System_to_char(textBox1->Text));
		strcpy(Question1.v1, System_to_char(textBox2->Text));
		strcpy(Question1.v2, System_to_char(textBox3->Text));
		strcpy(Question1.v3, System_to_char(textBox4->Text));
		strcpy(Question1.v4, System_to_char(textBox5->Text));
		strcpy(Question1.v5, System_to_char(textBox6->Text));
		Question1.answer = Convert::ToInt64(textBox7->Text);
	if (edit_mode == true) 
	{ 
		strcpy(global_pointer->question.question_text,Question1.question_text);
		strcpy(global_pointer->question.v1, Question1.v1);
		strcpy(global_pointer->question.v2, Question1.v2);
		strcpy(global_pointer->question.v3, Question1.v3);
		strcpy(global_pointer->question.v4, Question1.v4);
		strcpy(global_pointer->question.v5, Question1.v5);
		global_pointer->question.answer = Question1.answer;
		Question_list* temp = head;
		f = fopen("Question_file.txt", "wb");
		fclose(f);
		f = fopen("Question_file.txt", "ab");
			while (temp)
			{
				fwrite(&(*temp), sizeof(Question1), 1, f);
				temp = temp->next;
			}
		fclose(f);
	}
	else
	{
		f = fopen("Question_file.txt", "ab");
		fwrite(&Question1, sizeof(Question1), 1, f);
		fclose(f);
		
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
	}
}
else MessageBox::Show("Заповніть всі поля", "Помилка");
btSave->Enabled = true; 
}

	   void changeVisibility(bool state)
	   {
		   for each (Control ^ c in this->Controls)
		   {
			   if (c->Tag == "1")
				   c->Visible = state;
		   }
	   }

private: System::Void btVnesok_Click(System::Object^ sender, System::EventArgs^ e) {
	btSave->Enabled = true; 
	edit_mode = false;
	changeVisibility(true); 
	btLeft->Visible = false;
	btRight->Visible = false;
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
}
private: System::Void btLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	btRight->Enabled = true;
		if (global_pointer->prev != NULL)
		{
			global_pointer = global_pointer->prev; 
			print(global_pointer);
			if (global_pointer->prev == NULL) btLeft->Enabled = false;
		}
}


private: System::Void btRight_Click(System::Object^ sender, System::EventArgs^ e) {
	btLeft->Enabled = true;
	if (global_pointer->next != NULL)
	{
		global_pointer = global_pointer->next;
		print(global_pointer);
		if (global_pointer->next == NULL) btRight->Enabled = false;
	}
}
private: System::Void SystemForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	char* login = GetUsername();
	this->lb1->Text = gcnew String(login);
	changeVisibility(false);

	String^ user = gcnew String(GetUsername());

	if (user != "Admin.bin") {
		TP3->Visible = false;
		TP4->Visible = true;

	}
	else {
		TP3->Visible = true;
		TP4->Visible = false;
	}
}

private: System::Void btReg_Click(System::Object^ sender, System::EventArgs^ e) {
	btSave->Enabled = true; 
	btLeft->Enabled = false; 
	btLeft->Visible = true;
	btRight->Visible = true;
	btRight->Enabled = true;
	edit_mode = true;
	if (head != NULL) Delete(head, tail); 
		Question Question1;
	FILE* f2;
	if ((f2 = fopen("Question_file.txt", "rb")) == NULL) 
	{
		MessageBox::Show("Питання відсутні", "Помилка");
		return;
	};
	fread(&Question1, sizeof(Question1), 1, f2); 
		while (!feof(f2))
		{
			push_end(head, tail, Question1.question_text, Question1.v1, Question1.v2,
				Question1.v3, Question1.v4, Question1.v5, Question1.answer);
			fread(&Question1, sizeof(Question1), 1, f2);
		}
	fclose(f2);
	global_pointer = head; 
	print(global_pointer);
	changeVisibility(true); 
}
};
}


