/**
  CECS 282 Lab 8
  @author Tonya Shulkey and Alma Alvarado
  @version 10/19/2020

  This program will use operator overloaders to overload the = operation and assing a alpha type to another alpha
*/

#include <iostream>
#include "alpha.h"
using namespace std;

int main()
{
alpha a1(37);
alpha a2;

a2 = a1; //invoke overloaded =
cout << "\na2=";
a2.display(); //display a2

alpha a3(a1); //invoke copy constructor
cout << "\na3=";
a3.display(); //display a3
alpha a4 = a1; 
cout << "\na4=";
a4.display(); 
cout << endl;
return 0;
}