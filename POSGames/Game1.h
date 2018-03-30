#pragma once

namespace POSGames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game1
	/// </summary>
	public ref class Game1 : public System::Windows::Forms::Form
	{
	public:
		Game1(Point p)
		{
			InitializeComponent(p);
			//
			//TODO: Add the constructor code here
			//
			
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game1()
		{
			 
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
		void InitializeComponent(Point p)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(615, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Guess the Number!";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(610, 132);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(417, 343);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1102, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 34);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Game1::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game1::textBox2_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1097, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(348, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Type a number and press enter";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1188, 421);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 121);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Game1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1634, 797);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"posgames_multisize.ico")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Game1";
			
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			
			this->Location = p;
			
			this->TopMost = true;
			this->Text = L"Game1";
			this->Load += gcnew System::EventHandler(this, &Game1::Game1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Game1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter) {
			if (Convert::ToDouble(textBox2->Text) == 5) {
				textBox1->Text += "\r\n YOU GUESSED CORRECTLY!!";
			}
			else {
				textBox1->Text += "\r\n Try again...";
				textBox2->Text = "";
			}
		}
			
	}
};



}
