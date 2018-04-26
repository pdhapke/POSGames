#pragma once
#include <vector>

namespace POSGames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScratchOff
	/// </summary>
	public ref class ScratchOff : public System::Windows::Forms::Form
	{
	private:
		Boolean flip1 = false;
		Boolean flip2 = false;
		Boolean flip3 = false;
		Boolean flip4 = false;
		Boolean flip5 = false;
		Boolean flip6 = false;
	private: System::Windows::Forms::Button^  btnExit;
			 std::vector<int> *thing = new std::vector<int>;
	public:
		ScratchOff(void)
		{
			InitializeComponent();

			int range = 6;
			int start = 1;
			int interger_that_matches = rand() % range + start;
			thing->push_back(interger_that_matches);
			thing->push_back(interger_that_matches);

			for (int cycles = 0; cycles < 4; cycles++) {
				thing->push_back(rand() % range + start);
			}

			start = 0;
			range = thing->size() - 1;
			int index;
			for (int loops = 0; loops <= 30; loops++) {
				index = rand() % range + start;
				thing->push_back(thing->at(index));
				thing->erase(thing->begin() + index);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ScratchOff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  option6;
	protected:
	private: System::Windows::Forms::Button^  option5;
	private: System::Windows::Forms::Button^  option4;
	private: System::Windows::Forms::Button^  option3;
	private: System::Windows::Forms::Button^  option2;
	private: System::Windows::Forms::Button^  option1;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  Description;
	private: System::Windows::Forms::Button^  restartBut;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ScratchOff::typeid));
			this->option6 = (gcnew System::Windows::Forms::Button());
			this->option5 = (gcnew System::Windows::Forms::Button());
			this->option4 = (gcnew System::Windows::Forms::Button());
			this->option3 = (gcnew System::Windows::Forms::Button());
			this->option2 = (gcnew System::Windows::Forms::Button());
			this->option1 = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->Description = (gcnew System::Windows::Forms::Label());
			this->restartBut = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// option6
			// 
			this->option6->Location = System::Drawing::Point(480, 354);
			this->option6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->option6->Name = L"option6";
			this->option6->Size = System::Drawing::Size(178, 150);
			this->option6->TabIndex = 16;
			this->option6->Text = L"Box 6";
			this->option6->UseVisualStyleBackColor = true;
			// 
			// option5
			// 
			this->option5->Location = System::Drawing::Point(255, 354);
			this->option5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->option5->Name = L"option5";
			this->option5->Size = System::Drawing::Size(178, 150);
			this->option5->TabIndex = 15;
			this->option5->Text = L"Box 5";
			this->option5->UseVisualStyleBackColor = true;
			// 
			// option4
			// 
			this->option4->Location = System::Drawing::Point(26, 354);
			this->option4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->option4->Name = L"option4";
			this->option4->Size = System::Drawing::Size(178, 150);
			this->option4->TabIndex = 14;
			this->option4->Text = L"Box 4";
			this->option4->UseVisualStyleBackColor = true;
			// 
			// option3
			// 
			this->option3->Location = System::Drawing::Point(480, 144);
			this->option3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->option3->Name = L"option3";
			this->option3->Size = System::Drawing::Size(178, 150);
			this->option3->TabIndex = 13;
			this->option3->Text = L"Box 3";
			this->option3->UseVisualStyleBackColor = true;
			// 
			// option2
			// 
			this->option2->Location = System::Drawing::Point(255, 144);
			this->option2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->option2->Name = L"option2";
			this->option2->Size = System::Drawing::Size(178, 150);
			this->option2->TabIndex = 12;
			this->option2->Text = L"Box 2";
			this->option2->UseVisualStyleBackColor = true;
			// 
			// option1
			// 
			this->option1->Location = System::Drawing::Point(26, 144);
			this->option1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->option1->Name = L"option1";
			this->option1->Size = System::Drawing::Size(178, 150);
			this->option1->TabIndex = 11;
			this->option1->Text = L"Box 1";
			this->option1->UseVisualStyleBackColor = true;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(110, 17);
			this->lblTitle->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(432, 59);
			this->lblTitle->TabIndex = 10;
			this->lblTitle->Text = L"Scratch Off Game";
			// 
			// Description
			// 
			this->Description->AutoSize = true;
			this->Description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Description->Location = System::Drawing::Point(220, 96);
			this->Description->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Description->Name = L"Description";
			this->Description->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Description->Size = System::Drawing::Size(235, 29);
			this->Description->TabIndex = 9;
			this->Description->Text = L"Match Two of the Six";
			// 
			// restartBut
			// 
			this->restartBut->Location = System::Drawing::Point(196, 534);
			this->restartBut->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->restartBut->Name = L"restartBut";
			this->restartBut->Size = System::Drawing::Size(138, 42);
			this->restartBut->TabIndex = 17;
			this->restartBut->Text = L"&Restart";
			this->restartBut->UseVisualStyleBackColor = true;
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(363, 534);
			this->btnExit->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(138, 42);
			this->btnExit->TabIndex = 18;
			this->btnExit->Text = L"&Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &ScratchOff::btnExit_Click);
			// 
			// ScratchOff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 598);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->restartBut);
			this->Controls->Add(this->option6);
			this->Controls->Add(this->option5);
			this->Controls->Add(this->option4);
			this->Controls->Add(this->option3);
			this->Controls->Add(this->option2);
			this->Controls->Add(this->option1);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->Description);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"ScratchOff";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void restartBut_Click(System::Object^  sender, System::EventArgs^  e) {
		option1->Text = "Box 1";
		option2->Text = "Box 2";
		option3->Text = "Box 3";
		option4->Text = "Box 4";
		option5->Text = "Box 5";
		option6->Text = "Box 6";

		int range = 6;
		int start = 1;
		int interger_that_matches = rand() % range + start;
		thing->push_back(interger_that_matches);
		thing->push_back(interger_that_matches);

		for (int cycles = 0; cycles < 4; cycles++) {
			thing->push_back(rand() % range + start);
		}

		start = 0;
		range = thing->size() - 1;
		int index;
		for (int loops = 0; loops <= 30; loops++) {
			index = rand() % range + start;
			thing->push_back(thing->at(index));
			thing->erase(thing->begin() + index);
		}
	}
			 //End restart button
	private: System::Void option1_Click(System::Object^  sender, System::EventArgs^  e) {
		flip1 = 1;
		option1->Text = "" + thing->at(0);
	}
	private: System::Void option2_Click(System::Object^  sender, System::EventArgs^  e) {
		flip2 = 1;
		option2->Text = "" + thing->at(1);
	}
	private: System::Void option3_Click(System::Object^  sender, System::EventArgs^  e) {
		flip3 = 1;
		option3->Text = "" + thing->at(2);
	}
	private: System::Void option4_Click(System::Object^  sender, System::EventArgs^  e) {
		flip4 = 1;
		option4->Text = "" + thing->at(3);
	}
	private: System::Void option5_Click(System::Object^  sender, System::EventArgs^  e) {
		flip5 = 1;
		option5->Text = "" + thing->at(4);
	}
	private: System::Void option6_Click(System::Object^  sender, System::EventArgs^  e) {
		flip6 = 1;
		option6->Text = "" + thing->at(5);
	}
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		ScratchOff::Close();
	}
	};
}
