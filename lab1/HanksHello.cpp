//Ashlyn Hanks
//Dr. Titus 
// January 17 2020
// CSC1720 - 02
// Hello World and Income calculator

#include <iostream> 

using namespace std; 


int main(void)
{
// Print off the classic "Hello World" phrase

	cout << "Hello World" << endl;

// Create a variable for summer income

	double income; 
	double tax_income;
	double clothes_income;
	double school_income; 
	double hours; 
	double bonds_income;
	double parents_income_bond;
	double leftover_income; 

// Collect the hourly rate and number of hours worked

	cout << "Enter income" << endl;
	cin >> income;

	cout << "Enter number of hours worked this week" << endl;
	cin >> hours; 

	income *= hours;

// Calculate the net income after taxes 

	tax_income = income * .86; 

// Calculate the ammount of money spent on clothes and other accessories and school supplies

	clothes_income = tax_income * .10; 
	school_income = tax_income * .01;
	
// Calculate the money spent on savings bond 
	
	bonds_income = tax_income - clothes_income;
	bonds_income = bonds_income - school_income; 
	bonds_income = bonds_income * .25;

// Calculate the money your parents spend on bonds

	parents_income_bond = bonds_income * .5;
	
// Calculate the leftover funds

	leftover_income = tax_income - clothes_income;
	leftover_income = leftover_income - school_income;
	leftover_income = leftover_income - bonds_income; 

// Print off the different incomes and spending

	cout << "Income is before taxes is " << income << endl; 
	cout << "Income after taxes is " << tax_income << endl;
	cout << "Income spent on clothes is " << clothes_income << endl;
	cout << "Income spent on school supplies is " << school_income << endl;
	cout << "Income spent on bonds is " << bonds_income << endl; 
	cout << "Income your parents spent on bonds is " << parents_income_bond << endl;
	cout << "Your remaining income is "<< leftover_income << endl;

}
