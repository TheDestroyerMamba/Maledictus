#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "Character.hpp"
#include "Features.hpp"

using namespace std;

//==================================================================================================

void Save(Character* player){
	FILE* f;
	
	Features* pf = new Features(player->getStr(), player->getSpe(), player->getAgg());
	
	Character c(player->getName(), pf, player->getMaxHealth(), player->whichCursed());
	
	delete pf;
	
	f = fopen("Save.mal", "wb");

	fseek(f,0,0);	
	fwrite(&c, sizeof(Character), 1, f);
	
	fclose(f);
};



void Load(Character* c){
	FILE* f;
	
	f = fopen("Save.mal", "rb");
	
	fseek(f,0,0);
	fread(c, sizeof(Character), 1, f);
	
	cout << c->getName();
	
	fclose(f);
};

//==================================================================================================
