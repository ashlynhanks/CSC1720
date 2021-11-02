//Ashlyn Hanks
//Dr. Titus
//Lab 13 - Stacks
//This program tests various operations of a linked stack
 
#include <iostream>
#include "linkedStack.h"
   
using namespace std; 

void testCopy(linkedStackType<int> OStack);
 
int main()
{
    linkedStackType<int> stack;
    linkedStackType<int> otherStack;
    linkedStackType<int> newStack;

        //Add elements into stack
    stack.push(28);
    stack.push(94);
    stack.push(37);

        //Use the assignment operator to copy the elements
        //of stack into newStack
    newStack = stack;

    cout << "After the assignment operator, newStack: " 
         << endl; 

        //Output the elements of newStack
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << endl;	
        newStack.pop();
    }

        //Use the assignment operator to copy the elements
        //of stack into otherStack
    otherStack = stack;

    cout << "Testing the copy constructor." << endl;

    testCopy(otherStack);

    cout << "After the copy constructor, otherStack: " << endl;

    while (!otherStack.isEmptyStack())
    {
        cout << otherStack.top() << endl;	
        otherStack.pop();
    }
cout << endl;
cout << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;   

//Testing the reverseStack function 
    cout << "Testing the reverseStack function" << endl;
    linkedStackType<int> stack1;
    linkedStackType<int> stack2;
    //Add numbers into stack using push 
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    //Make a stack used to be the copy
    linkedStackType<int> stack1c;
    stack1c = stack1;
    while (!stack1c.isEmptyStack())
    {
        cout << stack1c.top() << " ";
        stack1c.pop();
    }
    cout << endl << "Reversed Stack:" << endl;

    stack1c = stack1;
    stack1c.reverseStack(stack2);
    linkedStackType<int> stack2c;
    
     while (!stack2c.isEmptyStack())
    {
        cout << stack2c.top() << " ";
        stack2c.pop();
    }
    cout << endl;
//Testing reverseStack on empty function
cout << endl;
cout << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "Testing the reverseStack function on an empty list" << endl;
    linkedStackType<int> emptystack;
    linkedStackType<int> empty2;
    
    emptystack.reverseStack(empty2);

    return 0;
}

  
     //Function to test the copy constructor
void testCopy(linkedStackType<int> OStack) 
{
    cout << "Stack in the function testCopy:" << endl;

    while (!OStack.isEmptyStack())
    {
        cout << OStack.top() << endl;	
        OStack.pop();
    }
}
