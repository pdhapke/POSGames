#pragma once

#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>
#include <msclr\marshal_cppstd.h>

/*
the following managed class behavior was learned from:
https://msdn.microsoft.com/en-us/library/ke3a209d.aspx
https://stackoverflow.com/questions/672843/can-templates-be-used-to-access-struct-variables-by-name
https://stackoverflow.com/questions/7787208/optional-template-parameter
https://stackoverflow.com/questions/1300718/c-net-convert-systemstring-to-stdstring
*/


template<class location> ref class stdinRedirect {
public:
	std::stringstream *inputText;
	location^ readLocation;
	template<class any> stdinRedirect^ operator>>(any &destination) {
		System::String^ currentText = readLocation->Text;
		do{
			if (currentText->Contains("\n")) {
				*inputText << msclr::interop::marshal_as<std::string>(currentText);
				*inputText >> destination;
				
			}
		} while (currentText->Contains("\n") != true); 
		return this;
	}
	stdinRedirect() {
		inputText = new std::stringstream();
		*inputText << "";
	}
	template<class location> void setLocation(location^ textLocation) {
		readLocation = cli::safe_cast<location^>(textLocation);
	}
};


