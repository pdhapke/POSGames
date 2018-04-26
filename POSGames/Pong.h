//to be edited by Austin Stoulil

#pragma once
#pragma comment(lib, "user32.lib")
#include <Windows.h>

namespace POSGames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pong
	/// </summary>
	public ref class Pong : public System::Windows::Forms::Form
	{
	public:
		Pong(void)
		{
			InitializeComponent();
			this->KeyPress += gcnew KeyPressEventHandler(this, &Pong::Pong_KeyDown);
			this->DoubleBuffered = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pong()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_score;
	private: System::Windows::Forms::Label^  lbl_p2Score;
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
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pong::typeid));
			this->lbl_score = (gcnew System::Windows::Forms::Label());
			this->lbl_p2Score = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_score
			// 
			this->lbl_score->AutoSize = true;
			this->lbl_score->BackColor = System::Drawing::Color::White;
			this->lbl_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_score->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_score->Location = System::Drawing::Point(275, 9);
			this->lbl_score->Name = L"lbl_score";
			this->lbl_score->Size = System::Drawing::Size(87, 20);
			this->lbl_score->TabIndex = 0;
			this->lbl_score->Text = L"P1 Score:";
			// 
			// lbl_p2Score
			// 
			this->lbl_p2Score->AutoSize = true;
			this->lbl_p2Score->BackColor = System::Drawing::Color::White;
			this->lbl_p2Score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_p2Score->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_p2Score->Location = System::Drawing::Point(426, 9);
			this->lbl_p2Score->Name = L"lbl_p2Score";
			this->lbl_p2Score->Size = System::Drawing::Size(87, 20);
			this->lbl_p2Score->TabIndex = 1;
			this->lbl_p2Score->Text = L"P2 Score:";
			// 
			// Pong
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(806, 233);
			this->Controls->Add(this->lbl_p2Score);
			this->Controls->Add(this->lbl_score);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Pong";
			this->Text = L"Pong";
			this->Load += gcnew System::EventHandler(this, &Pong::Pong_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		//Creating variables for the pong paddles, and pong ball
		static float px = 20;
		static float py = 20;
		static float cx = 776;
		static float cy = 20;
		static float bx = 411;
		static float by = 117.0;
		static const float bw = 10;
		static const float bh = 10;
		static float ballXMove = -1;
		static float ballYMove = -1;
		bool pause = false;
		int playerScore = 0;
		int player2Score = 0;
		int tempX = ballXMove;
		int tempY = ballYMove;

		//Player Speed Value
		int playerSpeed = 10;

		//Program creates three rectangles for the paddles and ball
		System::Drawing::Rectangle rect = System::Drawing::Rectangle(px, py, 10, 50);
		System::Drawing::Rectangle p2Rect = System::Drawing::Rectangle(cx, cy, 10, 50);
		System::Drawing::Rectangle pongBall = System::Drawing::Rectangle(bx, by, bw, bh);

	private: void drawRect(System::Drawing::Rectangle rect, System::Drawing::Color c) {

		//Create a brush, and graphics
		SolidBrush^ myBrush = gcnew SolidBrush(Color::White);

		Graphics^ g;
		g = this->CreateGraphics();

		//Draw the rectangle
		g->FillRectangle(myBrush, rect);

	}

	private: void Pong_KeyDown(Object^ sender, KeyPressEventArgs^ e)
	{

		//If key pressed is w
		if (GetAsyncKeyState(0x57)) {

			//If moving upward is over the boundary
			if ((rect.Y - 5) < 0) {

				//Draw the rectangle at the same position
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y = 0;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}
			else {

				//Move the rectangle up and draw it
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y -= playerSpeed;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}

		}

		//If the key pressed is s
		if (GetAsyncKeyState(0x53)) {

			//If the rectangle will go below the bottom boundary
			if ((rect.Bottom + 5) > 235) {

				//Draw it at the current position
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y = rect.Y;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}
			else {

				//Move the rectangle down, and draw it
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y += playerSpeed;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}

		}

		//If the key pressed is numpad 5
		if (GetAsyncKeyState(VK_NUMPAD5)) {

			//If the second player will go below the bottom boundary
			if ((p2Rect.Bottom + 5) > 235) {

				//Draw the rectangle at the current location
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				p2Rect.Y = p2Rect.Y;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}
			else {

				//Move the player down and draw the rectangle
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				p2Rect.Y += playerSpeed;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}

		}

		//If the numpad 8 key is pressed
		if (GetAsyncKeyState(VK_NUMPAD8)) {

			//If the player goes past the boundary
			if ((p2Rect.Y - 5) < 0) {

				//Draw the player at the current position
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				p2Rect.Y = 0;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}
			else {

				//Move the player up and draw the rectangle
				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				p2Rect.Y -= playerSpeed;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}

		}

		//If the p key is pressed
		if (GetAsyncKeyState(0x50)) {

			//If not paused
			if (pause == false) {

				//Set paused to true
				pause = true;
				lbl_score->Text = "PAUSED";
				lbl_p2Score->Text = "PAUSED";
				lbl_score->Refresh();
				lbl_p2Score->Refresh();

			}
			else {

				//Set paused to false
				pause = false;
				lbl_score->Text = "P1 Score: " + playerScore.ToString();
				lbl_p2Score->Text = "P2 Score: " + player2Score.ToString();
				lbl_score->Refresh();
				lbl_p2Score->Refresh();

			}


		}

	}

	private: System::Void Pong_Load(System::Object^  sender, System::EventArgs^  e) {

		//Display message box to display game controls
		System::Windows::Forms::DialogResult controls;
		controls = MessageBox::Show("Controls for Pong:\n\nW - Move P1 Up\nS - Move P1 Down\nNumpad 8 - Move P2 Up\nNumpad 5 - Move P2 Down\nP - To Pause");

	}

	protected:
		virtual void OnPaint(PaintEventArgs^ e) override
		{

			// If there is an image and it has a location,
			// paint it when the Form is repainted.
			Form::OnPaint(e);

			//Draw the game objects
			drawRect(rect, System::Drawing::Color::White);
			drawRect(p2Rect, System::Drawing::Color::White);
			drawRect(pongBall, Color::White);
			lbl_score->Text = "P1 Score: " + playerScore.ToString();
			lbl_p2Score->Text = "P2 Score: " + player2Score.ToString();

			Graphics^ g;
			g = this->CreateGraphics();

			//If not paused
			if (pause == false) {

				//If statements to control how the ball bounces
				if ((pongBall.Y + ballYMove) >= 235) {

					ballYMove = -1;

				}

				if ((pongBall.Y - ballYMove) <= 0) {

					ballYMove = 1;

				}

				if (pongBall.X <= 0) {

					pongBall.X = bx;
					ballXMove *= -1;
					player2Score += 10;

				}

				if (pongBall.X >= 822) {

					pongBall.X = bx;
					ballXMove *= -1;
					playerScore += 10;

				}

				//If statements for paddle collision
				if (pongBall.X < (rect.X + 10) && pongBall.Y > rect.Y && pongBall.Y < rect.Bottom) {

					ballXMove *= -1;

				}

				if ((pongBall.X + pongBall.Width) > p2Rect.X && pongBall.Y > p2Rect.Y && pongBall.Y < p2Rect.Bottom) {

					ballXMove *= -1;

				}

				//Increment the ball position, and update the player score
				pongBall.Y += ballYMove;
				pongBall.X += ballXMove;
				lbl_score->Text = "P1 Score: " + playerScore.ToString();
				lbl_p2Score->Text = "P2 Score: " + player2Score.ToString();
				lbl_score->Refresh();
				lbl_p2Score->Refresh();
				drawRect(pongBall, Color::White);
				drawRect(rect, System::Drawing::Color::White);
				drawRect(p2Rect, System::Drawing::Color::White);

			}

			Form::Invalidate();

		}

	};
}