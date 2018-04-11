
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>

/*
the following managed class behavior was learned from:
https://msdn.microsoft.com/en-us/library/ke3a209d.aspx
https://stackoverflow.com/questions/672843/can-templates-be-used-to-access-struct-variables-by-name
https://stackoverflow.com/questions/7787208/optional-template-parameter
*/
class MEMBER_NOT_PRESENT {
	MEMBER_NOT_PRESENT() {};
};

template<class location> ref class stdoutRedirect {
public:
	std::stringstream *outputText;
	location^ writeLocation; 
	int *maxTextSize; //to be implimented
	template<class any> stdoutRedirect^ operator<<(any data) {
		*outputText << data;
		if (false) {
			//this will never run
			//TODO pass member function
			//writeLocation->*member = outputText->str();
		}
		else if (false) {	
			//TODO - passed destination handle
			//*writeLocation = outputText->str();
			
		}
		else {
			writeLocation->Text = gcnew System::String((*outputText).str().c_str());
		}
		return this;
	}
	stdoutRedirect() {
		outputText = new std::stringstream(); 
		*outputText << "";
		maxTextSize = new int(2147483647);

	}
	template<class location> void setLocation(location^ textLocation) {
		writeLocation = cli::safe_cast<location^>(textLocation);
	}
	//TODO
	void setMaxTextSize(int size) {
		maxTextSize = size; 
	}
	void clearAllText() {};
private:
	void outputTextDump() {};
	};


