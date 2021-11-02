//Ashlyn Hanks
//Dr. Titus
//Lab 11
//Data: 2.85 6.74 28.93 61.22 10.00 45.34 61.78 5.75

#include <iostream>
 
#include "unorderedArrayListType.h"

using namespace std; 

int main() 
{
    unorderedArrayListType<double> numList(25); 

    double num;                                

    cout << "Enter 8 numbers: ";        

    for (int count = 0; count < 8; count++)     
    {
        cin >> num;                             
        numList.insertEnd(num);                 
    }

    cout << endl;                               
//Test the maxListSize function
    cout << "Testing the maxListSize function:" << endl;
    cout << "The max size of the list is " << numList.maxListSize() << endl;
    cout << endl;
//Testing the listSize function
    cout << "Testing the listSize function:" << endl;
    cout << "The size of the list is " << numList.listSize() << endl;
    cout << endl;
//Testubg the isEmpty function 
    cout << "Testing the isEmpty function with a not empty list:" << endl;
    if(numList.isEmpty() == true)
	cout << "The list is empty" << endl;
    else 
	cout << "The list is not empty" << endl;
    cout << endl;
//Testing the isEmpty function on an empty list
    unorderedArrayListType<double> Alist(5);
    cout << "Testing the isEmpty function with an empty list:" << endl;
    if(Alist.isEmpty() == true)
	cout << "The list is empty" << endl;
    else
	cout << "The list is not empty" << endl;
//Testing isFull with a full list
    cout << "Testing the isFull function with a full list:" << endl;
    cout << "Enter 5 numbers: ";        

    for (int count = 0; count < 5; count++)     
    {
        cin >> num;                             
        Alist.insertEnd(num);                 
    }

    if (Alist.isFull() == true)
	cout << "The list is full" << endl;
    else 
	cout << "THe list is not full" << endl; 
    cout << endl;
//Testing the isFull without a full list
    cout << "Testing the isFull function without a full list:" << endl;
    if (numList.isFull() == true)
        cout << "The list is full" << endl;
    else
        cout << "THe list is not full" << endl;
    cout << endl;
//Testing the isItemAtEqual 
    cout << "Testing the isItemAtEqual function with correct numbers:" << endl;
    if(numList.isItemAtEqual(4,10.00) == true)
	cout << "10.00 exists in the fourth position" << endl;
    else
	cout << "10.00 does not exist in the fourth position" << endl;
    cout << endl;
//Testing the isItemAtEqual
    cout << "Testing the isItemAtEqual function with incorrect numbers:" << endl;
    if(numList.isItemAtEqual(2,10.00) == true)
        cout << "10.00 exists in the fourth position" << endl;
    else
        cout << "10.00 does not exist in the fourth position" << endl;
    cout << endl;
//Testing the retriveAt function
    cout << "Testing the retrieveAt function:" << endl;
    double a = 0.00;
    numList.retrieveAt(1,a);
    cout << "The second number in the list is:" << a << endl;
    cout << endl;
//Testing the retriceAt function out of range
    cout << "Testing the retriveAt function out of range" << endl;
    double b = 0.00;
    numList.retrieveAt(234,b);
    cout << "The number at the 235 spot is: " << b << endl;
    cout << endl;
//Testing the replaceAt function
    cout << "Testing the replaceAt function with the 2nd number: " << endl;
    numList.replaceAt(1,5.7);
    numList.print();
    cout << endl;
//Testing the replaceAt function out of range
    cout << "Testing the replaceAt function out of range: " << endl;
    numList.replaceAt(120,5);
    numList.print();
    cout << endl;

    cout << "numList: ";               
    numList.print();                           
    cout << endl;                               

    cout << "Enter the number to be " 
         << "deleted: ";                        
    cin >> num;                                 
    cout << endl;                               

    numList.remove(num);                        
    cout << "After removing " << num
         << " numList: ";                       
    numList.print();                            
    cout << endl;                              
 
    cout << "Enter the search item: "; 

    cin >> num;                                 
    cout << endl;                               

    if (numList.seqSearch(num) != -1)           
        cout <<  num << " found in numList." << endl;   
    else                                        
        cout <<  num << " is not in numList." << endl;  
//Testing the clearList function" << endl;
    cout << "Testing the clearList function:" << endl;
    numList.clearList();
    cout << "The length of the list should be zero after clearing the list" << endl;
    cout << "The length of the list is: " << numList.listSize() << endl;
    cout << endl;
//Testing the same functions for an int list
    cout << endl;
    cout << endl;
    cout << "TESTING FOR AN INT LIST:" << endl;

    unorderedArrayListType<int> intList(25); 

    int numInt;                                

    cout << "Enter 8 numbers: ";        

    for (int count = 0; count < 8; count++)     
    {
        cin >> numInt;                             
        intList.insertEnd(numInt);                 
    }

    cout << endl;                               
//Testing the max size and list size functions
    cout << "Testing the maxListSize function:" << endl;
    cout << "The max size of the list is " << intList.maxListSize() << endl;
    cout << endl;
    cout << "Testing the listSize function:" << endl;
    cout << "The size of the list is " << intList.listSize() << endl;
    cout << endl;
//Testing the isEmpty function
    cout << "Testing the isEmpty function with a not empty list:" << endl;
    if(intList.isEmpty() == true)
        cout << "The list is empty" << endl;
    else
        cout << "The list is not empty" << endl;
    cout << endl;
//Testing the isEmpty function with an empty list
    unorderedArrayListType<int> Blist(5);
    cout << "Testing the isEmpty function with an empty list:" << endl;
    if(Blist.isEmpty() == true)
        cout << "The list is empty" << endl;
    else
        cout << "The list is not empty" << endl;
    cout << endl;
//Testing the isFull with a full list
    cout << "Testing the isFull function with a full list:" << endl;
    cout << "Enter 5 numbers: ";

    for (int count = 0; count < 5; count++)
    {
        cin >> num;
        Blist.insertEnd(num);
    }

    if (Blist.isFull() == true)
        cout << "The list is full" << endl;
    else
        cout << "THe list is not full" << endl;
    cout << endl;
//Testing isFull without a full list
    cout << "Testing the isFull function without a full list:" << endl;
    if (intList.isFull() == true)
        cout << "The list is full" << endl;
    else
        cout << "THe list is not full" << endl;
    cout << endl;
//Testing the isItemAtEqual 
    cout << "Testing the isItemAtEqual function with correct numbers:" << endl;
    if(intList.isItemAtEqual(2,63) == true)
        cout << "63 exists in the third position" << endl;
    else
        cout << "63 does not exist in the third position" << endl;
    cout << endl;
//Testing the isItemAtEqual
    cout << "Testing the isItemAtEqual function with correct numbers:" << endl;
    if(intList.isItemAtEqual(7,63) == true)
        cout << "63 exists in the third position" << endl;
    else
        cout << "63 does not exist in the third position" << endl;
    cout << endl;
//Testing the retriveAt function
    cout << "Testing the retrieveAt function:" << endl;
    int c = 0;
    intList.retrieveAt(1,c);
    cout << "The second number in the list is:" << c << endl;
    cout << endl;
//Testing the retriveAt function 
    cout << "Testing the retriveAt function out of range" << endl;
    int d = 0;
    intList.retrieveAt(234,d);
    cout << "The number at the 235 spot is: " << d << endl;
    cout << endl;
//Testing the replaceAt function
    cout << "Testing the replaceAt function with the 2nd number: " << endl;
    intList.replaceAt(1,24);
    intList.print();
    cout << endl;
//Testing the replaceAt function
    cout << "Testing the replaceAt function out of range: " << endl;
    intList.replaceAt(120,5);
    intList.print();
    cout << endl;

    cout << "numList: ";
    intList.print();
    cout << endl;

    cout << "Enter the number to be "
         << "deleted: ";
    cin >> num;
    cout << endl;


    intList.remove(num);
    cout << "After removing " << num
         << " numList: ";
    intList.print();
    cout << endl;

    cout << "Enter the search item: ";

    cin >> num;
    cout << endl;

    if (intList.seqSearch(num) != -1)
        cout <<  num << " found in numList." << endl;
    else
        cout <<  num << " is not in numList." << endl;
//Testing clearing the list
    cout << "Testing the clearList function:" << endl;
    intList.clearList();
    cout << "The length of the list should be zero after clearing the list" << endl;
    cout << "The length of the list is: " << intList.listSize() << endl;
    cout << endl;
//Testing for string list
// values tested: Computer,Science,department,is,superior
    cout << endl;
    cout << endl;
    cout << "TESTING FOR STRING LIST:" << endl;

    unorderedArrayListType<string> stringList(25); 

    string numString;                                

    cout << "Enter 8 strings: ";        

    for (int count = 0; count < 8; count++)     
    {
        cin >> numString;                             
        stringList.insertEnd(numString);                 
    }

    cout << endl;                               
//Testing the maxSize function and listSize
    cout << "Testing the maxListSize function:" << endl;
    cout << "The max size of the list is " << stringList.maxListSize() << endl;
    cout << endl;
    cout << "Testing the listSize function:" << endl;
    cout << "The size of the list is " << stringList.listSize() << endl;
    cout << endl;
//Testing the isEmpty function
    cout << "Testing the isEmpty function with a not empty list:" << endl;
    if(stringList.isEmpty() == true)
        cout << "The list is empty" << endl;
    else
        cout << "The list is not empty" << endl;
    cout << endl;
    unorderedArrayListType<string> Clist(5);
    cout << "Testing the isEmpty function with an empty list:" << endl;
    if(Clist.isEmpty() == true)
        cout << "The list is empty" << endl;
    else
        cout << "The list is not empty" << endl;
    cout << endl;
//Testing the isFull function
    cout << "Testing the isFull function with a full list:" << endl;
    cout << "Enter 5 strings: ";
    string numm;
    for (int count = 0; count < 5; count++)
    {
        cin >> numm;
        Clist.insertEnd(numm);
    }

    if (Clist.isFull() == true)
        cout << "The list is full" << endl;
    else
        cout << "THe list is not full" << endl;
    cout << endl;
    cout << "Testing the isFull function without a full list:" << endl;
    if (stringList.isFull() == true)
        cout << "The list is full" << endl;
    else
        cout << "THe list is not full" << endl;
    cout << endl;
//Testing the isItemAtEqual
    cout << "Testing the isItemAtEqual function with correct strings:" << endl;
    if(stringList.isItemAtEqual(0,"Computer") == true)
	cout << "Computer exists in the first position" << endl;
    else
	cout << "Computer does not exist in the first position" << endl;
    cout << endl;
cout << "Testing the isItemAtEqual function with wrong strings:" << endl;
    if(stringList.isItemAtEqual(4,"Computer") == true)
        cout << "Computer exists in the fith position" << endl;
    else
        cout << "Computer does not exist in the fith position" << endl;
    cout << endl;
//Testing the retrieveAt
    cout << "Testing the retrieveAt function:" << endl;
    string pos = "";
    stringList.retrieveAt(1,pos);
    cout << "The second number in the list is:" << pos << endl;
    cout << endl;
    cout << "Testing the retriveAt function out of range" << endl;
    string Apos = "";
    stringList.retrieveAt(123,Apos);
    cout << "The second number in the list is:" << Apos << endl;
    cout << endl;
 //Testing the replaceAt function
    cout << "Testing to replace the string at position 5 with inferior" << endl;
    stringList.replaceAt(4,"inferior");
    stringList.print();

    cout << "stringList: ";               
    stringList.print();                           
    cout << endl;                               

    cout << "Enter the string to be " 
         << "deleted: ";                        
    cin >> numString;                                 
    cout << endl;                               


    stringList.remove(numString);                        
    cout << "After removing " << numString
         << " stringList: ";                       
    stringList.print();                            
    cout << endl;                              
 
    cout << "Enter the search item: "; 

    cin >> numString;                                 
    cout << endl;                               
                                   
    if (stringList.seqSearch(numString) != -1)           
        cout <<  numString << " found in stringList." << endl;   
    else                                        
        cout <<  numString << " is not in stringList." << endl;  

    cout << "Testing clearList function" << endl;
    stringList.clearList();
    cout << "The length of the list should be 0" << endl;
    stringList.listSize();
 
   return 0;                                   
}
