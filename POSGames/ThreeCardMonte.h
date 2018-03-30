//To be edited by Michael Harmon

#pragma once

namespace POSGames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ThreeCardMonte
	/// </summary>
	public ref class ThreeCardMonte : public System::Windows::Forms::Form
	{
	public:
		ThreeCardMonte(Point p)
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
		~ThreeCardMonte()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ThreeCardMonte::typeid));
			this->SuspendLayout();
			// 
			// ThreeCardMonte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(276, 236);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ThreeCardMonte";
			this->Text = L"ThreeCardMonte";
			this->ResumeLayout(false);
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Location = p;

		}
#pragma endregion
	};
}
