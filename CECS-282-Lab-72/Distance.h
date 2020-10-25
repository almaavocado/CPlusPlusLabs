/**
  CECS 282 Lab 7
  @author Tonya Shulkey and Alma Alvarado
  @version 10/12/2020

  This program will Calculate the distance when adding and subtracting and input and output Distance through the overloaded operators
*/

#include <iostream>
//guard
#ifndef DISTANCE_H
#define DISTANCE_H

/**
This is the distance class that will get the feet and inches and creat overloaded operators that will work with Distance.
*/
class Distance { //English Distance class
  private:
    int feet;
    float inches;

  public: 
    /**
    The Distance default constructor (no args)
    */
    Distance() : feet(0), inches(0.0)
    { } 
    /**
    The Distance constructor (two args)
    */
    Distance(int ft, float in) : feet(ft), inches(in)
    { }

    /**
    This is the overloaded operator+ that will add two distances together.
    @param dist it is a Distance type that is the rhs of what is being added
    @return the Distance of the results of the two added distances 
    */
    const Distance operator+(const Distance& dist) const;

    /**
    This is the overloaded non member operator- that will subtract two distances
    @param dist1 this is the lhs distance being subtracted
    @param dist2 this isthe rhs distance being subtracted
    @return Distance the distance from the results of the subtraction
    */
    friend Distance operator-(const Distance& dist1, const Distance& dist2);

    /**
    This is the non member overloaded<< that will print the distance
    @param out the cout
    @param dist the distance you want to print
    @return the cout of what to print
    */
    friend std :: ostream& operator<< (std::ostream& out, const Distance& dist);
    
    /**
    This is the non member overloaded operator>> that will get the user input
    @param in the cin
    @param dist the distance inputted variable
    @return the input
    */
    friend std:: istream& operator>> (std::istream& in, Distance& dist);

};
#endif