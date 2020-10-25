/*
Header file for Employee object
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        long empNum;
    
    public:
        //constructors
        Employee();
        Employee(string n, long num);
        
        //gets and sets
        void setName(string s);
        string getName() const;
        void setNum(long num);
        long getNum() const;
        
        //behaviors
        Employee getData();
        void putData();
};
#endif