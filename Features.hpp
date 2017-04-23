#ifndef Features_hpp
#define Features_hpp


class Features {
	private:
		// Attributes
		
		unsigned short Str;														     // Strenght
		short StrMod;																// Strenght modifier
		unsigned short Spe;															// Speed
		short SpeMod;																// Speed modifier
		//unsigned short Ins;															// Instinct
		//short InsMod;																// Instinct modifier
		unsigned short Agg;															// Aggressivity
		short AggMod;																// Aggressivity modifier
		//unsigned short Ste;															// Stealth
		//short SteMod;																// Stealth modifier
		
	public:
		// Constructors
		
		Features(unsigned short Str, unsigned short Spe, unsigned short Agg);//unsigned short Ins, unsigned short Agg, unsigned short Ste);
		Features(Features* f);
		
		// Setters and Getters
		
		void setStr(unsigned short str);
		unsigned short getStr(void);
		void setStrMod(void);
		short getStrMod(void);
		
		void setSpe(unsigned short spe);
		unsigned short getSpe(void);
		void setSpeMod(void);
		short getSpeMod(void);
		
		/*void setIns(unsigned short ins);
		unsigned short getIns(void);
		void setInsMod(void);
		short getInsMod(void);*/
		
		void setAgg(unsigned short agg);
		unsigned short getAgg(void);
		void setAggMod(void);
		short getAggMod(void);
		
		/*void setSte(unsigned short ste);
		unsigned short getSte(void);
		void setSteMod(void);
		short getSteMod(void);*/
		
};

#endif















































