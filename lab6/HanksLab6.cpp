//Ashlyn Hanks
//Dr. Titus
//1720-02
//Counter Class
#include <iostream>
#include "counterType1.h"

using namespace std;
//Test all aspects of the CounterType
int main ()
{
	cout << "Display counter is used throughout to display the counter" << endl;
	int n;
	counterType counter1;
	
	cout << "Initialized value of counter" << endl;
	counter1.initializeCounter();
	counter1.displayCounter();

	cout << "Get the origional value of the counter" << endl;
	counter1.getCounter();
	counter1.displayCounter();

	cout << "Set counter to 3" << endl;
	counter1.setCounter(3);
	counter1.displayCounter();

	cout << "Incrememnt counter" << endl;
	counter1.incrementCounter();
	counter1.displayCounter();

	cout << "Decrement Counter" << endl;
	counter1.decrementCounter();
	counter1.displayCounter();




	int m;
        counterType counter2;

        cout << "Initialized value of counter" << endl;
        counter2.initializeCounter();
        counter2.displayCounter();

        cout << "Get the origional value of the counter" << endl;
        counter2.getCounter();
        counter2.displayCounter();

        cout << "Set counter to 15" << endl;
        counter2.setCounter(15);
        counter2.displayCounter();

        cout << "Incrememnt counter" << endl;
        counter2.incrementCounter();
        counter2.displayCounter();

        cout << "Decrement Counter" << endl;
        counter2.decrementCounter();
        counter2.displayCounter();


	int c;
        counterType counter3;

        cout << "Initialized value of counter" << endl;
        counter3.initializeCounter();
        counter3.displayCounter();

        cout << "Get the origional value of the counter" << endl;
        counter3.getCounter();
        counter3.displayCounter();

        cout << "Set counter to .4" << endl;
        counter3.setCounter(.4);
        counter3.displayCounter();

        cout << "Incrememnt counter" << endl;
        counter3.incrementCounter();
        counter3.displayCounter();

        cout << "Decrement Counter" << endl;
        counter3.decrementCounter();
        counter3.displayCounter();







return 0;
}
