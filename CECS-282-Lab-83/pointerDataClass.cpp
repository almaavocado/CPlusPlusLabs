/**
  CECS 282 Lab 8
  @author Tonya Shulkey and Alma Alvarado
  @version 10/19/2020

  This program will create a pointer array and insert values then display them.
*/

#include "pointerDataClass.h"


/**
Constructor to create an array of the size specified by the parameter size.
@param size the size of the elements in the object
*/
pointerDataClass :: pointerDataClass(int size){
  maxSize = size;
  p = new int [size];
}

/**
Destructor to deallocate the memory space occupied by the array p
*/
pointerDataClass :: ~pointerDataClass(){
  delete p;
}

/**
the function insertAt inserts num into array p at the position specified by  
@param index the position that the number will be inserted into
@param num is the int value that will be inserted
*/
void pointerDataClass :: insertAt(int index, int num){
  *(p + index) = num;
  length++;
}

/**
The function displayData displays all the array elements in p
*/
void pointerDataClass :: displayData(){
  for(int i = 0; i < maxSize; i++){
    cout << *(p + i) << " ";
  }
  cout <<endl;
}

pointerDataClass :: pointerDataClass(const pointerDataClass& point){
  maxSize = point.maxSize;
  length = point.length;
  p = new int[maxSize];
  for(int i = 0; i < maxSize; i++){
    *(p + i) = *(point.p + i);
  }
}


int* pointerDataClass :: get(){
  return p;
}