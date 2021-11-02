// Ashlyn Hanks
// CSC1720-2
// Write a program that prompts this user to enter the center and a point on the circle

#include <iostream>
#include<cmath>

using namespace std;

const double PI = 3.1416;
// Write prototypes for all functions
int Distance(double centerx, double cantery, double x, double y);
int Radius(double centerx, double centery, double x, double y);
int Circumference(double centerx, double centery, double x, double y);
int Area(double centerx, double centery, double x, double y);
void PrintResults(double centerx, double centery, double x, double y);
//Within main ask user for the 4 points, then call PrintResults
int main()
{

	double centerx, centery, x, y;

	cout << "Please provide the x point for the center: ";
	cin >> centerx;
	cout << endl;

	cout << "Please provide the y point for the center: ";
	cin >> centery;
	cout << endl;

	cout << "Please provide the x point for other ordered pair: ";
	cin >> x;
	cout << endl;

	cout << "Please provide the y point for other ordered pair: ";
	cin >> x;
	cout << endl;


	PrintResults(centerx, centery, x, y);


}
//Distance function - calculates distance between center and point 
int Distance(double centerx, double centery, double x, double y)
{
	int formulax = pow((x - centerx), 2);
	int formulay = pow((y - centery), 2);
	
	int formula = formulax + formulay;

	
	int d = sqrt(formula);
	
	return d; 
}	
//Radius function - calculates the distance between center and any point on circle
int Radius(double centerx, double centery, double x, double y)
{
	int r = Distance(centerx, centery, x, y);	


	return r;
}
//Circumference function - calculates the distance around the circle 
int Circumference(double centerx, double centery, double x, double y)
{
	int cr = Radius(centerx, centery, x, y);
	int c = 2*(cr)*(PI);

	return c;
}
//Area function - calculates the area within the circle
int Area(double centerx, double centery, double x, double y)
{
	int aa = Radius(centerx, centery, x, y);
	int ab = pow(aa,2);
	int a = PI * ab;
	
	return a;
}
//PrintResults function - prints the results of above functions 
void PrintResults(double centerx, double centery, double x, double y)
{
	int dis = Distance(centerx, centery, x, y);
	int rad = Radius(centerx, centery, x, y);
	int cir = Circumference(centerx, centery, x, y);
	int are = Area(centerx, centery, x, y);

	cout <<" The Distance = " << dis << endl;
	cout <<" The Raduis = " << rad << endl;
	cout <<" The Circumference = " << cir << endl;
	cout <<" The Area = " << are << endl;
}

