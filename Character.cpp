#include <string>

#include "Character.hpp"

using namespace std;

//=================================================================== Constructor ==================

Character::Character(string Name, Features* f, unsigned short MaxHealth, int SelectedCurse) : Features(f){
	setName(Name);
	setMaxHealth(MaxHealth);
	setHealth(MaxHealth);
	setCurse(SelectedCurse); 
};

//=================================================================== Setters and Getters ==========

void Character::setName(string Name){
	this->Name = Name;
};
string Character::getName(void){
	return Name;
};



void Character::setMaxHealth(unsigned short MaxHealth){
	this->MaxHealth = MaxHealth;
};
unsigned short Character::getMaxHealth(void){
	return MaxHealth;
};



void Character::setHealth(unsigned short Health){
	this->Health = Health;
};
unsigned short Character::getHealth(void){
	return Health;
};



void Character::setCurse(int Selection){
	switch(Selection){
		case 0:
			this->Licantropy = false;
			this->Vampire = false;
			break;
		case 1:
			this->Licantropy = true;
			this->Vampire = false;
			break;
		case 2:
			this->Licantropy = false;
			this->Vampire = true;
			break;
		default:
			this->Licantropy = false;
			this->Vampire = false;
			break;
	}
};
int Character::whichCursed(void){
	if(Vampire == true){
		return 2;
	}
	else if(Licantropy == true){
		return 1;
	}
	else{
		return 0;
	}
		
};
