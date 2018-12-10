#include<iostream>
#include "Menu.hpp"
#include "InputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;

double validateDouble0to30(double &choice);

int main()
{
    int choice = 0;  //track menu choice
    double seconds = 0;
    
    displayMenu();
    cin >> choice;
    validateMenuChoice(choice);  //ensures menu choice is valid

    if (choice == 5)  //immediately quit if user chooses to do so
    {
        cout << "Goodbye" << endl;
        return 0;
    }

    cout << "Enter the number of seconds (0-30) to travel from source to detection: ";
    cin >> seconds;
    validateDouble0to30(seconds);  //ensures input is a double between 0-30
    cout << endl;

    if (choice == 1)
    {
        cout << "The source of the sound is " << seconds*258.0 << " meters away." << endl;
    }
    else if (choice == 2)
    {
        cout << "The source of the sound is " << seconds*331.5 << " meters away." << endl;      
    }    
    else if (choice == 3)
    {
        cout << "The source of the sound is " << seconds*972.0 << " meters away." << endl;   
    }    
    else if (choice == 4)
    {
        cout << "The source of the sound is " << seconds*1270.0 << " meters away." << endl;   
    }
    return 0;
}

double validateDouble0to30(double &choice)  //ensures input is a double between 0-30, reprompting as necessary
{
    while (!cin || choice < 0.0 || choice > 30.0)
    {
        cout << "Please enter a double between 0-30: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }
}