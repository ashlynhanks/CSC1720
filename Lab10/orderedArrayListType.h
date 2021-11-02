#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType
   
#include "arrayListType.h" 
#include <iostream>
class orderedArrayListType: public arrayListType
{
public:
    friend std::ostream& operator<<(std::ostream&, const orderedArrayListType&);

    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);
    void insert(int insertItem);
    const orderedArrayListType& operator= (const orderedArrayListType& obj);

    orderedArrayListType(int size = 100);
      //Constructor
}; 


#endif
