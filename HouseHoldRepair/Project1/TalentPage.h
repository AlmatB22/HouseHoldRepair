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
	/// Summary for TalentPage
	/// </summary>
	public ref class TalentPage : public System::Windows::Forms::Form
	{
	public:
		Form^ prev;
		String^ username;
		String^ firstname;
		String^ lastname;
	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::Label^ lbOutput;
	public:

		TalentPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TalentPage(String^ username,String^ first, String^ last, Form^ p)
		{
			this->username = username;
			this->firstname = first;
			this->lastname = last;
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
		~TalentPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
			this->lbOutput = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Talent Page";
			// 
			// lbOutput
			// 
			this->lbOutput->AutoSize = true;
			this->lbOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbOutput->Location = System::Drawing::Point(36, 104);
			this->lbOutput->Name = L"lbOutput";
			this->lbOutput->Size = System::Drawing::Size(85, 29);
			this->lbOutput->TabIndex = 1;
			this->lbOutput->Text = L"label2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(733, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Log Out";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TalentPage::button1_Click);
			// 
			// TalentPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 440);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbOutput);
			this->Controls->Add(this->label1);
			this->Name = L"TalentPage";
			this->Text = L"TalentPage";
			this->Load += gcnew System::EventHandler(this, &TalentPage::TalentPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TalentPage_Load(System::Object^ sender, System::EventArgs^ e) {

		int c = 0;
		String^ line;
		int index = 0;
		int arr[4];
		index = 0;
		String^ t_username;
		String^ c_username;
		String^ c_lastname;
		String^ c_y;
		String^ c_x;
		String^ text = "You have assignment with: \n";
		this->label1->Text = this->username + " Page";
		StreamReader^ input_file = File::OpenText("assignment.txt");
		

		while ((line = input_file->ReadLine()) != nullptr)
		{
			for (int i = 0; i < line->Length; i++)
			{
				if (line[i] == ',')
				{
					arr[index] = c;
					index++;
					c = 0;
				}
				else
				{
					c++;
				}
			}
			t_username = line->Substring(0, arr[0]);
			c_username = line->Substring(arr[0] + 1, arr[1]);
			c_lastname = line->Substring(arr[0] + arr[1] + 2, arr[2]);
			c_x = line->Substring(arr[0] + arr[1] + arr[2] + 3, arr[3]);
			c_y = line->Substring(arr[0] + arr[1] + arr[2] + arr[3] + 4);

			if (this->username == t_username)
			{
				text = text + "\nUsername: " + c_username + " OR  MR. " + c_lastname + " Coordinates: (" + c_x + ", " + c_y + ") \n";
			}
			index = 0;
			c = 0;
		}
		this->lbOutput->Text = text + "\n Please contact them by their address";
		input_file->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		prev->Show();
	}
};
}
