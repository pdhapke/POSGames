////to be edited by Austin Stoulil

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
			this->SuspendLayout();
			// 
			// lbl_score
			// 
			this->lbl_score->AutoSize = true;
			this->lbl_score->BackColor = System::Drawing::Color::White;
			this->lbl_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_score->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_score->Location = System::Drawing::Point(363, 9);
			this->lbl_score->Name = L"lbl_score";
			this->lbl_score->Size = System::Drawing::Size(61, 20);
			this->lbl_score->TabIndex = 0;
			this->lbl_score->Text = L"Score:";
			// 
			// Pong
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(806, 233);
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

		static float px = 20;
		static float py = 20;
		static float cx = 776;
		static float cy = 20;
		static float bx = 411;
		static float by = 117.0;
		static const float bw = 10;
		static const float bh = 10;
		static float ballXMove = -.1;
		static float ballYMove = -1;
		bool pause = false;

		System::Drawing::Rectangle rect = System::Drawing::Rectangle(px, py, 10, 50);
		System::Drawing::Rectangle computerRect = System::Drawing::Rectangle(cx, cy, 10, 50);
		System::Drawing::Rectangle pongBall = System::Drawing::Rectangle(bx, by, bw, bh);

	private: void drawRect(System::Drawing::Rectangle rect, System::Drawing::Color c) {

		SolidBrush^ myBrush = gcnew SolidBrush(Color::White);

		Graphics^ g;
		g = this->CreateGraphics();

		g->FillRectangle(myBrush, rect);

	}

	private: void Pong_KeyDown(Object^ sender, KeyPressEventArgs^ e)
	{

		if (GetAsyncKeyState(0x57)) {

			if ((rect.Y - 5) < 0) {

				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y = 0;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(computerRect, System::Drawing::Color::White);

			}
			else {

				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y -= 5;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(computerRect, System::Drawing::Color::White);

			}

		}

		if (GetAsyncKeyState(0x53)) {

			if ((rect.Bottom + 5) > 235) {

				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y = rect.Y;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(computerRect, System::Drawing::Color::White);

			}
			else {

				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				rect.Y += 5;
				drawRect(rect, System::Drawing::Color::White);
				drawRect(computerRect, System::Drawing::Color::White);

			}

		}

	}

	private: System::Void Pong_Load(System::Object^  sender, System::EventArgs^  e) {


	}

	protected:
		virtual void OnPaint(PaintEventArgs^ e) override
		{

			// If there is an image and it has a location,
			// paint it when the Form is repainted.
			Form::OnPaint(e);
			drawRect(rect, System::Drawing::Color::White);
			drawRect(computerRect, System::Drawing::Color::White);
			drawRect(pongBall, Color::White);
			lbl_score->Text = "Score: ";

			if (pause != true) {

				Graphics^ g;
				g = this->CreateGraphics();
				g->Clear(Color::Black);

				if ((pongBall.Y + ballYMove) >= 235) {

					ballYMove = -1;

				}

				if ((pongBall.Y - ballYMove) <= 0) {

					ballYMove = 1;

				}

				if (pongBall.X <= 0) {

					pongBall.X = bx;

				}

				if (pongBall.X >= 822) {

					pongBall.X = bx;

				}

				pongBall.Y += ballYMove;
				pongBall.X += ballXMove;
				lbl_score->Text = ballYMove.ToString();
				drawRect(pongBall, Color::White);
				drawRect(rect, System::Drawing::Color::White);
				drawRect(computerRect, System::Drawing::Color::White);
				Form::Invalidate();

			}
		}

	};
}