#include <iostream>
#include "Menu.hpp"
#include "InputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int choice = 0;
    double radius, length, width = 0;
    
    displayMenu();
    cin >> choice;
    validateMenuChoice(choice);

    if (choice == 1)
    {
        cout << "Please enter circle radius: ";
        cin >> radius;
        validateDouble(radius);
        cout << "The area is " << (radius*3.14159) << endl;
    }
    else if (choice == 2)
    {
        cout << "Please enter rectangle length: ";
        cin >> length;
        validateDouble(length);
        cout << "Please enter rectangle width: ";
        cin >> width;
        validateDouble(width);
        cout << "The area is " << (length*width) <<  endl;
    }
    else if (choice == 3)
    {
        cout << "Please enter triangle base length: ";
        cin >> length;
        validateDouble(length);
        cout << "Please enter triangle height: ";
        cin >> width;
        validateDouble(width);
        cout << "The area is " << (length*width*0.5) <<  endl;
    }
    else
        cout << "Goodbye" << endl;
    return 0;
}