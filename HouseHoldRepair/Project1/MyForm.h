#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private: System::Windows::Forms::Button^ btTalent;
	private: System::Windows::Forms::Button^ btCustomer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;







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
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->btTalent = (gcnew System::Windows::Forms::Button());
			this->btCustomer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btTalent
			// 
			this->btTalent->Location = System::Drawing::Point(241, 164);
			this->btTalent->Name = L"btTalent";
			this->btTalent->Size = System::Drawing::Size(193, 137);
			this->btTalent->TabIndex = 3;
			this->btTalent->Text = L"Talent";
			this->btTalent->UseVisualStyleBackColor = true;
			this->btTalent->Click += gcnew System::EventHandler(this, &MyForm::btTalent_Click);
			// 
			// btCustomer
			// 
			this->btCustomer->Location = System::Drawing::Point(12, 164);
			this->btCustomer->Name = L"btCustomer";
			this->btCustomer->Size = System::Drawing::Size(193, 137);
			this->btCustomer->TabIndex = 4;
			this->btCustomer->Text = L"Customer";
			this->btCustomer->UseVisualStyleBackColor = true;
			this->btCustomer->Click += gcnew System::EventHandler(this, &MyForm::btCustomer_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label1->Location = System::Drawing::Point(103, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Welcome to the HER program";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(117, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Choose type of the account ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(446, 322);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btCustomer);
			this->Controls->Add(this->btTalent);
			this->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void btCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm1^ customer = gcnew MyForm1(this);
	customer->ShowDialog();
}
private: System::Void btTalent_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm2^ talent = gcnew MyForm2(this);
	talent->ShowDialog();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
