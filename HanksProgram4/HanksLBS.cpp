//Ashlyn Hanks
//Dr. Titus
//Converting decimal to binary

#include <iostream>
#include "linkedStack.h"

using namespace std;

void dectoBin (int dec);
//define a function to convert from decimal to binary 
void dectoBin (int dec)
{
    int bit;
    linkedStackType<int> converted;
 
    while (dec > 0)
    {
	bit = dec % 2;
	dec = dec / 2;
	
	converted.push(bit);
    }

    while (!converted.isEmptyStack())
    {
	cout << converted.top();
	converted.pop();
    }
}

//Declare main function to test the functionality of decimal to binary

int main (void)
{
    int convertN = 0;
    int a = 0;
    cout << endl;

    //get number from user to convert
    while (a == 0)
    {
	cout << "Please enter a number bigger than zero to be converted into binary: " << endl;
	cin >> convertN;
	
	//Check number for negative
	if (convertN > 0)
	    a = 1;
	else 
	    cout << "The number is not bigger than zero, please try again" << endl;
    }

    cout << "The number value converted to binary is " << endl;
    dectoBin(convertN);
    cout << endl;

    return 0;
}
