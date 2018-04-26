//To be edited by Michael Harmon

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
	/// Summary for MyForm
	/// </summary>
	public ref class FindTheAce : public System::Windows::Forms::Form
	{
		//int r;
	public:
		FindTheAce(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//srand((int)time(0));

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FindTheAce()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  exitButton;
	private: System::Windows::Forms::PictureBox^  backOfCardPictureBox1;
	private: System::Windows::Forms::PictureBox^  backOfCardPictureBox2;
	private: System::Windows::Forms::PictureBox^  backOfCardPictureBox3;
	private: System::Windows::Forms::Button^  chooseButton1;
	private: System::Windows::Forms::Button^  chooseButton2;
	private: System::Windows::Forms::Button^  chooseButton3;
	private: System::Windows::Forms::Button^  newGameButton1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FindTheAce::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->backOfCardPictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backOfCardPictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->backOfCardPictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->chooseButton1 = (gcnew System::Windows::Forms::Button());
			this->chooseButton2 = (gcnew System::Windows::Forms::Button());
			this->chooseButton3 = (gcnew System::Windows::Forms::Button());
			this->newGameButton1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOfCardPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOfCardPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOfCardPictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(22, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(231, 292);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FindTheAce::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(323, 22);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(204, 282);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &FindTheAce::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(600, 22);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(191, 282);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &FindTheAce::pictureBox3_Click);
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(486, 500);
			this->exitButton->Margin = System::Windows::Forms::Padding(6);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(138, 42);
			this->exitButton->TabIndex = 3;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &FindTheAce::exitButton_Click);
			// 
			// backOfCardPictureBox1
			// 
			this->backOfCardPictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOfCardPictureBox1.ErrorImage")));
			this->backOfCardPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOfCardPictureBox1.Image")));
			this->backOfCardPictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOfCardPictureBox1.InitialImage")));
			this->backOfCardPictureBox1->Location = System::Drawing::Point(22, 22);
			this->backOfCardPictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->backOfCardPictureBox1->Name = L"backOfCardPictureBox1";
			this->backOfCardPictureBox1->Size = System::Drawing::Size(231, 342);
			this->backOfCardPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backOfCardPictureBox1->TabIndex = 4;
			this->backOfCardPictureBox1->TabStop = false;
			this->backOfCardPictureBox1->Click += gcnew System::EventHandler(this, &FindTheAce::backOfCardPictureBox1_Click);
			// 
			// backOfCardPictureBox2
			// 
			this->backOfCardPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOfCardPictureBox2.Image")));
			this->backOfCardPictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOfCardPictureBox2.InitialImage")));
			this->backOfCardPictureBox2->Location = System::Drawing::Point(296, 22);
			this->backOfCardPictureBox2->Margin = System::Windows::Forms::Padding(6);
			this->backOfCardPictureBox2->Name = L"backOfCardPictureBox2";
			this->backOfCardPictureBox2->Size = System::Drawing::Size(231, 342);
			this->backOfCardPictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backOfCardPictureBox2->TabIndex = 5;
			this->backOfCardPictureBox2->TabStop = false;
			this->backOfCardPictureBox2->Click += gcnew System::EventHandler(this, &FindTheAce::backOfCardPictureBox2_Click);
			// 
			// backOfCardPictureBox3
			// 
			this->backOfCardPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOfCardPictureBox3.Image")));
			this->backOfCardPictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOfCardPictureBox3.InitialImage")));
			this->backOfCardPictureBox3->Location = System::Drawing::Point(572, 22);
			this->backOfCardPictureBox3->Margin = System::Windows::Forms::Padding(6);
			this->backOfCardPictureBox3->Name = L"backOfCardPictureBox3";
			this->backOfCardPictureBox3->Size = System::Drawing::Size(231, 342);
			this->backOfCardPictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backOfCardPictureBox3->TabIndex = 6;
			this->backOfCardPictureBox3->TabStop = false;
			this->backOfCardPictureBox3->Click += gcnew System::EventHandler(this, &FindTheAce::backOfCardPictureBox3_Click);
			// 
			// chooseButton1
			// 
			this->chooseButton1->Location = System::Drawing::Point(77, 393);
			this->chooseButton1->Margin = System::Windows::Forms::Padding(6);
			this->chooseButton1->Name = L"chooseButton1";
			this->chooseButton1->Size = System::Drawing::Size(138, 42);
			this->chooseButton1->TabIndex = 7;
			this->chooseButton1->Text = L"Choose Me!";
			this->chooseButton1->UseVisualStyleBackColor = true;
			this->chooseButton1->Click += gcnew System::EventHandler(this, &FindTheAce::chooseButton1_Click);
			// 
			// chooseButton2
			// 
			this->chooseButton2->Location = System::Drawing::Point(339, 393);
			this->chooseButton2->Margin = System::Windows::Forms::Padding(6);
			this->chooseButton2->Name = L"chooseButton2";
			this->chooseButton2->Size = System::Drawing::Size(138, 42);
			this->chooseButton2->TabIndex = 8;
			this->chooseButton2->Text = L"Choose Me!";
			this->chooseButton2->UseVisualStyleBackColor = true;
			this->chooseButton2->Click += gcnew System::EventHandler(this, &FindTheAce::chooseButton2_Click);
			// 
			// chooseButton3
			// 
			this->chooseButton3->Location = System::Drawing::Point(631, 393);
			this->chooseButton3->Margin = System::Windows::Forms::Padding(6);
			this->chooseButton3->Name = L"chooseButton3";
			this->chooseButton3->Size = System::Drawing::Size(138, 42);
			this->chooseButton3->TabIndex = 9;
			this->chooseButton3->Text = L"Choose Me!";
			this->chooseButton3->UseVisualStyleBackColor = true;
			this->chooseButton3->Click += gcnew System::EventHandler(this, &FindTheAce::chooseButton3_Click);
			// 
			// newGameButton1
			// 
			this->newGameButton1->Location = System::Drawing::Point(205, 500);
			this->newGameButton1->Margin = System::Windows::Forms::Padding(6);
			this->newGameButton1->Name = L"newGameButton1";
			this->newGameButton1->Size = System::Drawing::Size(138, 42);
			this->newGameButton1->TabIndex = 10;
			this->newGameButton1->Text = L"New Game";
			this->newGameButton1->UseVisualStyleBackColor = true;
			this->newGameButton1->Click += gcnew System::EventHandler(this, &FindTheAce::newGameButton1_Click);
			// 
			// FindTheAce
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 591);
			this->Controls->Add(this->newGameButton1);
			this->Controls->Add(this->chooseButton3);
			this->Controls->Add(this->chooseButton2);
			this->Controls->Add(this->chooseButton1);
			this->Controls->Add(this->backOfCardPictureBox3);
			this->Controls->Add(this->backOfCardPictureBox2);
			this->Controls->Add(this->backOfCardPictureBox1);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"FindTheAce";
			this->Text = L"Find The Ace";
			this->Load += gcnew System::EventHandler(this, &FindTheAce::FindTheAce_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOfCardPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOfCardPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOfCardPictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FindTheAce_Load(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Find the Ace!"); //show message at beginning of game

	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) { //exit button closes program and returns cards to initial state

		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		this->Close();
	}
	private: System::Void backOfCardPictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void backOfCardPictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void backOfCardPictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void chooseButton1_Click(System::Object^  sender, System::EventArgs^  e) { //when clicked it "turns" over card

		backOfCardPictureBox1->Visible = false;
		pictureBox1->Visible = true;
		MessageBox::Show("Excellent Choice, you win!");
	}
	private: System::Void chooseButton2_Click(System::Object^  sender, System::EventArgs^  e) { //when clicked it "turns" over card

		backOfCardPictureBox2->Visible = false;
		pictureBox2->Visible = true;
		MessageBox::Show("Sorry, try again.");
	}
	private: System::Void chooseButton3_Click(System::Object^  sender, System::EventArgs^  e) { //when clicked it "turns" over card

		backOfCardPictureBox3->Visible = false;
		pictureBox3->Visible = true;
		MessageBox::Show("Sorry, try again.");
	}
	private: System::Void newGameButton1_Click(System::Object^  sender, System::EventArgs^  e) { //when clicked it returns cards
		backOfCardPictureBox1->Visible = true;
		backOfCardPictureBox2->Visible = true;
		backOfCardPictureBox3->Visible = true;
	}
	};
}