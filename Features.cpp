#include <iostream>

#include "Features.hpp"



//=================================================================== Constructors =================

Features::Features(unsigned short Str, unsigned short Spe, unsigned short Agg)/* unsigned short Ins, unsigned short Agg, unsigned short Ste)*/{
	setStr(Str);
	setStrMod();
	
	setSpe(Spe);
	setSpeMod();
	
	//setIns(Ins);
	//setInsMod();
	
	setAgg(Agg);
	setAggMod();
	
	//setSte(Ste);
	//setSteMod();
};

Features::Features(Features* f){
	setStr(f->getStr());
	setStrMod();
	
	setSpe(f->getSpe());
	setSpeMod();
	
	//setIns(f->getIns());
	//setInsMod();
	
	setAgg(f->getAgg());
	setAggMod();
	
	//setSte(f->getSte());
	//setSteMod();
};

//=================================================================== Setters and Getters ==========

void Features::setStr(unsigned short str){
	this->Str = str;
};

unsigned short Features::getStr(void){
	return Str;
};

void Features::setStrMod(void){
	short Mod;
	short OverMod;
	
	Mod = getStr() / 10;
	OverMod = getStr() % 10;

	if(OverMod >= 5){
		Mod = Mod + 1;
		this->StrMod = Mod;
	}
	else{
		this->StrMod = Mod;
	}
	
};

short Features::getStrMod(void){
	return StrMod;
};




void Features::setSpe(unsigned short spe){
	this->Spe = spe;
};

unsigned short Features::getSpe(void){
	return Spe;
};

void Features::setSpeMod(void){
	short Mod;
	short OverMod;
	
	Mod = getSpe() / 10;
	OverMod = getSpe() % 10;

	if(OverMod >= 5){
		Mod = Mod + 1;
		this->SpeMod = Mod;
	}
	else{
		this->SpeMod = Mod;
	}
};

short Features::getSpeMod(void){
	return SpeMod;
};



/*void Features::setIns(unsigned short ins){
	this->Ins = ins;
};

unsigned short Features::getIns(void){
	return Ins;
};

void Features::setInsMod(void){
	short Mod;
	short OverMod;
	
	Mod = getIns() / 10;
	OverMod = getIns() % 10;

	if(OverMod >= 5){
		Mod = Mod + 1;
		this->InsMod = Mod;
	}
	else{
		this->InsMod = Mod;
	}
};

short Features::getInsMod(void){
	return InsMod;
};*/



void Features::setAgg(unsigned short agg){
	this->Agg = agg;
};

unsigned short Features::getAgg(void){
	return Agg;
};

void Features::setAggMod(void){
	short Mod;
	short OverMod;
	
	Mod = getAgg() / 10;
	OverMod = getAgg() % 10;

	if(OverMod >= 5){
		Mod = Mod + 1;
		this->AggMod = Mod;
	}
	else{
		this->AggMod = Mod;
	}
};

short Features::getAggMod(void){
	return AggMod;
};



/*void Features::setSte(unsigned short ste){
	this->Ste = ste;
};

unsigned short Features::getSte(void){
	return SteMod;
};

void Features::setSteMod(void){
	short Mod;
	short OverMod;
	
	Mod = getSte() / 10;
	OverMod = getSte() % 10;

	if(OverMod >= 5){
		Mod = Mod + 1;
		this->SteMod = Mod;
	}
	else{
		this->SteMod = Mod;
	}
};

short Features::getSteMod(void){
	return SteMod;
};
*/


















