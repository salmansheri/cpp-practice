#include<iostream>
#include<cassert>
using namespace std; 


template <class elemType>
class arrayListType {
  
protected:
  elemType *list; 
  int length; 
  int maxSize; 
public:
  /*const arrayListType<elemType>& operator = (const arrayListType<elemType>& otherList) {*/
  /*  if (this != &otherList) {*/
  /*    delete [] list; */
  /*    maxSize = otherList.maxSize; */
  /*    length = otherList.length; */
  /**/
  /*    list = new elemType[maxSize]; */
  /**/
  /*    assert(list != NULL); */
  /**/
  /*    for (int i = 0; i< length; i++) {*/
  /*      list[i] = otherList.list[i]; */
  /*    }*/
  /**/
  /*  }*/
  /**/
  /*  return *this; */
  /*} */
  bool isEmpty() const {
  // Function to determine whether the list is empty
  // Post condition: Return true if the list is empty; 
  // otherwise, returns false.
  return (length == 0); 
  } 


  bool isFull() const {
  // Function to determine whether the list is full. 
  // Postcondition: Returns true if the list is full; 
  // otherwise, return false
    return (length == maxSize); 
  } 
  int listSize() const {
  // Function to the number of elements in the list 
  // Post Condition: Return the value of length
  return length; 
  } 
  int maxListSize() const {
  // Function to determine the size of the list
  // Postcondition: Returns the Value of maxsize
  return maxSize; 
  } 
  void print() const {
  // function to output the elements of the list 
  // Post Condition: Elements of the list are output on the standard output device. 
    for (int i = 0; i < length; i++) cout<< list[i] << " ";  
    cout << endl; 
  } 

  bool isItemAtEqual(int location, const elemType& item) const {
  // Function to determine whether the item is the same as the item in the list at the position specified by 
  // Post condition: Returns true if list[location] is the same as the item; otherwise
  // returns false
  return (list[location] == item); 
  } 

  void insertAt(int location, const elemType& insertItem) {
  // Function to insert an item in the list at the Position specified by location. The item to inserted is passed as parameter to the function. 
  // Post condition: STarting at location, the elements of the list are shifted down, list[location] = insertItem; 
  // and length++;. if the list is or location is out of range, an appropriate message is displayed
    if (location < 0 || location >= maxSize) {
      cerr<<"The Position of the item to inserted" << "is out of range" << endl; 

    } else {
      for (int i = length; i> location; i--) {
        list[i] = list[i - 1]; // move the elements down  

      }
      list[location] = insertItem; // insert the item at the specified Position
      length++; // increment the lenth 
    }
    


  }
  
  void insertEnd(const elemType& insertItem) {
  // function insert an item at the end of the list 
  // the parameter insertItem specifies the item to inserted 
  // if the list is full, an appropriate message is displayed. 
  if (length >= maxSize) {
      cerr << "Cannot insert in a full list" << endl; 
    } else {
      list[length] = insertItem; 
      length++; 
    }


  } 

  void removeAt(int location) {
  // Function to remove the item from the list at the position specified 
  if (location < 0 || location >= length) {
      cerr << "The location of the item to removed is out of range << endl "; 
    } else {
      for(int i = location; i < length - 1; i++) {
        list[i] = list[i + 1]; 

      }
      length--; 
    }
  } 

  void retrieveAt(int location, elemType& retItem) const  {
  // Function to retrieve the element from the list at the 
  // position specified by location. 
  // Post condition specified by location. 
  if (location < 0 || location >= length) {
      cerr << "The location of the item to reviewed is out of range << endl "; 
  
} else {
      retItem = list[location]; 
    }
}

  void replaceAt(int location, const elemType& repItem) {
  // Function the replace the specified item
  if (location < 0 || location >= length) {
      cerr << "The location of the item to reviewed is out of range << endl "; 
  
} else {
      repItem = list[location]; 
    }

  } 

  void clearList()  {
  // Function to remove all the elements from the list. 
  // After this operation, the size of the list is zero
  // Post condition: length = 0
  length = 0; 
}


  int seqSearch(const elemType& item) const {
  // Function to search the list for a given item. 
  // Post Condition: if the item is found, returns the location
  // in the array where the item is found; otherwise 
  // return -1
   int location; 
    int found = false; 
    for(location=0; location< length; location++) {
      if(list[location]== item) {
        found = true; 
        break; 
      }

    }

    if(found) {
      return location; 
    }else {
      return -1; 

    }

  }
    

  void insert(const elemType& insertItem) {
  // Function to insert the item specified the by the parameter
    int location; 
    if (length == 0) {
      list[length++] = insertItem; 
    } else if (length == maxSize) {
      cerr << "Cannot insert "; 
    } else {
      location = seqSearch(insertItem); 
      if(location == -1) {
        list[length++] = insertItem; 
          
      } else {
        cerr<< "the item to be inserted is already exists"; 
      }
    }

  }
  
  void remove(const elemType& removeItem) {
    int location; 
    if (length == 0) {
      cerr<< "Cannot delete from an empty list"; 
    } else {
      location = seqSearch(removeItem); 
       if (location == -1) {
        removeAt(location); 
      } else {
        cout<< "The item to be deleted is not in the list"; 
      }
    }
  }

  // Function to remove an item from list. the parameter

  arrayListType(int size) {
  // constructor 
  // Creates an array
  if (size < 0) {
    cerr<< "the Array size must be positive"; 
    maxSize = 100; 
  } else {
      maxSize = size; 
    } 

    length = 0; 
    list = new elemType[maxSize]; 
    assert(list != NULL); 
  }

  arrayListType(const arrayListType<elemType>& otherList) {
  // copy constructor
  maxSize = otherList.maxSize; 
  length = otherList.length; 
  list = new elemType[maxSize]; 
    assert(list != NULL); 

    for (int j = 0; j< length; j++) {
      list[j] = otherList.list[j]; 
    }

  } 
  
  arrayListType() {
  // Destructor 
  // Deallocated the memory occupied by array
  delete [] list; 

  } 

}; 






