#pragma once

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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				this->SuspendLayout();
				// 
				// pictureBox1
				// 
				this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				this->pictureBox1->Location = System::Drawing::Point(668, 577);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(97, 42);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 0;
				this->pictureBox1->TabStop = false;
				// 
				// main
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->ClientSize = System::Drawing::Size(1431, 630);
				this->Controls->Add(this->pictureBox1);
				this->Name = L"main";
				this->Text = L"Space Invaders";
				this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main::main_KeyDown);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				this->ResumeLayout(false);

			}
		#pragma endregion


		private: System::Void main_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			switch (e->KeyCode)										//switch statement courtsy of user Viorel_ https://social.msdn.microsoft.com/Forums/vstudio/en-US/75e565fb-e023-4045-8405-31061ab16edf/keypress-to-move-a-picture-box?forum=vcgeneral
			{
			case Keys::A:
				pictureBox1->Left -= 7;
				break;
			case Keys::D:
				pictureBox1->Left += 7;
				break;
			case Keys::W:
				//shooty shooty bang bang;
				break;
				break;
			}
		}

};
}
