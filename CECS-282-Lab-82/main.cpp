/**
  CECS 282 Lab 8
  @author Tonya Shulkey and Alma Alvarado
  @version 10/19/2020

  This program will create a pointer array and insert values then display them.
*/

#include <iostream>
#include "pointerDataClass.h"
using namespace std;

int main()
{
pointerDataClass list1(10);
list1.insertAt(0, 50);
list1.insertAt(4, 30);
list1.insertAt(8, 60);
cout<<"List1: " <<endl;
list1.displayData();
cout<<"List 2: "<<endl;
pointerDataClass list2(list1);
list2.displayData();
list1.insertAt(4,100);
cout<<"List1: (after insert 100 at indext 4) " <<endl;
list1.displayData();
cout<<"List 2: "<<endl;
list2.displayData();
list1.get();
list2.get();
return 0;
}