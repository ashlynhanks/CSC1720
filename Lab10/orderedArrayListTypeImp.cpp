
#include <iostream>
#include "orderedArrayListType.h" 


using namespace std; 
//Inserts an element to the appropriate place in the array 
void orderedArrayListType::insertAt(int location, 
                                      int insertItem) 
{
    insert(insertItem);
} //end insertAt
//Inserts an element to the appropriate place in the array
void orderedArrayListType::insertEnd(int insertItem)
{
    insert(insertItem);
} //end insertEnd
//Finds the location in the array of the desired element
int orderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;


    for(loc = 0; loc < length; loc++)
   
        if (list[loc] == searchItem)
        { 
	    found = true;
	    break;
	}
        else
            loc++;

    if (found)
        return loc;
    else
	cout << "That number is not in the list" << endl;
        return -1;
} //end seqSearch

//Removes an element from the array 
void orderedArrayListType::remove(int removeItem)
{
    int loc;

    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove
//Replaces an element at the desired position 
void orderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
	cout << "THe location of the item to be replaced is out of range" << endl;
	
    else
	list[location] = repItem;
} //end replaceAt
//Constructor
orderedArrayListType::orderedArrayListType(int size)
                       : arrayListType(size)
{
}  //end constructor
//Inserts an element at the desired location 
void orderedArrayListType::insert(int insertItem)
{
	if(length == 0)
		list[length++] = insertItem;
	else if(length == maxSize)
		cout << "Cannot insert in a full list." << endl;
	else
	{
		int loc;
		bool found = false;
		
		for (loc = 0; loc < length; loc++)
		{
			if(list[loc] >= insertItem)
			{
				found = true;
				break;
			}
		}
		for (int i = length; i > loc; i--)
			list[i] = list[i-1];

		list[loc] = insertItem;
		length++;
	}
}
//Overrides the << operator so it can output the list 
ostream& operator<<(ostream& os, const orderedArrayListType& abc)
{
	cout << "Length = " << abc.length << endl;
	for(int i=0; i < abc.length; i++)
	{
		os << abc.list[i] << " ";	
	
	return os;
	}
}
//overrides the = operator so it can make a matching object with the same max size
const orderedArrayListType& orderedArrayListType::operator= (const orderedArrayListType& obj)
{
	if(this != &obj)
	delete [] list;
	maxSize = obj.maxSize;
	length = obj.length;
	list = new int [maxSize];
	for(int i; i < obj.length; i++)
		list[i] = obj.list[i];
	return *this;
}
	
	
