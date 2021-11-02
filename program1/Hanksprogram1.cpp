//Ashlyn Hanks
//Dr. Titus 
//Basketball programm 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;
//Initialize struct for data
struct Data {
	string name;
	string position;
	int min;
	double FG;
	double TPFG;
	double FT;
	int Fouls;
};
//Note use functions next time
int main ()
{
//Open files
	ifstream inFile; 
	inFile.open("BBData.txt");
	ofstream outFile;
	outFile.open("HanksBB.txt");
	
	Data info[10];
	
	 if(!inFile)
        {
                cout << "The file was unable to be opened, you are now exiting the program";
                return 0;
        }

	for( int i = 0; i < 10; i++)
	{
		inFile >> info[i].name >> info[i].position >> info[i].min >> info[i].FG >> info[i].TPFG >> info[i].FT >> info[i].Fouls;
	
	}
	
	
//Provide menu
	int usrIn;
	cout << "Menu:" << endl;
	cout << "1. Single Player Stats" << endl;
	cout << "2. Update Minutes Played" << endl;
	cout << "3. Display Team Stats" << endl;
	cout << "4. Sort Players" << endl;
	cout << "5. Quit" << endl;
	cout << "6. Print Team Stats in other File" << endl;  
	cout << "Please enter the coresponding number for your selection: " << endl;
	cin >> usrIn;  
//Display single player stats
	if (usrIn == 1)
	{
		cout << "List of players:" << endl;
		for(int i = 0; i < 10; i++)
		{	
			cout << i+1 << ". " << info[i].name << endl;
		}	
		int playnum;
		cout << "Please type number of desired player:" << endl;
		cin >> playnum;
		int a = playnum - 1; 
		const char separator = ' ';
                const int nameWidth = 11;
                const int numWidth = 15;
                const int NumWidth = 25;

		 cout << "Name       Position   Minutes   Field Goals   3 Point Percent   Free Throw Percent   Fouls" << endl;
		 cout << left << setw(nameWidth) << setfill(separator) << info[a].name << left << setw(nameWidth) << setfill(separator) << info[a].position << left << setw(nameWidth) << setfill(separator) << info[a].min << left << setw(numWidth) << setfill(separator) << info[a].FG << left << setw(numWidth) << setfill(separator) << info[a].TPFG << left << setw(NumWidth) << setfill(separator) << info[a].FT << left << setw(NumWidth) << setfill(separator) << info[a].Fouls << endl; 
			
	}
//Change player minutes	
	if (usrIn == 2)
	{
	  cout << "List of players:" << endl;
                for(int i = 0; i < 10; i++)
                {
                        cout << i+1 << ". " << info[i].name << endl;
                }
	cout << "Enter the number of desired player to change minutes played:" << endl;
	int pn;
	cin >> pn;
	int b = pn - 1;
	cout << "Enter new number of minutes played:" << endl;
	double Nw;
	cin >> Nw;
	info[b].min += Nw;
	const char separator = ' ';
	const int nameWidth = 11;
	const int numWidth = 15;
	const int NumWidth = 25;
	cout << "Name       Position   Minutes   Field Goals   3 Point Percent   Free Throw Percent   Fouls" << endl;

	cout << left << setw(nameWidth) << setfill(separator) << info[b].name << left << setw(nameWidth) << setfill(separator) << info[b].position << left << setw(nameWidth) << setfill(separator) << info[b].min << left << setw(numWidth) << setfill(separator) << info[b].FG << left << setw(numWidth) << setfill(separator) << info[b].TPFG << left << setw(NumWidth) << setfill(separator) << info[b].FT << left << setw(NumWidth) << setfill(separator) << info[b].Fouls << endl;
	}
//Display team 
	if (usrIn == 3)
	{
		const char separator = ' ';
    		const int nameWidth = 11;
    		const int numWidth = 15;
		const int NumWidth = 25;   

		cout << "                                 Team Stats                                            " << endl;
		cout << "---------------------------------------------------------------------------------------" << endl;
		cout << "Name       Position   Minutes   Field Goals   3 Point Percent   Free Throw Percent   Fouls" << endl;	
		for(int i = 0; i < 10; i++)
        	{
                cout << left << setw(nameWidth) << setfill(separator) << info[i].name << left << setw(nameWidth) << setfill(separator) << info[i].position << left << setw(nameWidth) << setfill(separator) << info[i].min << left << setw(numWidth) << setfill(separator) << info[i].FG << left << setw(numWidth) << setfill(separator) << info[i].TPFG << left << setw(NumWidth) << setfill(separator) << info[i].FT << left << setw(NumWidth) << setfill(separator) << info[i].Fouls << endl; 
        	}	 
	}
//Sort by minutes
	if (usrIn == 4)
	{
	 
                const char separator = ' ';
                const int nameWidth = 11;
                const int numWidth = 15;
                const int NumWidth = 25;
		int c, d = 10, i;
		Data temp[10]; 

                for(c = 0; c < d - 1; c++)
                {
                        for(i = 0; i < d - c - 1; i++)
                        {
                                if(info[i].min > info[i+1].min)
                                {
                                        temp[i] = info[i];
                                        info[i] = info[i+1];
                                        info[i+1] = temp[i];
                                }
                        }
                }
 
	  cout << "Name       Position   Minutes   Field Goals   3 Point Percent   Free Throw Percent   Fouls" << endl;
                for(int i = 0; i < 10; i++)
                {
                cout << left << setw(nameWidth) << setfill(separator) << info[i].name << left << setw(nameWidth) << setfill(separator) << info[i].position << left << setw(nameWidth) << setfill(separator) << info[i].min << left << setw(numWidth) << setfill(separator) << info[i].FG << left << setw(numWidth) << setfill(separator) << info[i].TPFG << left << setw(NumWidth) << setfill(separator) << info[i].FT << left << setw(NumWidth) << setfill(separator) << info[i].Fouls << endl;
	
	}
	}
//Quit menu
	if (usrIn == 5)
	{
		return 1;
	}
//Print team stats in outfile	
	if (usrIn == 6)
	{
		const char separator = ' ';
		const int nameWidth = 11;
		const int numWidth = 15;
		const int NumWidth = 25;	
		outFile << "Name       Position   Minutes   Field Goals   3 Point Percent   Free Throw Percent       Fouls" << endl;
		for (int i = 0; i <10; i++)
		{
			outFile << left << setw(nameWidth) << setfill(separator) << info[i].name << left << setw(nameWidth) << setfill(separator) << info[i].position << left << setw(nameWidth) << setfill(separator) << info[i].min << left << setw(numWidth) << setfill(separator) << info[i].FG << left << setw(numWidth) << setfill(separator) << info[i].TPFG << left << setw(NumWidth) << setfill(separator) << info[i].FT << left << setw(NumWidth) << setfill(separator) << info[i].Fouls << endl; 
		}
	}
inFile.close();
outFile.close();
	
return 0;
}
