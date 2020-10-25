/**
  CECS 282 Lab 7
  @author Tonya Shulkey and Alma Alvarado
  @version 10/12/2020

  This program will Calculate the distance when adding and subtracting and input and output Distance through the overloaded operators
*/

#include "Distance.h"
using namespace std;

/**
This is the overloaded operator+ that will add two distances together.
@param dist it is a Distance type that is the rhs of what is being added
@return the Distance of the results of the two added distances 
*/
const Distance Distance :: operator+(const Distance& dist) const{
  return Distance(feet + dist.feet, inches + dist.inches);
}

/**
This is the overloaded non member operator- that will subtract two distances. Take friend out in the implementation
@param dist1 this is the lhs distance being subtracted
@param dist2 this isthe rhs distance being subtracted
@return Distance the distance from the results of the subtraction
*/
Distance operator-(const Distance& dist1, const Distance& dist2){
  return Distance(dist1.feet - dist2.feet, dist1.inches - dist2.inches);
}

/**
This is the non member overloaded<< that will print the distance
@param out the cout
@param dist the distance you want to print
@return the cout of what to print
*/
ostream& operator<< (std::ostream& out, const Distance& dist){
  cout << "Feet: " << dist.feet << " Inches: " << dist.inches << endl;

  return out;
}

/**
This is the non member overloaded operator>> that will get the user input
@param in the cin
@param dist the distance inputted variable
@return the input
*/
istream& operator>> (std::istream& in, Distance& dist){
  cout << "enter ft and in: ";
  in >> dist.feet >> dist.inches;
  return in;
}