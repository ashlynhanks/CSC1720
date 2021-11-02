//Ashlyn Hanks
//Dr. Titus
//Main test file

#include "Automobiletype.h"
#include "hybridtype.h"
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	string data;
	automobileType lexus;

	cout << "Ready to drive? You get to drive the Lexus today." << endl;
	cout << endl;
	lexus.setProperties(200, 10, 25);
	cout << "The Lexus's properties were set to 200 miles on the odometer, 10 gallons of gas in the car, and 25 miles per gallon." << endl;
	cout << endl;
	data = lexus.getInfoString();
	cout << data << endl;
	cout << endl;
	lexus.setProperties(-3, -44, -29);
	cout << "Testing the lexus with bad numbers." << endl;
	data = lexus.getInfoString();
	cout << data << endl;
	cout << endl;
	lexus.drive(15);
	cout << "You drove the car 15 miles." << endl;
	cout << endl;
	data = lexus.getInfoString();
	cout << "Retriving the new InfoString." << endl;
	cout << data << endl;
	cout << endl;
	cout << "Testing running out of gas." << endl;
	lexus.drive(2000);
	data = lexus.getInfoString();
	cout << data << endl;
	cout << endl;

	cout << "Want to be more eco friendly?" << endl;
	hybridAutoType prius;
	cout << "creating a prius using constructor with parameters." << endl;
	hybridAutoType tesla;
//	hybridAutoType.tesla(15.4, 40.9, 130.3, 4.5);
//	data = tesla.getInfoString;
	cout << data << endl;
	cout << endl;
	cout << "Set the charge level of the prius to 95." << endl;
	prius.setChargeLevel(95);
	cout << "Charge level =" << prius.getChargeLevel() << endl;
	cout << "Set charge Efficiency of the prius." << endl;
	prius.setChargeEfficiency(19);
	cout << "Charge Efficiency =" << prius.getChargeEfficiency() << endl;
	data = prius.getInfoString();
	cout << endl;
	cout << endl;
	cout << "Let's compare the prius to the tesla." << endl;
	cout << "Starting with the prius, here is the data:" << endl;
	data = prius.getInfoString();
	cout << data << endl;
	cout << "Now the tesla, here is the data:" << endl;
	data = tesla.getInfoString();
	cout << data << endl;
	
	cout << endl;
	cout << endl;
	cout << "thanks for going on a drive, have a nice day" << endl;

	return 0;
}
