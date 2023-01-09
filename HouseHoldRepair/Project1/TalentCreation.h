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
	/// Summary for TalentCreation
	/// </summary>
	public ref class TalentCreation : public System::Windows::Forms::Form
	{
	public:
		Form^ prev;
		TalentCreation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TalentCreation(Form^ p)
		{
			prev = p;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TalentCreation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btBack;
	protected:
	private: System::Windows::Forms::Button^ btCreateAccount;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ tbLastName;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ tbFirstName;
	private: System::Windows::Forms::MaskedTextBox^ tbY;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ tbX;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ tbPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ tbUsername;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbRating;

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
			this->btBack = (gcnew System::Windows::Forms::Button());
			this->btCreateAccount = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbY = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbX = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbRating = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btBack
			// 
			this->btBack->Location = System::Drawing::Point(306, 420);
			this->btBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btBack->Name = L"btBack";
			this->btBack->Size = System::Drawing::Size(178, 62);
			this->btBack->TabIndex = 29;
			this->btBack->Text = L"Back";
			this->btBack->UseVisualStyleBackColor = true;
			this->btBack->Click += gcnew System::EventHandler(this, &TalentCreation::btBack_Click);
			// 
			// btCreateAccount
			// 
			this->btCreateAccount->Location = System::Drawing::Point(70, 420);
			this->btCreateAccount->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btCreateAccount->Name = L"btCreateAccount";
			this->btCreateAccount->Size = System::Drawing::Size(180, 62);
			this->btCreateAccount->TabIndex = 28;
			this->btCreateAccount->Text = L"Create Account";
			this->btCreateAccount->UseVisualStyleBackColor = true;
			this->btCreateAccount->Click += gcnew System::EventHandler(this, &TalentCreation::btCreateAccount_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 243);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 25);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Last Name";
			// 
			// tbLastName
			// 
			this->tbLastName->Location = System::Drawing::Point(45, 273);
			this->tbLastName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(474, 26);
			this->tbLastName->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(41, 172);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 25);
			this->label6->TabIndex = 25;
			this->label6->Text = L"First Name";
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(46, 202);
			this->tbFirstName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(474, 26);
			this->tbFirstName->TabIndex = 24;
			// 
			// tbY
			// 
			this->tbY->Location = System::Drawing::Point(375, 319);
			this->tbY->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbY->Name = L"tbY";
			this->tbY->Size = System::Drawing::Size(96, 26);
			this->tbY->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(332, 319);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 25);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Y:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 318);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 25);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Coordinates:      X:";
			// 
			// tbX
			// 
			this->tbX->Location = System::Drawing::Point(199, 318);
			this->tbX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbX->Name = L"tbX";
			this->tbX->Size = System::Drawing::Size(96, 26);
			this->tbX->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(41, 111);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(45, 141);
			this->tbPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(474, 26);
			this->tbPassword->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 50);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 25);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Username";
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(45, 80);
			this->tbUsername->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(474, 26);
			this->tbUsername->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-113, -102);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(504, 30);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Type your personal information for the account creation";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(42, 357);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 25);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Rating: ";
			// 
			// tbRating
			// 
			this->tbRating->Location = System::Drawing::Point(119, 357);
			this->tbRating->Name = L"tbRating";
			this->tbRating->Size = System::Drawing::Size(81, 26);
			this->tbRating->TabIndex = 31;
			// 
			// TalentCreation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(552, 509);
			this->Controls->Add(this->tbRating);
			this->Controls->Add(this->label8);
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
			this->Name = L"TalentCreation";
			this->Text = L"TalentCreation";
			this->Load += gcnew System::EventHandler(this, &TalentCreation::TalentCreation_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TalentCreation_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btCreateAccount_Click(System::Object^ sender, System::EventArgs^ e) {
	
	StreamWriter^ output_file = File::AppendText("talent.txt");

	String^ line;

	//while ((line = input_file-＞ReadLine()) != nullptr)
	//{
	// MessageBox::Show(line);
	// output_file-＞WriteLine(line);
	//}

	line = this->tbUsername->Text + "," + this->tbPassword->Text + "," + this->tbFirstName->Text + "," + this->tbLastName->Text + "," + this->tbX->Text + "," + this->tbY->Text + "," + this->tbRating->Text;
	MessageBox::Show("The account was successfulyl created");
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
