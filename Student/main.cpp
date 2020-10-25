#include <iostream>
#include <string> 
#include "Student.h"
#include <iomanip> 

using namespace std;


int main() {
  //instances/parameters of students inputted into an array of 5, implements function Students(n,s)
  Student listOfStudents[5] = {
    Student("Tom", 85), Student("Alice", 71), Student("Jack", 93), Student("Janet", 76), Student("John", 66)
  };
 //prints each item in array
  int count = 0;
  while(count < 5){
    listOfStudents[count].print();
    count += 1;
  }
  
}