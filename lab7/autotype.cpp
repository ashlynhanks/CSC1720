//Ashlyn Hanks
//Dr. Titus

#include <iostream>
#include "automobileType.h"

using namespace std;
//Test public variables 

int main()
{
	automobileType car1;
	cout << "Display counter:" << endl;
	//car1.automobileType();
	car1.getInfoString();

	//Test with rational nummbers	
	cout << "Testing car with normal numbers:" << endl;
	car1.setProperties(50,20,8);
	car1.getInfoString();
	
	//Test add gass
	cout << "Testing the Add Gas function:" << endl;
	car1.addGass(3.5);
	car1.getInfoString();

	//Test drive functions
	cout << "Testing the drive function:" << endl;
	car1.drive(15);
	car1.getInfoString();
	
	//Test with negative numbers
	cout << "Testing for negative numbers:" << endl;
	car1.setProperties(-1,-10,-5);
	car1.getInfoString();

	//Test running out of gass
	cout << "Testing running out of gas:" << endl;
	car1.drive(100000);
	car1.getInfoString();


	cout << "Thank you for driving :)" << endl;	
return 0;
}

