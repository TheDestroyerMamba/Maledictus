#include "CreationMenu.hpp"
#include "ConsoleInputControl.hpp"

#include "Features.hpp"
#include "Character.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//==================================================================================================

Features* FeatureMenu(void){
	int Select;
	bool Exit = false;
	
	string In;
	
	unsigned short FeatureOne = 0;
	unsigned short FeatureTwo = 0;
	unsigned short FeatureThree = 0;
/*	unsigned short FeatureFour = 0;
	unsigned short FeatureFive = 0;*/
	
	srand(time(NULL));
	
	do{
		system("clear");
		FeatureOne = (rand()%10) + 1;
		FeatureTwo = (rand()%10) + 1;
		FeatureThree = (rand()%10) + 1;
		//FeatureFour = (rand()%10) + 1;
		//FeatureFive = (rand()%10) + 1;
		
		cout << "Strenght \t>> " << FeatureOne << "\t>> Sometime violence is more useful then words..." << endl;
		cout << "Speed \t\t>> " << FeatureTwo << "\t>> Without an high speed, you can't escape... " << endl;
		//cout << "Instinct \t>> " << FeatureThree << endl;
		cout << "Aggressivity \t>> " << FeatureThree << "\t>> When beasts are aggressive, their damage increase..." << endl;
		//cout << "Furtivity \t>> " << FeatureFive << endl;*/
		cout << "\n\n\n" << endl;
		
		cout << "Select:" << endl;
		cout << "\t1 - Confirm;" << endl;
		cout << "\t2 - Regenerate;" << endl;
		cout << ">> ";
		getline(cin, In);
		Select = checkIntegerInput(In);
		
		if(Select == 1){
			Exit = true;
		}
	}
	while(Exit == false);
	
	Features* f = new Features(FeatureOne, FeatureTwo, FeatureThree);//, FeatureFour, FeatureFive);
	
	return f;
};

//==================================================================================================

Character* CharacterMenu(void){
	Features* f;
	f = FeatureMenu();
	
	string In;
	
	string Name;
	unsigned short MaxHealth;
	
	int Select;
	bool Exit = false;
	
	bool CorrectString;
	
	srand(time(NULL));
	
	do{
		system("clear");		
		cout << "Insert character's name:" << endl;
		cout << ">> ";
		getline(cin, Name);
		
		
		//Health:
		do{
			MaxHealth = rand()%100 + 1;
			system("clear");
			cout << "Character's health >> ";
			cout << MaxHealth << "\n" << endl; 
			cout << "Select an operation:" << endl;
			cout << "\t" << "1 - Confirm;" << endl;
			cout << "\t" << "2 - Regenerate;" << endl;
			cout << ">> ";
			getline(cin, In);
		}
		while((checkIntegerInput(In) == (-1)) || (checkIntegerInput(In) == 2));
		
		
		system("clear");
		cout << "Name choosen:\t\t" << Name << ";" << endl;
		cout << "Health choosen: \t" << MaxHealth << ";" << endl;
		cout << "\n\n" << endl;
		cout << "Confirm data above?" << endl;
		cout << "\t0 - No;" << endl;
		cout << "\t1 - Yes;" << endl;
		cout << ">> ";
		getline(cin, In);
		Select = checkIntegerInput(In);
		
		
		if(Select == 1){
			Exit = true;
		}
	}
	while(Exit == false);
	
	Character* c = new Character(Name, f, MaxHealth, 0);
	
	return c;
};
