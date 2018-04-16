#pragma once
#include <string>
using namespace System;
using namespace System::Diagnostics;

ref class consoleWindow{
	public:
	Process ^p;
	ProcessStartInfo ^pInfo;
	System::String ^  file; 
	consoleWindow(std::string fileToOpen) {
		pInfo = gcnew ProcessStartInfo();
		file = gcnew System::String(fileToOpen.c_str());
		pInfo->Verb = "open";
		pInfo->FileName = file;
		pInfo->UseShellExecute = true;
		p = Process::Start(pInfo);
	}

};