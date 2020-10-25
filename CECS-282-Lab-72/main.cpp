/**
  CECS 282 Lab 7
  @author Tonya Shulkey and Alma Alvarado
  @version 10/12/2020

  This program will Calculate the distance when adding and subtracting and input and output Distance through the overloaded operators
*/

#include <iostream>
using namespace std;
#include "Distance.h"

/**
This is the main method that will test the Distance class and see if the overloaded operators work
*/
int main(){
  
Distance dist1, dist3, dist4; //define distances
cin>>dist1;
Distance dist2(11, 6.25); //define, initialize dist2
dist3 = dist1 + dist2; //single '+' operator
dist4 = dist1 - dist2; //friend '-' operators
//display all lengths
cout << "dist1 = ";
cout<< dist1 << endl;
cout << "dist2 = ";
cout<< dist2 << endl;
cout << "dist3 = ";
cout<< dist3 << endl;
cout << "dist4 = ";
cout<< dist4 << endl;
return 0;
}