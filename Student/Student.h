#include <string>
// header guards
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
//creates class with private and public members
class Student {
  private:
    string name; 
    int score;
  
  public:
  
    Student();//Empty constructor

    Student(string name, int score); //constructor w/parameters

    ~Student();//Empty destructor

    void print() const;

    
};
#endif