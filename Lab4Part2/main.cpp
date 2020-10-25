/*
This program asks the user to enter information for three Employees
and displays them.
@author Sydney Kao and Alma Alvarado
@date September 23, 2020
@version Fall 2020
*/

#include <iostream>
#include "Employee.h"
using namespace std;

//driver function
int main()
{
    Employee list[3];
    cout << "Enter data for 3 Employees" << endl;
    for (int i = 0; i < 3; i++)
    {
        list[i] = list[i].getData();
    }
    for (int i = 0; i < 3; i++)
    {
        list[i].putData();
    }
}