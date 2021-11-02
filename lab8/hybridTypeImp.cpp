//Ashlyn Hanks
//Dr. Titus
//Imp file for hybrid auto type

#include "hybridtype.h"
#include <string>
//Sets the value of the charge 
void hybridAutoType::setChargeLevel(double charge)
{	if (charge < 0)
		charge =0;

	chargeLevel = charge;
}
//Returns the value of charge
double hybridAutoType::getChargeLevel()const
{
	return chargeLevel;
}
//Sets the efficiency for miles per charge
void hybridAutoType::setChargeEfficiency(double chargempg)
{
	if (chargempg < 0)
		chargempg = 0;
	chargeEfficiency = chargempg;
}
//Returns the efficiency 
double hybridAutoType::getChargeEfficiency()const
{
	return chargeEfficiency;
}
//returns a string for the info
string hybridAutoType::getInfoString() const
{
	string chargeLvl = to_string(chargeLevel);
	string chargeEff = to_string(chargeEfficiency);
	string info = automobileType::getInfoString() + " Charge Level = " + chargeLvl + " Charge Efficiency = " + chargeEff;
	return info;
}
//Default constructor with zero for the values
hybridAutoType::hybridAutoType()
{
	chargeLevel = 0;
	chargeEfficiency = 0;
	mode = GAS;
}
//Paramertixed constructor
hybridAutoType::hybridAutoType(double miles, double fuelLvl, double fuelEff, double ChargeLvl, double ChargeEff)//: automobileType(odo,ga,mpgg)	
{
	chargeLevel = ChargeLvl;
	chargeEfficiency = ChargeEff;
	mode = ELECTRIC;
}	
