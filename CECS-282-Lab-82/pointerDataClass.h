/**
  CECS 282 Lab 8
  @author Tonya Shulkey and Alma Alvarado
  @version 10/19/2020

  This program will create a pointer array and insert values then display them.
*/

//guard
#ifndef POINTERDATACLASS_H
#define POINTERDATACLASS_H

#include<iostream>

using namespace std;

/**
This is the PointerDataClass that will contain an array of the object
It will have functions that include constructors, destructors, insert into an array, and display
*/
class pointerDataClass{
  
  int maxSize;//variable to store the maximum size of p
  int length;//variable to store the number of elements in p
  int *p;// pointer to an int array

  public:
  
  /**
  Constructor to create an array of the size specified by the parameter size.
  @param size the int of the size of the object
  */
  pointerDataClass(int size);

  /**
  Destructor to deallocate the memory space occupied by the array p
  */
  ~pointerDataClass();

  /**
  the function insertAt inserts num into array p at the position specified by  
  @param index is the array index that the number will be inserted into
  @param num is the int number that will be inserted
  */
  void insertAt(int index, int num);

  /**
  The function displayData displays all the array elements in p
  */
  void displayData(); 

  // pointerDataClass(pointerDataClass& point);

  int* get();
};
#endif