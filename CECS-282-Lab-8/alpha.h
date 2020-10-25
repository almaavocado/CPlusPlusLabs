/**
  CECS 282 Lab 8
  @author Tonya Shulkey and Alma Alvarado
  @version 10/19/2020

  This program will use operator overloaders to overload the = operation and assing a alpha type to another alpha
*/

#ifndef ALPHA_H
#define ALPHA_H
////////////////////////////////////////////////////////////////
class alpha{
  private:
    int data;
  public:
    /**
      This is the alpha default constructor. It will set data to 0.
    */
    alpha();
    /**
      This is the alpha overload constructor. It takes an int and assigns data to that number.
      @param n is the int number we will assign to data
    */
    alpha(int n);

    /**
      This is the operator= overload assign. it will take an alpha nd assign it to another alpha.
      @param a is the alpha we are going to assign to another.
      @return alpha the one we are assigning to.
    */
    const alpha& operator=(const alpha& a);
    /**
      This is the display method that will print the data.
    */
    void display(); 

    /**
      This is the copy constructor. It will copy the contents of another alpha type.
      @param a is the alpha that we are using to assign to another
    */
    alpha(alpha& a);
};
#endif
////////////////////////////////////////////////////////////////