//Ashlyn Hanks
//Dr. Titus 
//THE FINAL PROGRAM

#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;

//Make a struct that holds the card suit and value
struct card
{
    string suit;
    int cardValue;
};

//Create a deck of cards using a vector
void makeDeck(vector<card> &deck);

int main ()
{

//Make a deck of 52 cards using the vector
    vector<card> deck(52);
    makeDeck(deck);

//Initialize variables
    bool cont = true;
    int choice;
    string suitChoice;
    int valueChoice;

    cout << "Are you ready to play a game?" << endl << "Let's play a card guessing game" << endl;
     while(cont == true)
     {
//shuffle deck
	random_shuffle(deck.begin(),deck.end());

//Ask which game to play
	cout << "Which card game would you like to play? Guess the suit, guess the card value, or guess both?" << endl;
	cout << "For suit please enter 1, for card value please enter 2, for both please enter 3" << endl;
	cin >> choice;
	cout << "-------------------------------------------------------------" << endl << endl;
//guess the suit
	if(choice == 1)
	{
	    cout << "Are you ready to guess the suit?" << endl;
//Give user instructions for guessing
	    cout << "Here is how to play: Type the name of the suit spelled exactly from the list of options" << endl << "Options:" << endl << "Clubs" << endl << "Diamonds" << endl<< "Hearts" << endl << "Spades" << endl;
	    cin >> suitChoice;
//Check the answer given by user
	    if(suitChoice == deck[0].suit)
	    {
		cout << "YAY! You guessed the correct card. You're such a good guesser" << endl;
		cout << "-------------------------------------------------------------" << endl << endl;
	    }
	    else 
	    {
		cout << "Sorry, that answer was not right :(" << endl;
		cout << "-------------------------------------------------------------" << endl << endl;
	    }
	    cout << "The card was " << endl;
//List the cards in if else form to print out the correct card
		if(deck[0].cardValue == 1)
		    cout << "Ace of " << deck[0].suit << endl;
		else if(deck[0].cardValue  == 10)
		    cout << "Ten of " << deck[0].suit << endl;
		else if(deck[0].cardValue == 11)
		    cout << "Jack of " << deck[0].suit << endl;
		else if(deck[0].cardValue == 12)
		    cout << "Queen of " << deck[0].suit << endl;
		else if(deck[0].cardValue == 13)
		    cout << "King of " << deck[0].suit << endl;
		else
		    cout << deck[0].cardValue << " of " << deck[0].suit << endl;
	}
//guess the card value
	if(choice == 2)
	{
	    cout << "Are you ready to play guess the card value?" << endl;
//Give the user instructions on how to play
	    cout << "Here is how to play: Type your choice from the list of options exactly" << endl << "Options:" << endl << "1" << endl << "2" << endl << "3" << endl << "4" << endl << "5" << endl << "6" << endl << "7" << endl << "8" << endl << "9" << endl << "10" << endl << "11" << endl << "12" << endl << "13" << endl;
	    cout << "Key:" << endl << "Ace is 1, Jack is 11, Queen is 12, King is 13" << endl;
//Check the answer given by the user
	    cin >> valueChoice;
	    if(valueChoice == deck[0].cardValue)
	    {
		cout << "YAY! You guessed the correct card. You're such a good guesser" << endl;
		cout << "-------------------------------------------------------------" << endl <<  endl;
	    }
	    else
	    {
		cout << "Sorry, that answer was not right :(" << endl;
		cout << "-------------------------------------------------------------" << endl << endl;
	    } 
	    cout << "The card was " << endl;
//List the cards in if else form to print out the correct card
                if(deck[0].cardValue == 1)                       
                    cout << "Ace of " << deck[0].suit << endl;
                else if(deck[0].cardValue  == 10)
                    cout << "Ten of " << deck[0].suit << endl;
                else if(deck[0].cardValue == 11)
                    cout << "Jack of " << deck[0].suit << endl;
                else if(deck[0].cardValue == 12)
                    cout << "Queen of " << deck[0].suit << endl;
                else if(deck[0].cardValue == 13)
                    cout << "King of " << deck[0].suit << endl;
                else
                    cout << deck[0].cardValue << " of " << deck[0].suit << endl;

	}
//Guess both
	if(choice == 3) 
	{
	    cout << "Are you ready to guess the suit AND value?" << endl;
//Give the user instructions on how to play
	    cout << "Here is how to play: First you will guess the card value from the list of options, please imput the option ecactly" << endl << "Options:" << endl << "1" << endl << "2" << endl << "3" << endl << "4" << endl << "5" << endl << "6" << endl << "7" << endl << "8" << endl << "9" << endl << "10" << endl << "11" << endl << "12" << endl << "13" << endl;
	    cout << "Key:" << endl << "Ace is 1, Jack is 11, Queen is 12, King is 13" << endl;
	    cout << "Please enter value guess" << endl;
	    cin >> valueChoice;
	    cout << "Thank you, now it is time to guess the suit. Type the name of the suit spelled exactly from the list of options" << endl << "Options:" << endl << "Clubs" << endl << "Diamonds" << endl<< "Hearts" << endl << "Spades" << endl;
	    cout << "Please enter the suit guess" << endl;
	    cin >> suitChoice;
//Check the answer
	    if(valueChoice == deck[0].cardValue && suitChoice == deck[0].suit)
	    {	
		cout << "YAY! You guessed the correct card. You're such a good guesser" << endl;
		cout << "-------------------------------------------------------------" << endl <<  endl;
	    }
	    else 
	    {
		cout << "Sorry, that answer was not right :(" << endl;
                cout << "-------------------------------------------------------------" << endl << endl;
	    }
	    cout << "The card was " << endl;
//List the cards in if else form to print the correct card
		if(deck[0].cardValue == 1)
                    cout << "Ace of " << deck[0].suit << endl;
                else if(deck[0].cardValue  == 10)
                    cout << "Ten of " << deck[0].suit << endl;
                else if(deck[0].cardValue == 11)
                    cout << "Jack of " << deck[0].suit << endl;
                else if(deck[0].cardValue == 12)
                    cout << "Queen of " << deck[0].suit << endl;
                else if(deck[0].cardValue == 13)
                    cout << "King of " << deck[0].suit << endl;
                else
                    cout << deck[0].cardValue << " of " << deck[0].suit << endl;
	}
//Ask the user if they would like to play again
	cout << "Would you like to play again? Please enter 1 to keep playing or 0 to stop playing" << endl;
	cin >> choice;
	if (choice==0)
	    cont = false;
	else
	    cont = true;
	
    }

    return 0;
}


//Function for makeDeck 
void makeDeck(vector<card> &deck)
{
    int count = 0;
//First loop is used to control suit, seconf loop controls value
    for(int x = 1;x < 5; x++)
    {
	for(int y = 1;y < 14; y++)
	{
	    switch(x)
	    {
		case 1:
		    deck[count].suit = "Hearts";
                    deck[count].cardValue = y;
                    break;
		case 2:
		    deck[count].suit = "Spades";
                    deck[count].cardValue = y;
                    break;
		case 3:
		    deck[count].suit = "Diamonds";
                    deck[count].cardValue = y;
                    break;
		case 4:
		    deck[count].suit = "Clubs";
                    deck[count].cardValue = y;
                    break;
	    }
	    count++;
	}
    }
}
