#include "InnMenu.hpp"
#include "ConsoleInputControl.hpp"

#include "Character.hpp"

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//==================================================================================================

bool InnMenu(Character* player, int DungeonWins, bool FirstDialogue){
	bool Exit = false;
	
	string In;
	int Select;
	
	system("clear");
	cout << "Into the Inn, your health will be refulled..." << endl;
	cout << "\n\n\n" << endl;
	
	player->setHealth(player->getMaxHealth());
	
	do{
		cout << "Select an action:" << endl;
		cout << "\t" << "1 - Talk with the Innkeeper;" << endl;
		cout << "\t" << "2 - Exit from the Inn;" << endl;
		cout << ">> ";
		getline(cin, In);
		Select = checkIntegerInput(In);
		
		switch(Select){
			case 1:
				system("clear");
				FirstDialogue = Talk(player, DungeonWins, FirstDialogue);
				break;
			case 2:
				Exit = true;
				break;
			default:
				system("clear");
				cout << "Input error..." << endl;
				cout << "Select again..." << endl;
				cout << "\n\n\n" << endl;
				break;
		}
	}
	while(Exit == false);
	return FirstDialogue;
};



bool Talk(Character* player, int DungeonWins, bool FirstDialogue){
	if((DungeonWins == 0) && (FirstDialogue == true)){
		cout << "Innkeeper >>\t";
		cout << "Hi there, welcome to the Inn. I'm Ragoire, the Innkeeper. You must be the 'Cursed Hunter'..." << endl;
		cout << "\t\t" << "I hope you'll hunt these monsters that found out a lair in this place..." << endl;
		cout << "\n\n" << endl;
		return false;
	}
	else{
		switch(DungeonWins){
			case 1:
				cout << "Ragoire >>\t";
				cout << "WHAT!? Do you really killed one of these monsters!?" << endl;
				cout << "\t\t" << "Well, I'll offer you a beer, " << player->getName() << "." << endl;
				cout << "\n\n" << endl;
				break;
			case 2:
				cout << "Ragoire >>\t";
				cout << "I would never thought that someone can do similar things..." << endl;
				cout << "\t\t" << "Maybe I was wrong on your count" << endl;
				cout << "\n\n" << endl;
				break;
			case 3:
				cout << "Ragoire >>\t";
				cout << "The forest and the castle are become less dangerous." << endl;
				cout << "\t\t" << "Thank you very, very much!" << endl;
				cout << "\n\n" << endl;
				break;
			case 4:
				cout << "Ragoire >>\t";
				cout << "Well well, we have a great Hunter here." << endl;
				cout << "\t\t" << "Maybe people can sleep well tonight." << endl;
				cout << "\n\n" << endl;
				break;
			case 5:
				cout << "Ragoire >>\t";
				cout << "I am glad to ear that you are still here." << endl;
				cout << "\t\t" << "You make all us feel safe." << endl;
				cout << "\n\n" << endl;
				break;
			case 6:
				cout << "Ragoire >>\t";
				cout << "WHAT!? Do you really killed one of these monsters!?" << endl;
				cout << "\t\t" << "If you'll continue like this, you'll become a legend!!" << endl;
				cout << "\n\n" << endl;
				break;
			case 0:
				cout << "Ragoire >>\t";
				cout << "Still here? Are you a coward?" << endl;
				cout << "\t\t" << "AHAHAHAHAHAH!" << endl;
				cout << "\n\n" << endl;
				break;
			default:
				cout << "Ragoire >>\t";
				cout << "There isn't anything to say... YOU ARE BECAME A LEGEND!" << endl;
				cout << "\n\n" << endl;
				break;
		}
		return false;
	}
};
