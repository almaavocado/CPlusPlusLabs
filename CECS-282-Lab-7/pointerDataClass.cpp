/**
  CECS 282 Lab 7
  @author Tonya Shulkey and Alma Alvarado
  @version 10/12/2020

  This program will create a pointer array and insert values then display them.
*/

#include "pointerDataClass.h"


/**
Constructor to create an array of the size specified by the parameter size.
@param size the size of the elements in the object
*/
pointerDataClass :: pointerDataClass(int size){
  maxSize = size;
}

/**
Destructor to deallocate the memory space occupied by the array p
*/
pointerDataClass :: ~pointerDataClass(){

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
  for(int i = 0; i < length; i ++){
    cout << *(p + i) << " ";
  }
} 