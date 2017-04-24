#include "ConsoleInputControl.hpp"
#include "CreationMenu.hpp"
#include "InnMenu.hpp"
#include "DungeonMenu.hpp"
#include "Menu.hpp"

#include "Features.hpp"
#include "Character.hpp"

//#include "FileManagement.hpp"

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
	Character* player;
	player = CharacterMenu();
	
	Menu(player);
	
	system("clear");
	cout << "Thank you very much!" << endl;
	cout << "I hope that you are enjoyed to play with 'Maledictus'!" << endl;
	
	system("sleep 2s");
	system("clear");
	
	delete player;
}
