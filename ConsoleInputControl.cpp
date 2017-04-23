#include "ConsoleInputControl.hpp"

#include <iostream>
#include <string>

using namespace std;

//==================================================================================================

int checkIntegerInput(string s){
	bool Check;
	int i;
	
	Check = true;
	
	for(i = 0 ; i < s.length() ; i = i + 1){
		if((s.at(i) != '0') && (s.at(i) != '1') && (s.at(i) != '2') && (s.at(i) != '3') && (s.at(i) != '4') && (s.at(i) != '5') && (s.at(i) != '6') && (s.at(i) != '7') && (s.at(i) != '8') && (s.at(i) != '9') && (s.at(i) != '\0')){
			Check = false;
		}
	}
	
	if(Check == true){
		return stoi(s, nullptr, 10);
	}
	else{
		return (-1);
	}
};

//==================================================================================================

float checkFloatInput(string s){
	size_t sz;
	
	bool Check;
	int i;
	
	Check = true;
	
	for(i = 0 ; i < s.length() ; i = i + 1){
		if((s.at(i) != '0') || (s.at(i) != '1') || (s.at(i) != '2') || (s.at(i) != '3') || (s.at(i) != '4') || (s.at(i) != '5') || (s.at(i) != '6') || (s.at(i) != '7') || (s.at(i) != '8') || (s.at(i) != '9') || (s.at(i) != '.') || (s.at(i) != '\0')){
			Check = false;
		}
	}
	
	if(Check == true){
		return stof(s, &sz);
	}
	else{
		return (-1.0);
	}
};

//==================================================================================================

char checkCharacterInput(string s){
	if(s.length() > 1){
		return s.at(0);
	}
	else{
		return 0;
	}
};
