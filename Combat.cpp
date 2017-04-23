#include "Combat.hpp"
#include "ConsoleInputControl.hpp"

#include "Character.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//==================================================================================================

Character* DungeonEncounter(bool Licantropy, bool Vampire){
	srand(time(NULL));
	
	int Place;
	
	Features* f = new Features((rand()%10 + 1), (rand()%10 + 1), (rand()%10 + 1));//, (rand()%10 + 1), (rand()%10 + 1));
	if((Licantropy == true) && (Vampire == false)){
		Place = 1;
	}
	else if((Licantropy == false) && (Vampire == true)){
		Place = 1;
	}
	else{
		Place = 1;
	}
	Character* c = new Character("Enemy", f, (rand()%100 + 1), Place);
	return c;
};



void Damage(Character* hitter, Character* hitted){
	int GameOver;
	int Damage;
	
	srand(time(NULL));
	
	Damage = hitter->getStr() + hitter->getAgg() + ((int) (rand()%10 + 1));
	
	GameOver = hitted->getHealth() - Damage;
	if(GameOver < 0){
		hitted->setHealth(0);
	}
	else{
		hitted->setHealth(GameOver);
	}
	
	cout << hitter->getName() << " has made damage >> " << Damage << endl;
};
