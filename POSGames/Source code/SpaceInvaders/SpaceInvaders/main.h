#pragma once


/*notes: 
Line 257ish global integer movement intended for spaceinvaders movement. cannot initalize inside of timer due to needing to reverse direction. Not good but will do

I want to dynamically create a picturebox array for the spaceinvades and bullets, can not FOR THE LIFE OF ME figure out how. current setup should be temporary
until I can find a better solution





*/
namespace SpaceInvaders 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class main : public System::Windows::Forms::Form
	{
		public:
			main(void)
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
			~main()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  SpaceInvader0;
	private: System::Windows::Forms::Timer^  SpaceInvaderTimer;
	private: System::Windows::Forms::PictureBox^  SpaceInvader4;
	private: System::Windows::Forms::PictureBox^  SpaceInvader3;
	private: System::Windows::Forms::PictureBox^  SpaceInvader2;
	private: System::Windows::Forms::PictureBox^  SpaceInvader1;
	private: System::Windows::Forms::PictureBox^  SpaceInvader6;
	private: System::Windows::Forms::PictureBox^  SpaceInvader5;
	private: System::Windows::Forms::Timer^  BulletTimer;
	private: System::Windows::Forms::PictureBox^  Bullet;












		private: System::ComponentModel::IContainer^  components;
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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->SpaceInvader0 = (gcnew System::Windows::Forms::PictureBox());
				this->SpaceInvaderTimer = (gcnew System::Windows::Forms::Timer(this->components));
				this->SpaceInvader4 = (gcnew System::Windows::Forms::PictureBox());
				this->SpaceInvader3 = (gcnew System::Windows::Forms::PictureBox());
				this->SpaceInvader2 = (gcnew System::Windows::Forms::PictureBox());
				this->SpaceInvader1 = (gcnew System::Windows::Forms::PictureBox());
				this->SpaceInvader6 = (gcnew System::Windows::Forms::PictureBox());
				this->SpaceInvader5 = (gcnew System::Windows::Forms::PictureBox());
				this->BulletTimer = (gcnew System::Windows::Forms::Timer(this->components));
				this->Bullet = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader0))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bullet))->BeginInit();
				this->SuspendLayout();
				// 
				// pictureBox1
				// 
				this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				this->pictureBox1->Location = System::Drawing::Point(751, 807);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(100, 42);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 0;
				this->pictureBox1->TabStop = false;
				// 
				// SpaceInvader0
				// 
				this->SpaceInvader0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpaceInvader0.Image")));
				this->SpaceInvader0->Location = System::Drawing::Point(12, 12);
				this->SpaceInvader0->MaximumSize = System::Drawing::Size(100, 100);
				this->SpaceInvader0->Name = L"SpaceInvader0";
				this->SpaceInvader0->Size = System::Drawing::Size(80, 60);
				this->SpaceInvader0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->SpaceInvader0->TabIndex = 1;
				this->SpaceInvader0->TabStop = false;
				// 
				// SpaceInvaderTimer
				// 
				this->SpaceInvaderTimer->Enabled = true;
				this->SpaceInvaderTimer->Interval = 35;
				this->SpaceInvaderTimer->Tick += gcnew System::EventHandler(this, &main::timer1_Tick);
				// 
				// SpaceInvader4
				// 
				this->SpaceInvader4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpaceInvader4.Image")));
				this->SpaceInvader4->Location = System::Drawing::Point(356, 12);
				this->SpaceInvader4->MaximumSize = System::Drawing::Size(100, 100);
				this->SpaceInvader4->Name = L"SpaceInvader4";
				this->SpaceInvader4->Size = System::Drawing::Size(80, 60);
				this->SpaceInvader4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->SpaceInvader4->TabIndex = 2;
				this->SpaceInvader4->TabStop = false;
				// 
				// SpaceInvader3
				// 
				this->SpaceInvader3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpaceInvader3.Image")));
				this->SpaceInvader3->Location = System::Drawing::Point(270, 12);
				this->SpaceInvader3->MaximumSize = System::Drawing::Size(100, 100);
				this->SpaceInvader3->Name = L"SpaceInvader3";
				this->SpaceInvader3->Size = System::Drawing::Size(80, 60);
				this->SpaceInvader3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->SpaceInvader3->TabIndex = 3;
				this->SpaceInvader3->TabStop = false;
				// 
				// SpaceInvader2
				// 
				this->SpaceInvader2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpaceInvader2.Image")));
				this->SpaceInvader2->Location = System::Drawing::Point(184, 12);
				this->SpaceInvader2->MaximumSize = System::Drawing::Size(100, 100);
				this->SpaceInvader2->Name = L"SpaceInvader2";
				this->SpaceInvader2->Size = System::Drawing::Size(80, 60);
				this->SpaceInvader2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->SpaceInvader2->TabIndex = 4;
				this->SpaceInvader2->TabStop = false;
				// 
				// SpaceInvader1
				// 
				this->SpaceInvader1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpaceInvader1.Image")));
				this->SpaceInvader1->Location = System::Drawing::Point(98, 12);
				this->SpaceInvader1->MaximumSize = System::Drawing::Size(100, 100);
				this->SpaceInvader1->Name = L"SpaceInvader1";
				this->SpaceInvader1->Size = System::Drawing::Size(80, 60);
				this->SpaceInvader1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->SpaceInvader1->TabIndex = 5;
				this->SpaceInvader1->TabStop = false;
				// 
				// SpaceInvader6
				// 
				this->SpaceInvader6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpaceInvader6.Image")));
				this->SpaceInvader6->Location = System::Drawing::Point(528, 12);
				this->SpaceInvader6->MaximumSize = System::Drawing::Size(100, 100);
				this->SpaceInvader6->Name = L"SpaceInvader6";
				this->SpaceInvader6->Size = System::Drawing::Size(80, 60);
				this->SpaceInvader6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->SpaceInvader6->TabIndex = 6;
				this->SpaceInvader6->TabStop = false;
				// 
				// SpaceInvader5
				// 
				this->SpaceInvader5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpaceInvader5.Image")));
				this->SpaceInvader5->Location = System::Drawing::Point(442, 12);
				this->SpaceInvader5->MaximumSize = System::Drawing::Size(100, 100);
				this->SpaceInvader5->Name = L"SpaceInvader5";
				this->SpaceInvader5->Size = System::Drawing::Size(80, 60);
				this->SpaceInvader5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->SpaceInvader5->TabIndex = 7;
				this->SpaceInvader5->TabStop = false;
				// 
				// BulletTimer
				// 
				this->BulletTimer->Interval = 35;
				this->BulletTimer->Tick += gcnew System::EventHandler(this, &main::BulletTimer_Tick);
				// 
				// Bullet
				// 
				this->Bullet->BackColor = System::Drawing::Color::Red;
				this->Bullet->Location = System::Drawing::Point(12, 820);
				this->Bullet->Name = L"Bullet";
				this->Bullet->Size = System::Drawing::Size(10, 29);
				this->Bullet->TabIndex = 8;
				this->Bullet->TabStop = false;
				// 
				// main
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->ClientSize = System::Drawing::Size(1884, 861);
				this->Controls->Add(this->Bullet);
				this->Controls->Add(this->SpaceInvader5);
				this->Controls->Add(this->SpaceInvader6);
				this->Controls->Add(this->SpaceInvader1);
				this->Controls->Add(this->SpaceInvader2);
				this->Controls->Add(this->SpaceInvader3);
				this->Controls->Add(this->SpaceInvader4);
				this->Controls->Add(this->SpaceInvader0);
				this->Controls->Add(this->pictureBox1);
				this->MaximizeBox = false;
				this->MinimizeBox = false;
				this->Name = L"main";
				this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main::main_KeyDown);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader0))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpaceInvader5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bullet))->EndInit();
				this->ResumeLayout(false);

			}
		#pragma endregion
			//global variable. oops. Should be just a place holder until I can find a better way.
			const int screenWidth = 1920;
			const int screenHeight = 900;
			int movement = 7; 
		private: System::Void main_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if (e->KeyCode == Keys::A)
			{
				pictureBox1->Left -= 7;
			};
			if (e->KeyCode == Keys::D)
			{
				pictureBox1->Left += 7;
			};
			if (e->KeyCode == Keys::W)
			{
				if (BulletTimer->Enabled == false)
				{
					Bullet->Left = pictureBox1->Left + 50;
					Bullet->Top = pictureBox1->Top - 30;
					BulletTimer->Enabled = true;
				}
				
			};
			}


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	SpaceInvader0->Left += movement;
	SpaceInvader1->Left += movement;
	SpaceInvader2->Left += movement;
	SpaceInvader3->Left += movement;
	SpaceInvader4->Left += movement;
	SpaceInvader5->Left += movement;
	SpaceInvader6->Left += movement;
	if (SpaceInvader6->Left > screenWidth - 120 || SpaceInvader0->Left < 0) //space invaders drop and change direction when one hits edge of screen
	{
		movement *= -1; //reverses movement
		SpaceInvader0->Top += 50;
		SpaceInvader1->Top += 50;
		SpaceInvader2->Top += 50;
		SpaceInvader3->Top += 50;
		SpaceInvader4->Top += 50;
		SpaceInvader5->Top += 50;
		SpaceInvader6->Top += 50;
	}
}


private: System::Void BulletTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		Bullet->Top -= 7;
		if (Bullet->Top < -10) //if bullet goes past top of the screen
		{
			Bullet->Top = screenHeight - 100;
			Bullet->Left = 12;
			BulletTimer->Enabled = false;
		}
}
};
}
