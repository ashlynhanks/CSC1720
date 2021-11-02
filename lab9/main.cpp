//Ashlyn Hanks
//Dr. Titus
//Main file
//Hey, I know my removeAll function doesn't really work right. What it is doing is every time it checks to see if the number is the desired nummber it prints the statement. I have tried a lot of things and I just couldn't get it to work. Everything else works fine. 
#include "arrayListType.h"
#include "unorderedArrayListType.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	unorderedArrayListType array1;
	bool out;
	int a;
	
	cout << "Let's test an unordered array! Are you ready?" << endl;
	cout << "GO!!!!!!" << endl;
	
//Testing if the array is emmpty	
	cout << "Testing if the array is empty:" << endl;
	out = array1.isEmpty();
	if(out == true)
		cout << "It is Empty" << endl;
	else 
		cout << "It's not empty" << endl;
	cout << endl;
//Testing remove for an empty list	
	cout << "Testing remove from empty list" << endl;
	array1.remove(10);
	cout << endl;	
//Testing removeAll when the array is empty
	cout << "Testing remmoveAll while the list is empty" << endl;
	array1.removeAll(3);
	cout << endl;
//Testing insertAt to enter elements into the array
	cout << "Using the insertAt function to insert members into an array" << endl;
	array1.insertAt(0,2);
	array1.print();	
	cout << endl;
	array1.insertAt(1,13);
	array1.insertAt(2,24);
	array1.insertAt(3,37);
	cout << "Inserting first 4 numbers into the array" << endl;
	array1.print();
	cout << endl;
//Testing to put a number outside the range of an array	
	cout << "Testing to put a number outside of the range of the array" << endl;
	array1.insertAt(234,10);
	cout << endl;
//Testing insertAt at the beginnging of the array	
	cout << "Testing inserting a number to the front of the array" << endl;
	array1.insertAt(0,5);
	array1.print();
	cout << endl;
//Testing replaceAt to replace the third nummber in the array 	
	cout << "Using the replaceAt function to replace the third number in the array" << endl;
	array1.replaceAt(2,20);
	array1.print();	
	cout << endl;
//Testing insertEnd to put the number 44 at the end of the array
	cout << "Using the insertEnd function to put the number 44 at the end of the array" << endl;
	array1.insertEnd(44);
	array1.print();
	cout << endl;
//Testing the seqSearch function 
	cout << "Using the seqSearch function to find the number 20" << endl;
	int b = array1.seqSearch(20);
	cout << "The location of the desired number is " << b << endl;
	cout << endl;
//Testing the seqSearch to find a number that isnt on the list
	cout << "Using the seqSearch function to find the number 50 that isn't in the list" << endl;
	int c = array1.seqSearch(55);
	cout << "The location of the desired number is " << c << endl;
	cout << endl;
//Testing the remove function to remove the number 2 from the array	
	cout << "Using the remove function to remove the number 2 from the array" << endl;
	array1.remove(2);
	array1.print();
	cout << endl;
//Test removing an item that isn't on the list	
	cout << "Testing removing an item not in the list" << endl;
	array1.remove(50);
	cout << endl;
//Testing the removeAt to remove the first element from the array 
	cout << "Using the removeAt to remove the new first element, 5, from the array" << endl;
	array1.removeAt(0);
	array1.print();
	cout << endl;
//Testing the removeAt to remove a member that is out of range	
	cout << "Testing removing a member that is out of range" << endl;
	array1.removeAt(333);
	array1.print();
	cout << endl;
//Testing the removeAll function to remove multiples of the same nummber
	cout << "Using the removeAll function to remove multiples of the same number" << endl;
	array1.replaceAt(1,4);
	array1.replaceAt(2,4);
	array1.replaceAt(0,4);
	cout << "Changing the array so there are multiple of the same number" << endl;
        array1.print();
	array1.removeAll(4);
	array1.print();
	cout << endl;
//Testing the remmoveAll function to remove a number not in the arrat
	cout << "Using the removeAll function to remove a number not in the array" << endl;
	array1.replaceAt(0,1);
	array1.replaceAt(1,2);
	array1.insertAt(2,3);
	array1.insertAt(3,4);
	array1.print();
	array1.removeAll(77);
	array1.print();
	cout << endl;
	
	cout << "Thanks for testing unordered arrays with me :)" << endl;	
	return 0;
}
