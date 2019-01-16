#include<iostream>
#include "validation.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int choice, choice2 = 0;

    cout << "Enter 2 numbers" << endl;
    cout << "First: ";
    cin >> choice;
    validateInt(choice);

    cout << "Second: ";
    cin >> choice2;
    validateInt(choice2);

    cout << "The sum is: " << choice + choice2 << endl;

    return 0;
}