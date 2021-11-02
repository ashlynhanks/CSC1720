//Ashlyn Hanks
//Dr. Titus
//converting binary numbers to decimmal numbers

#include <iostream>
#include <cmath>
#include "myStack.h"

using namespace std;

int testBinary (int num);
//Declare a function to test the binary number 
int testBinary (int num)
{
     int a;
     while (num != 0)
     {
	a = num % 10;
	if (a > 1)
	    return 0;
	num = num / 10;
    }

    return 1;
}

void bintoDec (long bNUm, int& dec, int& weight);
//Define function to convert binary to decimal

void bintoDec (long bNum, int& dec, int& weight)
{
    int bit;
    stackType<int> binConvert(100);

    while (bNum > 0)
    {
	bit = bNum % 10;
	dec = dec + bit * static_cast<int>(pow(2.0, weight));
	bNum = bNum / 10;
	weight++;
	binConvert.push(dec);
    }

    cout << binConvert.top();
}

//Main function to test binary to decimal 

int main (void)
{
    long bbNum;
    int ddNum = 0;
    int bitWeight = 0;
    int biTest = 0;
	
    cout << endl;

    while (biTest == 0)
    {
	//Get a number from the user to convert
	cout << "Please enter a binary number to be converted: " << endl;
	cin >> bbNum;
   
	biTest = testBinary(bbNum);

 	if (biTest == 0)
	    cout << "The nummber provided is not binary, please provide a binary nummber" << endl;
    }

    cout << "The provided number in decimal is :" << endl;
    bintoDec(bbNum, ddNum, bitWeight);

    cout << endl;

    return 0;
}
