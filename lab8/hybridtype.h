//ashlyn Hanks
//Dr. Titus
//header file for hybridtpye

#ifndef hybridAutoType_H
#define hybridAutoType_H
#include "Automobiletype.h"
#include <string>

class hybridAutoType: public automobileType
{
	//creates private members for charge, charge mpg, and endgine mode
	private:
	double chargeLevel;
	double chargeEfficiency;
	double mode;

	//creates public members for GAS, ELECTRIC, setChargeLevel, getChargeLevel, setChargeEfficiency, getChargeEfficiency, getInfoString, and constructors
	public:
	static const bool GAS = true;
	static const bool ELECTRIC = false;
	void setChargeLevel(double);
	double getChargeLevel() const;
	void setChargeEfficiency(double);
	double getChargeEfficiency() const;
	string getInfoString() const;
	hybridAutoType(double, double, double, double, double);
	hybridAutoType();
};
#endif

