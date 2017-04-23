#include "ConsoleInputControl.hpp"

#include "InnMenu.hpp"
#include "DungeonMenu.hpp"

#include "Character.hpp"

#include "Menu.hpp"

#include <iostream>
#include <cstdlib>

using namespace std;

//==================================================================================================

void Menu(Character* player){
	bool Exit = false;
	
	string In;
	int Select;
	
	int retMenu;
	
	bool FirstDialogue = true;
	int DungeonWins = 0;
	
	system("clear");
	cout << "When the faith is an hopeless illusion and monsters are all around the world, only an Hunter can save people from theirself..." << endl;
	cout << "Someone that doesn't fear the death, someone who will fight the evil that corrupted this World." << endl;
	system("sleep 15s");
	system("clear");
	
	system("clear");
	cout << "You are walking to Tajn city..." << endl;
	cout << "You are quite exausted, so what do you think that restore yourself into the Inn of this city?" << endl;
	system("sleep 10s");
	system("clear");
	
	player->setHealth(5);
	
	do{
		cout << "Select what to do:" << endl;
		cout << "\t" << "1 - Go to the Inn;" << endl;
		cout << "\t" << "2 - Go to the Forest;" << endl;
		cout << "\t" << "3 - Go to the Castle;" << endl;
		cout << "\t" << "4 - Exit from the game;" << endl;
		cout << ">> ";
		getline(cin, In);
		Select = checkIntegerInput(In);
		
		switch(Select){
			case 1:
				system("clear");
				cout << "Moving to the Inn..." << endl;
				system("sleep 5s");
				FirstDialogue = InnMenu(player, DungeonWins, FirstDialogue);
				system("clear");
				break;
			case 2:
				system("clear");
				cout << "Moving to the Forest..." << endl;
				system("sleep 5s");
				retMenu = DungeonMenu(player, 1);
				DungeonWins = DungeonWins + retMenu;
				if(player->getHealth() == 0){
					Exit = true;
				}
				system("clear");
				break;
			case 3:
				system("clear");
				cout << "Moving to the Castle..." << endl;
				system("sleep 5s");
				retMenu = DungeonMenu(player, 2);
				DungeonWins = DungeonWins + retMenu;
				if(player->getHealth() == 0){
					Exit = true;
				}
				system("clear");
				break;
			case 4:
				system("clear");
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
	
	cout << "Game Over" << endl;
	system("sleep 5s");
};

//==================================================================================================
