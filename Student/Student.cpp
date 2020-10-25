#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student() : name(" "), score(0) {}
Student::Student(string n, int s) : name(n), score(s) {}
//empty destructor that outputs when each memory is deleted 
Student::~Student() {
  cout << "The student " << name << " has been removed." << endl;
};


//assigns grades based off of scoresd
void Student::print() const {
  char grade;

  if(score <= 100 && score >= 90) {
    grade = 'A';
  }

  else if(score <= 89 && score>=80){
    grade = 'B';
  }

  else if(score <= 79 && score>=70){
    grade = 'C';
  }

  else if(score <= 69 && score>=60){
    grade = 'D';
  }

  else{
    grade = 'F';
  }

  //Printing students name score and grade
  cout << "Name: " << name << " " << " Score: " << score << " " << "Grade: " << grade << endl;

};

