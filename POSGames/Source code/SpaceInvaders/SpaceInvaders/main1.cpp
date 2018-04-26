//used https://www.youtube.com/watch?v=0XGQIN9hfGQ to get the form setup, and VS to actually accept that we are using forms with C++
#include "main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SpaceInvaders::main form;
	Application::Run(%form);


	return 0;
}
