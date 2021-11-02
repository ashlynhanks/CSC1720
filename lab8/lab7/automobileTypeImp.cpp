//Ashlyn Hanks
//Dr. Titus 
//Implimentation file 

#include <iostream>
#include "automobileType.h"
#include <string>
#include "hybridType.h"
using namespace std;

//Use set properties to set the odometer, fuel, and mpg, make sure that none can drop below zero 
void automobileType::setProperties(double a, double b, double c)
{
	odometer = a;
	fuel = b;
	mpg = c;

	if (a < 0)
	{
		odometer = 0;
	}

	if (b < 0)
	{
		fuel = 0;
	}
	
	if (c < 0)
	{
		mpg = 0;
	}

}

void hybridAutoType::setProperties(double a, double b, double c)
{
        odometer = a;
        fuel = b;
        mpg = c;

        if (a < 0)
        {
                odometer = 0;
        }

        if (b < 0)
        {
                fuel = 0;
        }
        
        if (c < 0)
        {
                mpg = 0;
        }

}

//Return the dashboard with odometer, fuel, and mpg
string automobileType::getInfoString() 
{
	string dashboard;
	string mlestr = "Miles ="; 
	//std::string mistr = odometer;
	string fustr = "Fuel =";
	//std::string fustrr = fuel;
	string effstr = "Efficiency =";
	//std::string efstr = mpg;
	cout << "Dashboard:" << endl;
	cout << "----------" << endl;
	dashboard =  mlestr << odometer << fustr << fuel << effstr << mpg << endl;
	cout << dashboard << endl;
	cout << endl;
	cout << endl;
}

//Function for driving the car, add odometer and decrease fuel  if fuel drops below 0 display message  
void automobileType::drive(double a)
{
	odometer += a;
	fuel -= a/mpg;

	if (fuel <=0)
	{
		cout << "You ran out of gas. Please find nearest gas station" << endl;
		fuel = 0;
	}
}

//Function to add gass to the tank
void automobileType::addGass(double a)
{

	fuel += a;
}

//Define constructor 
automobileType::automobileType()
{
	odometer = 0;
	fuel = 0;
	mpg = 0;
}		
