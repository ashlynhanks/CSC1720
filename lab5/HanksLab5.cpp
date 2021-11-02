//Ashlyn Hanks
//Dr. Titus
//Lab 5 

#include <iostream>

using namespace std;

//Initializes the class of clockType
class clockType
{
	public:
		void setTime (int, int, int);
		void getTime (int&, int&, int&) const;
		void printTime () const;
		void incrementSeconds ();
		void incrementMinutes (); 
		void incrementHours ();
		bool equalTime (const clockType&) const;

	private:
		int hr;
		int min;
		int sec;
};
//Gets the time 
void clockType::getTime (int& hours, int& minutes, int&seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}
//Prints time
void clockType::printTime() const
{
	if (hr < 10)
		cout << "0";
	cout << hr << ":";

	if (min<10)
		cout << "0";
	cout << min << ":";

	if (sec < 10)
		cout << "0";
	cout << sec;
}
//Increases hours
void clockType::incrementHours()
{
	hr++;
	if (hr > 23)
		hr = 0;
}
//Increases minutes
void clockType::incrementMinutes()
{
	min++;
	if (min > 59)
	{
		sec = 0;
		incrementMinutes();
	}
}
//Increases seconds
void clockType::incrementSeconds()
{
	sec++;
	if (sec > 59)
	{
		sec = 0;
		incrementMinutes();
	}
}
//Compare the two clocks
bool clockType::equalTime (const clockType& otherClock) const
{
	return (hr == otherClock.hr
		&& min == otherClock.min
		&& sec == otherClock.sec);
}
//Sets time
void clockType::setTime (int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;
	
	if (0 <= minutes && minutes < 60)
		min = minutes;
	else 
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else 
		sec = 0;
}
//Run all functions
int main ()
{
	int hours, minutes, seconds;
	clockType otherClock;	

	clockType myClock;
	cout << "Set time:" << endl;
	myClock.setTime(2,4,6);
	myClock.printTime();
	cout << " " << endl;
	myClock.getTime(hours, minutes, seconds);
	cout << "Get Time:" << endl;
	myClock.printTime();
	cout << endl;
	myClock.incrementSeconds();
	cout << "Time with incremented seconds:" << endl;
	myClock.printTime();
	cout << endl;
	cout << "Time with incremented minutes:" << endl;
	myClock.incrementMinutes();
	myClock.printTime();
	cout << endl;
	cout << "Time with incremented hours:" << endl;
	myClock.incrementHours();
	myClock.printTime();
	cout << endl;
	otherClock.setTime(6,5,2);
	cout << "Time of other clock: " << endl;
	otherClock.printTime();
	cout << endl;
	myClock.equalTime(otherClock);
	otherClock.printTime();
	cout << endl;
	


}
