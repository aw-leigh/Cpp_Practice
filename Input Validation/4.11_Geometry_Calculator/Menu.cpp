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
    cout << "Geometry Calculator" << endl;
    cout << " 1. Calculate the Area of a Circle" << endl;
    cout << " 2. Calculate the Area of a Rectangle" << endl;
    cout << " 3. Calculate the Area of a Triangle" << endl;
    cout << " 4. Quit the program" << endl;
    cout << " Enter your choice: ";
}
void validateMenuChoice(int &choice)
{
    while (!cin || (choice < MINCHOICE) || (choice > MAXCHOICE))
    {
        cout << "Please enter an integer between " << MINCHOICE << " and " << MAXCHOICE << "." << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }
}
