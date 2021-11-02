//Ashlyn Hanks
//Dr. Titus
//Lab 13 - Stacks
//Program to test the various operations of a stack
 
#include <iostream>
#include "myStack.h"
  
using namespace std;
 
void testCopyConstructor(stackType<int> otherStack);
 
int main()
{
    stackType<int> stack(50);
    stackType<int> copyStack(50);
    stackType<int> dummyStack(100); 

    stack.initializeStack();
    stack.push(85);
    stack.push(28);
    stack.push(56);
    copyStack = stack;  //copy stack into copyStack

    cout << "The elements of copyStack: ";
    while (!copyStack.isEmptyStack())  //print copyStack
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    copyStack = stack;
    testCopyConstructor(stack);  //test the copy constructor

    if (!stack.isEmptyStack())
        cout << "The original stack is not empty." << endl
             << "The top element of the original stack: "
             << copyStack.top() << endl;

    dummyStack = stack;  //copy stack into dummyStack

    cout << "The elements of dummyStack: ";
    while (!dummyStack.isEmptyStack())  //print dummyStack
    {
        cout << dummyStack.top() << " ";
        dummyStack.pop();
    }
    cout << endl;
//Testing the reverse function 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Testing the reverseStack function" << endl;

    cout << "Testing reverse fuction" << endl;
    stackType<int> stack1(10); 
    stackType<int> stack2(10);
    //Add numbers to the stack 
    stack1.push(1); 
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    
    stackType<int> stack1c(10); 
    stack1c = stack1;
    while (!stack1c.isEmptyStack())  
    {
        cout << stack1c.top() << " ";
        stack1c.pop();
    }
    cout << endl << "Reversed" << endl;
  
    stack1c = stack1;

    stack1c.reverseStack(stack2);

    stackType<int> stack2c(10);

    stack2c = stack2;
    while (!stack2c.isEmptyStack())  
    {
        cout << stack2c.top() << " ";
        stack2c.pop();
    }
    cout << endl;
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Testing the reverseStack function on an empty list" << endl;

    stackType<int> emptystack;
    stackType<int> empty2;

    emptystack.reverseStack(empty2);

    return 0;
}

void testCopyConstructor(stackType<int> otherStack)
{
    if (!otherStack.isEmptyStack())
        cout << "otherStack is not empty." << endl
             << "The top element of otherStack: "
             << otherStack.top() << endl;
}
