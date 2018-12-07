/******************************************************************************
 * ** Author:      Andrew Wilson
 * ** Date:        Dec. 5 2018
 * ** Description  Implementation file for menu display and choice validation function
                   displayMenu simply displays menu text on screen.
                   validateMenuChoice ensures that the input is 1. an integer and 2. within the min and max range
 * ****************************************************************************/

#include "Menu.hpp"

using std::cin;
using std::cout;
using std::endl;

void displayMenu()
{
    cout << "Select the medium to calculate" << endl << endl;
    cout << " 1. Carbon Dioxide" << endl;
    cout << " 2. Air" << endl;
    cout << " 3. Helium" << endl;
    cout << " 4. Hydrogen" << endl;   
    cout << " 5. Quit the program" << endl << endl;
    cout << "Enter your choice: ";
}
int validateMenuChoice(int &choice)
{
    while (!cin || (choice < MINCHOICE) || (choice > MAXCHOICE))
    {
        cout << "Please enter an integer between " << MINCHOICE << " and " << MAXCHOICE << "." << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }
    return choice;
}
