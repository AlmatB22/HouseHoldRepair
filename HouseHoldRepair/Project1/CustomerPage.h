#pragma once
#include <iostream>
#include <math.h>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for CustomerPage
	/// </summary>
	
	ref class Talent
	{
	public:
		String^ username;
		String^ first_name;
		String^ last_name;
		int X;
		int Y;
		int rating;
		double factor;
		Talent(String^ user, String^ f, String^ l, int x, int y, int rate, int customer_x, int customer_y)
		{
			this->username = user;
			this->first_name = f;
			this->last_name = l;
			this->X = x;
			this->Y = y;
			this->rating = rate;

			double distance;
			double x1;
			double y1;
			x1 = pow(x - customer_x, 2);
			y1 = pow(y - customer_y, 2);
			distance = pow(x1 + y1, 0.5);
			this->factor = distance + (5 - rating) * 2;
		}

	};
	public ref class CustomerPage : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		String^ firstname;
		String^ lastname;
		int X;
		Form^ prev;
	private: System::Windows::Forms::TextBox^ tbNumber;
	private: System::Windows::Forms::Button^ btEnter;
	public:

	public:
		int Y;
	private: System::Windows::Forms::Button^ button1;
	public:
		array<Talent^>^ talents1;
		CustomerPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CustomerPage(String^ usern,String^ n, String^ l, String^ x, String^ y, Form^ p)
		{
			this->username = usern;
			this->firstname = n;
			this->lastname = l;
			this->X = Convert::ToInt32(x);
			this->Y = Convert::ToInt32(y);
			this->prev = p;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int NumberOfTalents()
		{
			StreamReader^ input_file = File::OpenText("talent.txt");
			int count = 0;
			String^ kek;

			while ((kek = input_file->ReadLine()) != nullptr)
			{
				count++;
			}
			return count;
			input_file->Close();
		}
		
		void heapify(array<Talent^>^ arr, int N, int i)
		{
			int smallest = i;
			int left = 2 * i + 1;
			int right = 2 * i + 2;
			
			if ((left < N) && (arr[left]->factor < arr[smallest]->factor))
			{
				smallest = left;
			}
			if ((right < N) && (arr[right]->factor < arr[smallest]->factor))
			{
				smallest = right;
			}

			if (i != smallest)
			{
				Talent ^temp;
				temp = arr[smallest];
				arr[smallest] = arr[i];
				arr[i] = temp;
				heapify(arr, N, smallest);

			}
		}
		void HeapSort(array<Talent^>^ arr, int N)
		{
			for (int k = N / 2 - 1; k >= 0; k--)
			{
				heapify(arr, N, k);
			}

			for(int i = N - 1; i >= 0; i--)
			{
				Talent^ temp;
				temp = arr[0];
				arr[0] = arr[i];
				arr[i] = temp;

				heapify(arr, i, 0);
			}
		}
		bool Check(String^ t_username, String^ cus_username)
		{
			StreamReader^ input_file = File::OpenText("assignment.txt");
			int count = 0;
			String^ line;
			int status;
			String^ talent_username;
			String^ c_username;
			String^ c_firstname;
			String^ c_lastname;
			int arr[4];
			int index = 0;
			int c = 0;

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
				talent_username = line->Substring(0, arr[0]);
				c_username = line->Substring(arr[0] + 1, arr[1]);
				c_firstname = line->Substring(arr[0] + arr[1] + 2, arr[2]);
				c_lastname = line->Substring(arr[0] + arr[1] + arr[2] + 3, arr[3]);

				if (cus_username == c_username && talent_username == t_username)
				{
					input_file->Close();
					return true;
				}

				c = 0;
				index = 0;
			}
			input_file->Close();
			return false;
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbHello;
	private: System::Windows::Forms::Label^ lbCoordinate;
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
			this->lbHello = (gcnew System::Windows::Forms::Label());
			this->lbCoordinate = (gcnew System::Windows::Forms::Label());
			this->tbNumber = (gcnew System::Windows::Forms::TextBox());
			this->btEnter = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbHello
			// 
			this->lbHello->AutoSize = true;
			this->lbHello->Location = System::Drawing::Point(25, 47);
			this->lbHello->Name = L"lbHello";
			this->lbHello->Size = System::Drawing::Size(51, 20);
			this->lbHello->TabIndex = 0;
			this->lbHello->Text = L"label1";
			this->lbHello->Click += gcnew System::EventHandler(this, &CustomerPage::label1_Click);
			// 
			// lbCoordinate
			// 
			this->lbCoordinate->AutoSize = true;
			this->lbCoordinate->Location = System::Drawing::Point(25, 149);
			this->lbCoordinate->Name = L"lbCoordinate";
			this->lbCoordinate->Size = System::Drawing::Size(51, 20);
			this->lbCoordinate->TabIndex = 1;
			this->lbCoordinate->Text = L"label2";
			// 
			// tbNumber
			// 
			this->tbNumber->Location = System::Drawing::Point(29, 70);
			this->tbNumber->Name = L"tbNumber";
			this->tbNumber->Size = System::Drawing::Size(431, 26);
			this->tbNumber->TabIndex = 2;
			this->tbNumber->TextChanged += gcnew System::EventHandler(this, &CustomerPage::textBox1_TextChanged);
			// 
			// btEnter
			// 
			this->btEnter->Location = System::Drawing::Point(29, 112);
			this->btEnter->Name = L"btEnter";
			this->btEnter->Size = System::Drawing::Size(75, 34);
			this->btEnter->TabIndex = 3;
			this->btEnter->Text = L"Enter";
			this->btEnter->UseVisualStyleBackColor = true;
			this->btEnter->Click += gcnew System::EventHandler(this, &CustomerPage::btEnter_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(434, 607);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Log Out";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CustomerPage::button1_Click);
			// 
			// CustomerPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 661);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btEnter);
			this->Controls->Add(this->tbNumber);
			this->Controls->Add(this->lbCoordinate);
			this->Controls->Add(this->lbHello);
			this->Name = L"CustomerPage";
			this->Load += gcnew System::EventHandler(this, &CustomerPage::CustomerPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CustomerPage_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbHello->Text = "Hello " + this->firstname + " " + this->lastname + " , enter the number of the talent you want to select";
		
		int number_of_lines = NumberOfTalents();
		String^ line;
		String^ talent_username;
		String^ talent_first_nam;
		String^ talent_last_name;
		int talent_X;
		int talent_Y;
		int rating;
		StreamReader^ input_file = File::OpenText("talent.txt");
		int arr[6];
		int c = 0;
		int index = 0;
		int object_array_counter = 0;
		array< Talent^ >^ talents = gcnew array< Talent^ >(number_of_lines);

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
			String^ uname = line->Substring(0, arr[0]);
			String^ pass = line->Substring(arr[0] + 1, arr[1]);
			String^ name = line->Substring(arr[0] + arr[1] + 2, arr[2]);
			String^ lname = line->Substring(arr[0] + arr[1] + arr[2] + 3, arr[3]);
			String^ t_X = line->Substring(arr[0] + arr[1] + arr[2] + arr[3] + 4, arr[4]);
			talent_X = Convert::ToInt32(t_X);
			String^ t_Y = line->Substring(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + 5 , arr[5]);
			talent_Y = Convert::ToInt32(t_Y);
			String^ t_rating = line->Substring(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + 6);
			rating = Convert::ToInt32(t_rating);
			
			talents[object_array_counter] = gcnew Talent(uname, name, lname, talent_X, talent_Y, rating, this->X, this->Y);

			object_array_counter++;
			c = 0;
			index = 0;
		}
		input_file->Close();

		HeapSort(talents, number_of_lines);
		
		String^ text = "";

		for (int i = number_of_lines - 1; i >= 0; i--)
		{
			
			text = text + "\n" + (number_of_lines - i) + ". First Name: " + talents[i]->first_name + " Lastname : " + talents[i]->last_name +
				"\n  X coordinate: " + talents[i]->X + " Y coordinate: " + talents[i]->Y + "\n";
		}

		this->lbCoordinate->Text = text;

		this->talents1 = talents;
	
		//this->lbCoordinate->Text = count + " number of lines" + "Coordinates: " + this->X + "," + this->Y + "factor " + talents[0]->factor;


	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void btEnter_Click(System::Object^ sender, System::EventArgs^ e) {


	int number = Convert::ToInt16(this->tbNumber->Text);
	int num_t = NumberOfTalents();
	bool check;
	number = num_t - number;

	
	check = Check(talents1[number]->username, this->username);


	
	if (check == false)
	{
		StreamWriter^ output_file = File::AppendText("assignment.txt");




		String^ line = this->talents1[number]->username + "," + this->username + "," + this->lastname + "," + this->X + "," + this->Y;


		output_file->WriteLine(line);
		MessageBox::Show("The assignment with " + talents1[number]->first_name +"  " + talents1[number]->last_name + " was successful : )");

		output_file->Close();
	}
	else
	{
		MessageBox::Show("You have already assignment with this talent");
	}

	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->prev->Show();
}
};
	
	
}
