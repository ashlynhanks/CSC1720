//Ashlyn Hanks
//Dr. Titus
#ifndef automobileType_H
#define automobileType_H
#include <iostream>

using namespace std;

class hybridAutoType
{
	public:
		static const bool engineMode = true;
		void setChargeLevel();
		double getChargeLevel();
		void setChargeEfficiency();
		double getChargeEfficiency();
		// establishes values for odomenter, fuel, efficiency
		void setProperties(double, double, double);
		// puts private members into string 
		string getInfoString();
		// decreases gas, adds miles
		void drive(double);
		// adds gass	
		void addGass(double);
		automobileType();



	private:
		double charge;
		double power;
		double odometer;
		double fuel;
		double mpg;
};

