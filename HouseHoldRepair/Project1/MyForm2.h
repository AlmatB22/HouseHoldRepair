#pragma once
# include "TalentCreation.h"
# include "TalentPage.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form^ prev;
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ obj)
		{
			prev = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbOutput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btCreateAccount;

	private: System::Windows::Forms::Button^ btBack;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbOutput = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btCreateAccount = (gcnew System::Windows::Forms::Button());
			this->btBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 31);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Hello Talent";
			// 
			// lbOutput
			// 
			this->lbOutput->AutoSize = true;
			this->lbOutput->Location = System::Drawing::Point(21, 95);
			this->lbOutput->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbOutput->Name = L"lbOutput";
			this->lbOutput->Size = System::Drawing::Size(42, 20);
			this->lbOutput->TabIndex = 9;
			this->lbOutput->Text = L"label";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 140);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Sign in";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 185);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 29);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Username";
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(24, 220);
			this->tbUsername->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(367, 26);
			this->tbUsername->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 255);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 29);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(26, 291);
			this->tbPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(367, 26);
			this->tbPassword->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 389);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(329, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"If you don\'t have an account,  just create one!";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 331);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// btCreateAccount
			// 
			this->btCreateAccount->Location = System::Drawing::Point(18, 417);
			this->btCreateAccount->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btCreateAccount->Name = L"btCreateAccount";
			this->btCreateAccount->Size = System::Drawing::Size(170, 35);
			this->btCreateAccount->TabIndex = 17;
			this->btCreateAccount->Text = L"Create Account";
			this->btCreateAccount->UseVisualStyleBackColor = true;
			this->btCreateAccount->Click += gcnew System::EventHandler(this, &MyForm2::btCreateAccountCus_Click);
			// 
			// btBack
			// 
			this->btBack->Location = System::Drawing::Point(282, 417);
			this->btBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btBack->Name = L"btBack";
			this->btBack->Size = System::Drawing::Size(112, 35);
			this->btBack->TabIndex = 18;
			this->btBack->Text = L"Back";
			this->btBack->UseVisualStyleBackColor = true;
			this->btBack->Click += gcnew System::EventHandler(this, &MyForm2::btBack_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 471);
			this->Controls->Add(this->btBack);
			this->Controls->Add(this->btCreateAccount);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbOutput);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm2";
			this->Text = L"ccou";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		prev->Show();
	}
private: System::Void btCreateAccountCus_Click(System::Object^ sender, System::EventArgs^ e) {
	TalentCreation^ next = gcnew TalentCreation(this);
		this->Hide();
		next->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = this->tbUsername->Text;
	String^ password = this->tbPassword->Text;
	String^ check;
	bool exist = false;
	String^ kek;
	String^ line;
	int index = 0;
	int count = 0;
	//StreamReader^ input_file = gcnew StreamReader("test.txt");  
//StreamWriter^ output_file = gcnew StreamWriter("test.txt.out");
	StreamReader^ input_file = File::OpenText("talent.txt");
	//StreamWriter^ output_file = File::CreateText("test.txt.out");
	//StreamWriter^ output_file = File::AppendText("test.txt.out");

	while ((kek = input_file->ReadLine()) != nullptr)
	{
		while (true)
		{
			if (kek[index] == ',')
			{
				if (count == 1)
				{

					break;
				}
				else
				{
					count++;
					index++;
				}
			}
			else
			{
				index++;
			}
		}
		check = kek->Substring(0, index);

		if (check == username + "," + password)
		{
			this->lbOutput->Text = "";
			MessageBox::Show("You have successfully logged in");

			exist = true;
			line = kek;

			break;

		}
		else
		{
			this->lbOutput->Text = "The username or password is incorrect";
		}
		index = 0;
		count = 0;
	}
	if (exist == true)
	{
		int arr[5];
		int count = 0;
		index = 0;
		for (int i = 0; i < line->Length; i++)
		{
			if (line[i] == ',')
			{
				arr[index] = count;
				index++;
				count = 0;
			}
			else
			{
				count++;
			}
		}
		String^ uname = line->Substring(0, arr[0]);
		String^ pass = line->Substring(arr[0] + 1, arr[1]);
		String^ name = line->Substring(arr[0] + arr[1] + 2, arr[2]);
		String^ lname = line->Substring(arr[0] + arr[1] + arr[2] + 3, arr[3]);
		String^ X = line->Substring(arr[0] + arr[1] + arr[2] + arr[3] + 4, arr[4]);
		String^ Y = line->Substring(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + 5);

		
		TalentPage^ nexyyy = gcnew TalentPage(uname, name, lname, this);
		this->Hide();
		nexyyy->ShowDialog();
	
		
		

		this->lbOutput->Text = "KEK";
		



	}

	input_file->Close();

}
};
}
