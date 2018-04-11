#pragma once
#include "stdoutRedirect.h"
#include "stdinRedirect.h"
using namespace System;

 public ref class Game1_main {
	private:
		stdinRedirect<System::Windows::Forms::TextBox> cin;
		stdoutRedirect<System::Windows::Forms::TextBox> cout;
	public:
		Game1_main(){
			
	}
	void setConnectors(System::Windows::Forms::TextBox^ outBox , System::Windows::Forms::TextBox^ inBox) {
			
		cout.setLocation(outBox);
		cin.setLocation(inBox);

	}
	
	void faux_main() {
		cout << "Welcome!" << " The game is starting..." << "\n";
		cout << "What is your name? ";
		std::string name;
		cin >> name;
		
	
	}
};