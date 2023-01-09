#pragma once


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for CustomerCreation
	/// </summary>
	public ref class CustomerCreation : public System::Windows::Forms::Form
	{
	public:
		
		Form^ prev;
		CustomerCreation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CustomerCreation( Form^ obj1)
		{
			prev = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerCreation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ tbUsername;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ tbX;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ tbY;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ tbFirstName;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ tbLastName;
	private: System::Windows::Forms::Button^ btCreateAccount;
	private: System::Windows::Forms::Button^ btBack;



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
			this->tbUsername = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbX = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbY = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btCreateAccount = (gcnew System::Windows::Forms::Button());
			this->btBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(504, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Type your personal information for the account creation";
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(42, 117);
			this->tbUsername->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(474, 26);
			this->tbUsername->TabIndex = 1;
			this->tbUsername->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CustomerCreation::tbUsername_MaskInputRejected);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &CustomerCreation::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 152);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &CustomerCreation::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(42, 183);
			this->tbPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(474, 26);
			this->tbPassword->TabIndex = 3;
			this->tbPassword->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CustomerCreation::maskedTextBox2_MaskInputRejected);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 362);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Coordinates:      X:";
			// 
			// tbX
			// 
			this->tbX->Location = System::Drawing::Point(183, 360);
			this->tbX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbX->Name = L"tbX";
			this->tbX->Size = System::Drawing::Size(96, 26);
			this->tbX->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(327, 362);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Y:";
			// 
			// tbY
			// 
			this->tbY->Location = System::Drawing::Point(384, 360);
			this->tbY->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbY->Name = L"tbY";
			this->tbY->Size = System::Drawing::Size(96, 26);
			this->tbY->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(38, 222);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"First Name";
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(42, 252);
			this->tbFirstName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(474, 26);
			this->tbFirstName->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(38, 289);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Last Name";
			// 
			// tbLastName
			// 
			this->tbLastName->Location = System::Drawing::Point(42, 320);
			this->tbLastName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(474, 26);
			this->tbLastName->TabIndex = 11;
			// 
			// btCreateAccount
			// 
			this->btCreateAccount->Location = System::Drawing::Point(78, 414);
			this->btCreateAccount->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btCreateAccount->Name = L"btCreateAccount";
			this->btCreateAccount->Size = System::Drawing::Size(180, 62);
			this->btCreateAccount->TabIndex = 13;
			this->btCreateAccount->Text = L"Create Account";
			this->btCreateAccount->UseVisualStyleBackColor = true;
			this->btCreateAccount->Click += gcnew System::EventHandler(this, &CustomerCreation::btCreateAccount_Click);
			// 
			// btBack
			// 
			this->btBack->Location = System::Drawing::Point(303, 414);
			this->btBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btBack->Name = L"btBack";
			this->btBack->Size = System::Drawing::Size(178, 62);
			this->btBack->TabIndex = 14;
			this->btBack->Text = L"Back";
			this->btBack->UseVisualStyleBackColor = true;
			this->btBack->Click += gcnew System::EventHandler(this, &CustomerCreation::btBack_Click);
			// 
			// CustomerCreation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 494);
			this->Controls->Add(this->btBack);
			this->Controls->Add(this->btCreateAccount);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->tbY);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbX);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"CustomerCreation";
			this->Text = L"CustomerCreation";
			this->Load += gcnew System::EventHandler(this, &CustomerCreation::CustomerCreation_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CustomerCreation_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbUsername_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}

private: System::Void btCreateAccount_Click(System::Object^ sender, System::EventArgs^ e) {
	

	
	//StreamWriter^ output_file = gcnew StreamWriter("test.txt");
	//StreamReader^ input_file = File::OpenText("test.txt");
	//StreamWriter^ output_file = File::CreateText("test.txt.out");
	StreamWriter^ output_file = File::AppendText("test.txt");

	String^ line;

	//while ((line = input_file-＞ReadLine()) != nullptr)
	//{
	// MessageBox::Show(line);
	// output_file-＞WriteLine(line);
	//}

	line = this->tbUsername->Text + "," + this->tbPassword->Text + "," + this->tbFirstName->Text + "," + this->tbLastName->Text + "," + this->tbX->Text + "," + this->tbY->Text;
	MessageBox::Show("The account was successfuly created");
	output_file->WriteLine(line);

	output_file->Close();

	this->Hide();
	prev->Show();
	
		

}
	





	

private: System::Void btBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	prev->Show();
}
};
}
