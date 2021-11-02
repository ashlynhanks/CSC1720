#include "Automobiletype.h"
#include <iostream>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;
//Sets the properties of the car, checking for bad numbers
void automobileType::setProperties(double a, double b, double c)
{
	if(a < odometer)
	{
		cerr << "Try again :( The new value for the odometer cannot be the same as the old value of " << odometer << endl;
	}

	else if(a < 0)
	{
		cerr << "The odometer cannot be less than zero silly goose" << endl;
	}
	
	else if(b < 0)
	{
		cerr << "There can't be less than 0 gallons of gas in the tank" << endl;
	}

	else
	{
		odometer = a;
        	gas = b;
        	mpg = c;
	}
}
//returns a string of the data
string automobileType::getInfoString() const
{
	string mi;
	string fu;
	string eff;
	string info;

	mi = to_string(odometer);
	fu = to_string(gas);
	eff = to_string(mpg);
	
	info = "Miles driven = "  + mi + "   Fuel = " + fu + "    Efficiency = " + eff;
	
	return info;
}
//Dries the car
void automobileType::drive(double a)
{
	double usedgas = abs(a/mpg);
	
	if(gas == 0)
	{
		cout << "You can't drive your car. Go get gas you silly goose" << endl;
	}
	else 
	{
		if(usedgas >= gas)
		{
			usedgas = gas;
			a = abs(usedgas * mpg);
			gas = 0;
			odometer += a;
		}
		else 
		{
			gas -= usedgas;
			odometer += abs(a);
		}
	}
}
//Default constructor
automobileType::automobileType()
{
	odometer = 0;
	gas = 0;
	mpg = 0;
}
//Sets a constructor with parameters
automobileType::automobileType(double odometer, double gas, double mpg)
{
	setProperties(odometer, gas, mpg);
}
