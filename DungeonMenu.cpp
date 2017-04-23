#include "Combat.hpp"
#include "ConsoleInputControl.hpp"

#include "Character.hpp"

#include "DungeonMenu.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//==================================================================================================

int DungeonMenu(Character* player, int place){
	Character* enemy;
	
	bool l;
	bool v;
	
	if(place == 1){
		l = true;
		v = false;
	}
	else{
		l = false;
		v = true;
	}
	
	enemy = DungeonEncounter(l, v);
	
	string In;
	int Select;
	
	bool Exit = false;
	
	system("clear");
	if(place == 1){
		cout << "There is a werewolf in front of you..." << endl;
		cout << "\n\n" << endl;
		
		do{
			cout << "What do you do:" << endl;
			cout << "\t" << "1 - Attack;" << endl;
			cout << "\t" << "2 - Run away;" << endl;
			cout << ">> ";
			getline(cin, In);
			Select = checkIntegerInput(In);
		
			switch(Select){
				case 1:
					system("clear");
					Damage(player, enemy);
					cout << "\n\n" << endl;
					
					cout << "Your HP: " << player->getHealth() << "\t\t\t" << "Enemy HP: " << enemy->getHealth() << endl;
					
					system("sleep 2s");
					if(enemy->getHealth() == 0){
						cout << "\n\n" << endl;
					
						cout << "You have killed the werewolf..." << endl;
						cout << "You will return to the City..." << endl;
						Exit = true;
					
						system("sleep 5s");
					}
					else{
						system("clear");
					}
					break;
				case 2:
					if(player->getSpe() > enemy->getSpe()){
						system("clear");
					
						cout << "You have successfuly escaped from the forest..." << endl;
						cout << "You will return to the City..." << endl;
					
						system("sleep 5s");
						delete enemy;
						return 0;
					}
					else{
						system("clear");
						cout << "You are too slow, so the werewolf reached you..." << endl;
						system("sleep 2s");
						system("clear");
					}
					break;
				default:
					break;
			}
			
			if(enemy->getHealth() > 0){
				Damage(enemy, player);
				cout << "\n\n" << endl;
					
				cout << "Your HP: " << player->getHealth() << "\t\t\t" << "Enemy HP: " << enemy->getHealth() << endl;
				
				system("sleep 2s");
			 }
			
			if(player->getHealth() == 0){
				system("clear");
			
				cout << "You are died versus the werewolf..." << endl;
			
				Exit = true;
				system("sleep 5s");
			}
		}
		while((Exit == false) && (enemy->getHealth() > 0) && (player->getHealth() > 0));
		
		delete enemy;
		return 1;
	}
	else{
		cout << "There is a vampire in front of you..." << endl;
		cout << "\n\n" << endl;
		
		do{
			cout << "What do you do:" << endl;
			cout << "\t" << "1 - Attack;" << endl;
			cout << "\t" << "2 - Run away;" << endl;
			cout << ">> ";
			getline(cin, In);
			Select = checkIntegerInput(In);
		
			switch(Select){
				case 1:
					system("clear");
					Damage(player, enemy);
					cout << "\n\n" << endl;
					
					cout << "Your HP: " << player->getHealth() << "\t\t\t" << "Enemy HP: " << enemy->getHealth() << endl;
					
					system("sleep 2s");
					if(enemy->getHealth() == 0){
						cout << "\n\n" << endl;
					
						cout << "You have killed the vampire..." << endl;
						cout << "You will return to the City..." << endl;
						Exit = true;
					
						system("sleep 5s");
					}
					else{
						system("clear");
					}
					break;
				case 2:
					if(player->getSpe() > enemy->getSpe()){
						system("clear");
					
						cout << "You have successfuly escaped from the forest..." << endl;
						cout << "You will return to the City..." << endl;

						system("sleep 5s");
						delete enemy;
						return 0;
					}
					else{
						system("clear");
						cout << "You are too slow, so the vampire reached you..." << endl;
						system("sleep 2s");
						system("clear");
					}
					break;
				default:
					break;
			}
			
			if(enemy->getHealth() > 0){
				Damage(enemy, player);
				cout << "\n\n" << endl;
					
				cout << "Your HP: " << player->getHealth() << "\t\t\t" << "Enemy HP: " << enemy->getHealth() << endl;
				
				system("sleep 2s");
			 }
			
			if(player->getHealth() == 0){
				system("clear");
			
				cout << "You are died versus the vampire..." << endl;
			
				Exit = true;
				system("sleep 5s");
			}
		}
		while(Exit == false);
		
		delete enemy;
		return 1;
	}
};



















