//Ashlyn Hanks
//Dr. Titus
//Recursive power funcio
#include <iostream>
#include <cmath>
using namespace std;

//Define the Repower function
int Repower(int j, int k)
{
	if (k == 0)
	{
	    return 1;
	}
	if (k == 1)
	{
	    return j; 
	}
	if (k > 0)
	{
	    return j * (Repower(j,k-1));
	}
	if (k < 0)
	{
	    abs(k);
            return  Repower(j, -k); 
	}
	else 
	{
	    return -1;
	}
}	

int main()
{
    cout << "Time to find powers, don't use a number too big or else the programm won't work" << endl;
    cout << endl;
    int j, k, x, in;
    int UI = 0;
    while( UI != 2)
    {	
//Get user input for j and k	
	cout << "Enter the number to be used as the base: " << endl;
	cin >> j;
	cout << "Enter the number to be used as the power: " << endl;
	cin >> k;
//Test j to make sure positive
	if (j < 0)
	{
	    cout << "Base number cannot be negative, try again: " << endl; 
	    continue;
	}
//Print out fraction if  k < 0
	if (k < 0)
	{
	    x = Repower(j,k);
	    cout << j << " to the power of " << k << " = 1/" << x << endl;
	}
//Use the Repower function to calculate the output and print the answer
	if (k >=0)
	{
	    x = Repower(j,k);
	    cout << j << " to the power of " << k << " = " << x << endl;
            cout << endl;
	}
//Ask the user if they would like to run again
	cout << endl;
	cout << "Would you like to find another power?" << endl;
	cout << "Please type 1 to find a new power, if you would like to exit please type 2" << endl;
	cin >> UI;
    }

	cout << "Thank you for finding powers :)" << endl;
	return 0;
}

