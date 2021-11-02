//Program to test the various operations on an ordered linked list
  
#include <iostream>
#include "orderedLinkedList.h"
 
using namespace std;
 
int main()
{
    orderedLinkedList<int> list1, list2;        
    int num;                                    

    cout << "Creating list with input 77 11 44 99 33 55" << endl ;

        list1.insertLast(77);                      
        list1.insertLast(11);
        list1.insertLast(44);
        list1.insertLast(99);        
        list1.insertLast(33);
        list1.insertLast(55);

    cout << endl;                               

    cout << "list1: ";                  
    list1.print();                             
    cout << endl;                               

    list2 = list1; //test the assignment operator 

    cout << "list2: ";                 
    list2.print();                              
    cout << endl;                              

    cout << "Enter the number to be "
         << "deleted: ";                        
    cin >> num;                               
    cout << endl;                               

    list2.deleteNode(num);                     

    cout << "After deleting "
         << num << endl << "list2: " ;         
    list2.print();                              
    cout<<endl;  
//Testing the deleteSmallest function
    cout << endl << "Testing deleting the smallest value" << endl;
    cout << endl << "Before" << endl;
    list2.print();
    cout << endl << "After" << endl;
    list2.deleteSmallest();
    list2.print();
    cout << endl;
//Testing the printListReverse function
    cout << endl << "Testing printing list in reverse" << endl;
    cout << endl << "Before" << endl;
    list2.print();
    cout << endl << "After" << endl;
    list2.printListReverse();
    cout << endl;
//Making an empty int list for testing
    orderedLinkedList<int> list3;
//Testing printListReverse function on empty List
    cout << endl << "Testing reverse print on an empty list" << endl;
    list3.printListReverse();
    cout << endl;
//Testing deleteSmallest on an empty list
    cout << endl << "Testing removing the smallest number on an empty list" << endl;
    list3.deleteSmallest();
    list3.print();
    cout << endl;
//Making a char list
    orderedLinkedList<char> list4;
    list4.insertLast('a');
    list4.insertLast('s');
    list4.insertLast('h');
    list4.insertLast('l');
    list4.insertLast('y');
    list4.insertLast('n');
//Testing print function on char list
    cout << endl << "Testing printing letters" << endl;
    list4.print();
    cout << endl;
//Testing delteSmallest on char list
    cout << endl << "Testing deleting the smallest letter" << endl;
    cout << endl << "Before" << endl;
    list4.print();
    cout << endl << "After" << endl;
    list4.deleteSmallest();
    cout << endl;
//Testing printListReverse on char list
    cout << endl << "Testing reverse printing the letters" << endl;
    cout << endl << "Before" << endl;
    list4.print();
    cout << endl << "After" << endl;
    list4.printListReverse();
    cout << endl;

cout << endl << "Output list1 " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl;          

    return 0;					
}



