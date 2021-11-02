//This program tests various operations of an unordered linked list

 
#include <iostream>
#include "unorderedLinkedList.h"

using namespace std; 

int main()
{
    unorderedLinkedList<int> listA, listB;          
    int num;                                        

    cout << "Creating list with input 22 7 48 93 14 2 " << endl ;

        listA.insertLast(22);                      
        listA.insertLast(7);
        listA.insertLast(48);
        listA.insertLast(93);        
        listA.insertLast(14);
        listA.insertLast(2);
        
    cout << endl;                                   

    cout << "listA: ";                      
    listA.print();                                  
    cout << endl;                                   
    cout << "Length of listA: " 
         << listA.length() << endl;                 

    listB = listA;	   //test the assignment operator 

    cout << endl << "listB: ";                     
    listB.print();                                  
    cout << endl;                                   
    cout << "Length of listB: " 
         << listB.length() << endl;                 

    cout << endl << "Enter the number to be "
         << "deleted: ";                           
    cin >> num;                                     
    cout << endl;                                   

    listB.deleteNode(num);                          
	
    cout << "After deleting " << num 
         << endl << "listB: " ;                     
    listB.print();                                  
    cout << endl;                                

    cout << "Length of listB: " 
         << listB.length() << endl;              

    cout << endl << "Output listA " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = listA.begin(); it != listA.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl;                                   
//Testing deleteSmallest
    cout << endl << "Testing deleting the smallest value" << endl;
    cout << endl << "Before" << endl;
    listB.print();
    cout << endl << "After" << endl;
    listB.deleteSmallest();
    listB.print();
    cout << endl;
//Testing reverse print
    cout << endl << "Testing printing the list in reverse" << endl;
    cout << endl << "Before" << endl;
    listB.print();
    cout << endl << "After" << endl;
    listB.printListReverse();
    cout << endl;
//creating an empty list
    unorderedLinkedList<int> listC;
//Testing delete smallest on empty list
    cout << endl << "Testing deleting the smallest value on an empty list" << endl;
    listC.deleteSmallest();
    cout << endl;
//Testing reverse printing on an empty list
    cout << endl << "Testing reverse printing an empty list" << endl;
    listC.printListReverse();
    cout << endl;

//Make a char list
    unorderedLinkedList<char> listD;
    
    listD.insertLast('n');
    listD.insertLast('i');
    listD.insertLast('c');
    listD.insertLast('h');
    listD.insertLast('o');
    listD.insertLast('l');
    listD.insertLast('e');
//Testing printing the letters
   cout << endl << "Testing the print on a char list" << endl;
   listD.print();
   cout << endl;
//Testing deleteSmallest on char list
   cout << endl << "Testing deleting the smallest element on a char list" << endl;
   cout << endl << "Before" << endl;
   listD.print();
   cout << endl << "After" << endl;
   listD.deleteSmallest();
   listD.print();
   cout << endl;
//Testing reverse printing the char list
   cout << endl << "Testing reverse printing the char list" << endl;
   cout << endl << "Before" << endl;
   listD.print();
   cout << endl << "After" << endl;
   listD.printListReverse();
   cout << endl;

    return 0;					
}



