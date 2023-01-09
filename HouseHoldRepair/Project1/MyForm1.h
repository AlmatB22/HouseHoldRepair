#pragma once
#include "CustomerCreation.h"
#include "CustomerPage.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ prev;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(Form^ obj)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btCreateAccountCus;
	private: System::Windows::Forms::Label^ lbOutput;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btBack;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btCreateAccountCus = (gcnew System::Windows::Forms::Button());
			this->lbOutput = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btBack = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hello Customer";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sign in";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Username";
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(26, 126);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(246, 20);
			this->tbUsername->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(26, 183);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(246, 20);
			this->tbPassword->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(225, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"If you don\'t have an account,  just create one!";
			// 
			// btCreateAccountCus
			// 
			this->btCreateAccountCus->Location = System::Drawing::Point(26, 270);
			this->btCreateAccountCus->Name = L"btCreateAccountCus";
			this->btCreateAccountCus->Size = System::Drawing::Size(113, 23);
			this->btCreateAccountCus->TabIndex = 7;
			this->btCreateAccountCus->Text = L"Create Account";
			this->btCreateAccountCus->UseVisualStyleBackColor = true;
			this->btCreateAccountCus->Click += gcnew System::EventHandler(this, &MyForm1::btCreateAccountCus_Click);
			// 
			// lbOutput
			// 
			this->lbOutput->AutoSize = true;
			this->lbOutput->Location = System::Drawing::Point(23, 58);
			this->lbOutput->Name = L"lbOutput";
			this->lbOutput->Size = System::Drawing::Size(29, 13);
			this->lbOutput->TabIndex = 8;
			this->lbOutput->Text = L"label";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// btBack
			// 
			this->btBack->Location = System::Drawing::Point(197, 270);
			this->btBack->Name = L"btBack";
			this->btBack->Size = System::Drawing::Size(75, 23);
			this->btBack->TabIndex = 10;
			this->btBack->Text = L"Back";
			this->btBack->UseVisualStyleBackColor = true;
			this->btBack->Click += gcnew System::EventHandler(this, &MyForm1::btBack_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 305);
			this->Controls->Add(this->btBack);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbOutput);
			this->Controls->Add(this->btCreateAccountCus);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbOutput->Text = "";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String ^username = this->tbUsername->Text;
		String^ password = this->tbPassword->Text;
		String^ check;
		bool exist = false;
		String^ kek;
		String^ line;
		int index = 0;
		int count = 0;
		//StreamReader^ input_file = gcnew StreamReader("test.txt");  
	//StreamWriter^ output_file = gcnew StreamWriter("test.txt.out");
		StreamReader^ input_file = File::OpenText("test.txt");
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
			check = kek->Substring(0,index);

			if (check == username + "," +password)
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

			CustomerPage^ nexty = gcnew CustomerPage(uname,name, lname, X, Y, this);
			this->lbOutput->Text = "";
			this->Hide();
			nexty->ShowDialog();
			
			
			
		}
		
		input_file->Close();

		//while ((line = input_file-＞ReadLine()) != nullptr)
		//{
		// MessageBox::Show(line);
		// output_file-＞WriteLine(line);
		//}
		//line = input_file->ReadLine();
		//MessageBox::Show(line);
		//output_file->WriteLine(line);
		
		//while ((line = input_file->ReadLine()) != nullptr)
			//{
			// MessageBox::Show(line);
			 
			//}


		//if (input_file)
		//{
			//input_file - ＞Close();
			//output_file - ＞Close();
		//}
		
	}

private: System::Void btBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	prev->Show();
}
private: System::Void btCreateAccountCus_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	CustomerCreation^ next = gcnew CustomerCreation(this);
	next->ShowDialog();
}
};
}
