//Ashlyn Hanks
//Dr. Titus
//Main file
//So my friend function only prints the fist element of the array, it works, it just doesn't run through the loop fully
#include "arrayListType.h"
#include "orderedArrayListType.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	orderedArrayListType list1;
	bool out;
	int a;

	cout << "Now it's time to test ordered arrays. Are you ready? Lets go!" << endl;
	cout << endl;
	
//Testing to see if the array is empty
	cout << "------------------------------------------------" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Testing to see if the intialized array is empty" << endl;
	out = list1.isEmpty();
	if(out == true)
		cout << "The array is empty" << endl;
	else 
		cout << "The array is not empty" << endl;
	cout << endl;
//Testing removing from an empty list
	cout << "------------------------------------------------" << endl;
	cout << "Testing the remove function before antything has been insterted" << endl;
	list1.remove(14);
	cout << endl;
//Checking the listSize function
	cout << "------------------------------------------------" << endl;
	cout << "Checking the size of the list by using the listSize function" << endl;
	a = list1.listSize();
	cout << "The size of the list is " << a << endl;
	cout << endl;
//Checking the maxListSize function
	cout << "------------------------------------------------" << endl;
	cout << "Checking the maximum size of the list using the maxListSize function" << endl;
	a = list1.maxListSize();
	cout << "The max size of the list is " << a << endl;
	cout << endl;
//Testing the indertAt function
	cout << "------------------------------------------------" << endl;
	cout << "Using the insertAt function to insert 3 into the first position and using the stream insertion operator friend function" << endl;
	list1.insertAt(0,3);
	cout << "New array:" << endl;
	cout << list1;
	cout << endl;
	cout << endl;
//Inserting more nummbers using insertAt
	cout << "------------------------------------------------" << endl;
	cout << "Using the insertAt function to add 4 numbers into the list" << endl;
	cout << "List before adding:" << endl;
	cout << list1;
	cout << endl;
	cout << "List after adding:" << endl;
	list1.insertAt(1,11);
	list1.insertAt(2,23);
	list1.insertAt(3,36);
	list1.insertAt(4,41);
	list1.print();
	cout << endl;
//Testing the insertEnd function
	cout << "------------------------------------------------" << endl;
	cout << "Using the insertEnd function to add 57 to the end of the list" << endl;
	cout << "List before changing" << endl;
	list1.print();
	cout << "List after changing" << endl;
	list1.insertEnd(57);
	list1.print();
	cout << endl;
//Testing the seqSearch function
	cout << "------------------------------------------------" << endl;
	cout << "Using the seqSearch to find the number 23" << endl;
	cout << "List:" << endl;
	list1.print();
	int b = list1.seqSearch(23);
	cout << "The location of 23 in the list is " << b << endl;
	cout << endl;
//Testing the seqSearch with a number not in the list
	cout << "------------------------------------------------" << endl;
	cout << "Testing the seqSearch function by searching a number not in the list" << endl;
	cout << "List:" << endl;
	list1.print();
	int c = list1.seqSearch(144);
	cout << "The location of 144 in the list is " << c << endl;
	cout << endl;
//Testing the remove function
	cout << "------------------------------------------------" << endl;
	cout << "Testing the remove function by removing the number 23" << endl;
	cout << "List before removing 23:" << endl;
	list1.print();
	cout << "List after removing 23:" << endl;
	list1.remove(23);
	list1.print();
	cout << endl;
//Testing the remove function with a bad number
	cout << "------------------------------------------------" << endl;
	cout << "Testing the remove function with a number not in the list" << endl;
	cout << "List" << endl;
	list1.print();
	list1.remove(100);
	cout << endl;
//Testing the replaceAt function
	cout << "------------------------------------------------" << endl;
	cout << "Using the replaceAt function to replace the first number" << endl;
	cout << "List before:" << endl;
	list1.print();
	cout << "List after:" << endl;
	list1.replaceAt(0,7);
	list1.print();
	cout << endl;
//Testing the replace at function with a number out of range
	cout << "------------------------------------------------" << endl;
	cout << "Using the replaceAt function to replace a number out of range" << endl;
	cout << "List:" << endl;
	list1.print();
	list1.replaceAt(340,233);
	cout << endl;
//Testing the constructor
	cout << "------------------------------------------------" << endl;
	cout << "Testing the constructor by making list for 10 items" << endl;
	orderedArrayListType list2(10);
	list2.print();
	cout << endl;
	int d;
	d = list2.listSize();
	cout << "The size of the list is " << d << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Test to make sure the list has space for 10 items" << endl;
	int e;
	e = list2.maxListSize();
	cout << "The max size of the list is " << e << endl;
	cout << endl;
//Testing the overloaded assignment operator
	cout << "------------------------------------------------" << endl;
	cout << "Testing the overloaded assignment operator" << endl;
	orderedArrayListType list3;
	cout << "Size of array before assignment is " << list3.listSize() << endl;
	list3 = list1;
	cout << "Size of array after assignment is " << list3.listSize() << endl;
	cout << endl;
//Testing insertAt when the array is full 
	cout << "------------------------------------------------" << endl;
	cout << "Testing insertAt when the list is full" << endl;
	orderedArrayListType list4(4);
	list4.insertAt(0,1);
	list4.insertAt(1,2);
	list4.insertAt(2,3);
	list4.insertAt(3,4);
	cout << "Full list:" << endl;
	list4.print();
	cout << "Adding another number to the full list:" << endl;
	list4.insertAt(4,6);
	cout << endl;
//Testing insertEnd when the array is full
cout << "------------------------------------------------" << endl;
        cout << "Testing insertEnd when the list is full" << endl;
        orderedArrayListType list5(4);
        list5.insertEnd(1);
        list5.insertEnd(2);
        list5.insertEnd(3);
        list5.insertEnd(4);
        cout << "Full list:" << endl;
        list5.print();
        cout << "Adding another number to the full list:" << endl;
        list5.insertEnd(6);
        cout << endl;
	cout << "------------------------------------------------" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Thanks for testing :)" << endl;

	return 0;
}
	
