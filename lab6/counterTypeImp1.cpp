#include <iostream>
#include "counterType1.h"

using namespace std;

void counterType::initializeCounter()
{
        counter = 0;
}

void counterType::setCounter(int a)
{
        counter = a;
}

int counterType::getCounter() const
{
        return counter;
}

void counterType::incrementCounter()
{
        ++counter;
}

void counterType::decrementCounter()
{
        --counter;
        if (counter < 0)
                counter = 0;
}

void counterType::displayCounter() const
{
        cout << counter << endl;
}

counterType::counterType()
{
        counter = 0;
}
