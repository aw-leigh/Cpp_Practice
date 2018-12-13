/******************************************************************************
 * ** Author:      Andrew Wilson
 * ** Date:        Dec. 5 2018
 * ** Description  Implementation file for custom input validation functions
 * ****************************************************************************/

#include "InputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;

void validateInt(int &choice)
{
    while (!cin)
    {
        cout << "Please enter an integer: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    } 
}
void validateInt(int &choice, int min, int max)
{
    while (!cin || choice < min || choice > max)
    {
        cout << "Please enter an integer between " << min << " and " << max << ": ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    } 
}
void validateDouble(double &choice)
{
    while (!cin)
    {
        cout << "Please enter a double: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    } 
}
void validateDouble(double &choice, double min, double max)
{
    while (!cin || choice < min || choice > max)
    {
        cout << "Please enter a decimal between " << min << " and " << max << ": ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    } 
}