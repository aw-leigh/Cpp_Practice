/******************************************************************************
 * ** Author:      Andrew Wilson
 * ** Date:        Dec. 5 2018
 * ** Description  Implementation file for custom input validation functions
 * ****************************************************************************/

#include "InputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;

int validateInt(int &choice)
{
    while (!cin)
    {
        cout << "Please enter an integer: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    } 
}
int validatePositiveInt(int &choice)
{
    while (!cin || choice < 0)
    {
        cout << "Please enter a nonnegative integer: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }  
}
double validateDouble(double &choice)
{
    while (!cin)
    {
        cout << "Please enter a double: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }
}
double validatePositiveDouble(double &choice)
{
    while (!cin || choice < 0)
    {
        cout << "Please enter a nonnegative double: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }   
}








int validateNumber(int &number)
{
    while (!cin)
    {
        cout << "Please enter a number: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> number;
    } 
}
double validateNumber(double &number)
{
    while (!cin)
    {
        cout << "Please enter a number: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> number;
    } 
}