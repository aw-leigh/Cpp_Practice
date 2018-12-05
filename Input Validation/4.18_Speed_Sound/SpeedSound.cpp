#include<iostream>
#include "Menu.hpp"
#include "InputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int choice = 0;
    double feet = 0;
    
    displayMenu();
    cin >> choice;
    validateMenuChoice(choice);
    if (choice == 4)  //immediately quit if user chooses to do so
        {
        cout << "Goodbye" << endl;
        return 0;
        }

    cout << "Enter the number of feet to travel: ";
    cin >> feet;
    validatePositiveDouble(feet);
    cout << endl;

    if (choice == 1)
    {
        cout << feet/1100 << " seconds" << endl;
    }
    else if (choice == 2)
    {
        cout << feet/4900 << " seconds" << endl;      
    }    
    else if (choice == 3)
    {
        cout << feet/16400 << " seconds" << endl;     
    }

    return 0;
}