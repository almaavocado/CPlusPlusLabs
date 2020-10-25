/**
  CECS 282 Lab 7
  @author Tonya Shulkey and Alma Alvarado
  @version 10/12/2020

  This program will create a pointer array and insert values then display them.
*/
#include <iostream>
using namespace std;

#include "pointerDataClass.h"

/**
This is the main function that will create a PointerDataClass with size of 10 elements
It will insert 0-9 into array p of the object list11
Then it will display array p of the object list11
*/
int main() {

  pointerDataClass list11(10);
  
  for(int i = 0; i < 10; i++){
    list11.insertAt(i, i);
  }
  list11.displayData();

  return 0;
}