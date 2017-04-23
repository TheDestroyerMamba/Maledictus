#ifndef Character_hpp
#define Character_hpp

#include "Features.hpp"

#include <string>

using namespace std;

class Character : public Features{
	private:
		// Attributes
		
		string Name;
		
		Features* f;
		
		unsigned short MaxHealth;
		unsigned short Health;
		
		bool Licantropy;
		bool Vampire;
		
	public:
		// Constructors
		
		Character(string Name, Features* f, unsigned short MaxHealth, int SelectedCurse);
		
		// Setters and Getters
		
		void setName(string Name);
		string getName(void);
		
		void setMaxHealth(unsigned short MaxHealth);
		unsigned short getMaxHealth(void);
		
		void setHealth(unsigned short Health);
		unsigned short getHealth(void);
		
		void setCurse(int Selection);
		int whichCursed(void);
};

#endif
