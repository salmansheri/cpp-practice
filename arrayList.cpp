#include<iostream>
#include<string>
#include "arrayListType.h"
using namespace std; 

int main() {
  arrayListType<int> intList(100); 
  arrayListType<string> stringList(100); 

  int number; 
  cout << "List 10: Enter 5 integers: ";
  for (int counter = 0; counter<5; counter++) {
    cin>>number; 
    intList.insertAt(counter, number);
  }

  cout << endl; 
  cout<< "List 19: The list you entered is: "; 
  intList.print(); 

  cout<< endl; 
  cout << "Enter the item to be deleted: "; 
  cin>>number; 
  intList.remove(number); 
  cout<< "After removing" << number << ", the list is:" << endl;  
  intList.print(); 

  string str; 

  cout<< "Enter 5 strings: "; 
  for (int counter=0; counter < 5; counter++) {
    cin>> str; 
    stringList.insertAt(counter, str); 

  }

  cout<<endl; 
  cout<< "The list you entered is: "<< endl; 
  stringList.print(); 
  cout<< endl; 

  cout<<"Enter the string to be delete: "; 
  cin>>str; 
  stringList.remove(str); 
  cout << "After removing"<<str<< endl; 
  stringList.print(); 
  cout<<endl; 
  return 0; 


  
  


}


