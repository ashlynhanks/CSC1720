#include <iostream>
  
using namespace std;

class counterType
{
  public:
        void initializeCounter();
        void setCounter(int = 0);
        int getCounter() const;
        void incrementCounter();
        void decrementCounter();
        void displayCounter() const;
        counterType(int);
        counterType();

  private:
        int counter;
};
