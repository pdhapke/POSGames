#pragma once
#include <cstdlib>
#include <ctime>

namespace POSGames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GuessMyNumber
	/// </summary>
	public ref class GuessMyNumber : public System::Windows::Forms::Form
	{

	public:
		GuessMyNumber(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			Clear(); //function to clear text box
			srand((int)time(0)); //to create random number
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GuessMyNumber()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  enterButton1;
	private: System::Windows::Forms::Button^  clearButton1;
	private: System::Windows::Forms::Button^  exitButton1;
	private: System::Windows::Forms::TextBox^  numberTextBox1;
	private: System::Windows::Forms::Label^  enterNumberLabel1;
	private: System::Windows::Forms::Label^  label1;
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
			this->enterButton1 = (gcnew System::Windows::Forms::Button());
			this->clearButton1 = (gcnew System::Windows::Forms::Button());
			this->exitButton1 = (gcnew System::Windows::Forms::Button());
			this->numberTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->enterNumberLabel1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// enterButton1
			// 
			this->enterButton1->Location = System::Drawing::Point(101, 166);
			this->enterButton1->Name = L"enterButton1";
			this->enterButton1->Size = System::Drawing::Size(75, 23);
			this->enterButton1->TabIndex = 0;
			this->enterButton1->Text = L"Enter";
			this->enterButton1->UseVisualStyleBackColor = true;
			this->enterButton1->Click += gcnew System::EventHandler(this, &GuessMyNumber::enterButton1_Click);
			// 
			// clearButton1
			// 
			this->clearButton1->Location = System::Drawing::Point(24, 214);
			this->clearButton1->Name = L"clearButton1";
			this->clearButton1->Size = System::Drawing::Size(75, 23);
			this->clearButton1->TabIndex = 1;
			this->clearButton1->Text = L"Clear";
			this->clearButton1->UseVisualStyleBackColor = true;
			this->clearButton1->Click += gcnew System::EventHandler(this, &GuessMyNumber::clearButton1_Click);
			// 
			// exitButton1
			// 
			this->exitButton1->Location = System::Drawing::Point(176, 214);
			this->exitButton1->Name = L"exitButton1";
			this->exitButton1->Size = System::Drawing::Size(75, 23);
			this->exitButton1->TabIndex = 2;
			this->exitButton1->Text = L"Exit";
			this->exitButton1->UseVisualStyleBackColor = true;
			this->exitButton1->Click += gcnew System::EventHandler(this, &GuessMyNumber::exitButton1_Click);
			// 
			// numberTextBox1
			// 
			this->numberTextBox1->Location = System::Drawing::Point(101, 112);
			this->numberTextBox1->Name = L"numberTextBox1";
			this->numberTextBox1->Size = System::Drawing::Size(100, 20);
			this->numberTextBox1->TabIndex = 3;
			this->numberTextBox1->TextChanged += gcnew System::EventHandler(this, &GuessMyNumber::numberTextBox1_TextChanged);
			// 
			// enterNumberLabel1
			// 
			this->enterNumberLabel1->AutoSize = true;
			this->enterNumberLabel1->Location = System::Drawing::Point(21, 115);
			this->enterNumberLabel1->Name = L"enterNumberLabel1";
			this->enterNumberLabel1->Size = System::Drawing::Size(75, 13);
			this->enterNumberLabel1->TabIndex = 4;
			this->enterNumberLabel1->Text = L"Enter Number:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter A Number Between 1 and 100";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->enterNumberLabel1);
			this->Controls->Add(this->numberTextBox1);
			this->Controls->Add(this->exitButton1);
			this->Controls->Add(this->clearButton1);
			this->Controls->Add(this->enterButton1);
			this->Name = L"MyForm";
			this->Text = L"Guess My Number";
			this->Load += gcnew System::EventHandler(this, &GuessMyNumber::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void Clear() //function to clear text box
	{
		this->numberTextBox1->Text = "";
	}


	private: System::Void enterButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		int randomNum = 0; //variables for game
		int generateRandom = 0;
		generateRandom = (rand() % 99) + 1;
		//if statements to see if input is same as random number
		if (int::TryParse(numberTextBox1->Text, randomNum)) //get the users number from text box
		{
			if (randomNum > generateRandom)
			{
				MessageBox::Show("Too high, try again");
				
			}
			else if (randomNum < generateRandom)
			{
				MessageBox::Show("Too low, try again");
				
			}
			else if (randomNum == generateRandom)
			{
				MessageBox::Show("Great guess, you won.");
				this->numberTextBox1->Text = "";
				
			}
		}
		else
		{
			MessageBox::Show("Invalid Input"); //message for invalid input
		}
	}
private: System::Void clearButton1_Click(System::Object^  sender, System::EventArgs^  e) { //calls the clear function when clicked to clear text box
	Clear();
}
private: System::Void exitButton1_Click(System::Object^  sender, System::EventArgs^  e) { //will close form once button is clicked
	this->Close();
}
private: System::Void numberTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
//private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
//}
};

}
