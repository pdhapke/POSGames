#pragma once
#include <string>
#include <iostream>

namespace POSGames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Game1
	/// </summary>
	public ref class Game1 : public System::Windows::Forms::Form
	{
	public:
		Game1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			cout.setLocation(textBox1);
			cin.setLocation(textBox2);
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


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		stdinRedirect<System::Windows::Forms::TextBox> cin;
		stdoutRedirect<System::Windows::Forms::TextBox> cout;
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 33);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(569, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"cin / cout redirection demo";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 125);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(568, 470);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(586, 181);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(409, 34);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Game1::textBox2_TextChanged);
			
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(646, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(282, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Type your response here";
			// 
			// Game1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 627);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Game1";
			this->Text = L"Game1";
			this->TopMost = true;
			
			
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter) {
			if (Convert::ToDouble(textBox2->Text) == 5) {
				
				
				//textBox1->Text += "\r\n YOU GUESSED CORRECTLY!!";
			}
			else {
				//textBox1->Text += "\r\n Try again...";
				//textBox2->Text = "";
			}
		}
			
	}
		//threading https://msdn.microsoft.com/en-us/library/ms951089.aspx and https://msdn.microsoft.com/en-us/library/system.threading.thread(v=vs.110).aspx
	private: System::Void Game1_Shown(System::Object^  sender, System::EventArgs^  e) {
		

		Game1_main^ main_container = gcnew Game1_main();
		main_container->setConnectors(textBox2, textBox1);

		Thread^ main_function = gcnew Thread(gcnew ThreadStart(main_container, &Game1_main::faux_main));
		main_function->Start();
	}
private: System::Void Game1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
}
};



}
