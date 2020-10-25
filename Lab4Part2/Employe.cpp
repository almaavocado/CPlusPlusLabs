#include "Employee.h"
#include <iostream>
#include <string>

/*
Empty Constructor
*/
Employee :: Employee()
{
    name = "";
    empNum = 0;
}

/*
Overloaded Constructor
@param n name
@param num employee number
*/
Employee :: Employee(string n, long num)
{
    name = n;
    empNum = num;
}

/*
Sets the name of the Employee
@param n name
*/
void Employee :: setName(string n)
{
    name = n;
}

/*
Retrieves the name of the Employee
@return name
*/
string Employee :: getName() const 
{
    return name;
}

/*
Sets the employee number
@param num employee number
*/
void Employee :: setNum(long num)
{
    empNum = num;
}

/*
Retrieves the employee number
@return empNum employee number
*/
long Employee :: getNum() const
{
    return empNum;    
}

/*
Gets information from the user and creates Employees
@return new Employee
*/
Employee Employee :: getData()
{
    cout << "Enter the employee's name: ";
    string n;
    cin >> n;
    cout << "Enter the employee's number: ";
    long id;
    cin >> id;
    cout << endl;
    return Employee(n, id);
}

/*
Prints out the employee in specified format
*/
void Employee :: putData()
{
    cout << "Employee Name: " << name << endl;
    cout << "Employee Number: " << empNum << endl;
    cout << endl;
}