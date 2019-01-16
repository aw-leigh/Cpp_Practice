#include <iostream>
#include <string>
#include "validation.hpp"

void validateInt(int &input)
{
	while (!std::cin || std::cin.peek() == '.' || std::cin.peek() == ' ')
	{
		std::cin.clear();  //Clear bad input flag
		std::cin.ignore(1000, '\n');  //Discard input
		std::cout << "Input must be an integer" << std::endl;
		std::cin >> input;
	}
}
void validateRangedInt(int &input, int min, int max)
{
   	while (!std::cin || std::cin.peek() == '.' || std::cin.peek() == ' ' || input < min || input > max)
	{
		std::cin.clear();  //Clear bad input flag
		std::cin.ignore(1000, '\n');  //Discard input
		std::cout << "Input must be an integer between " << min << " and " << max << std::endl;
		std::cin >> input;
	} 
}
void validateDouble(double &input)
{
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cout << "Input must be a decimal" << std::endl;
        std::cin >> input;
    }
}
void validateRangedDouble(double &input, double min, double max)
{
    while (!std::cin || input < min || input > max)
    {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cout << "Input must be a decimal between " << min << " and " << max << std::endl;
        std::cin >> input;
    }
}
void validateMenuChoice(int &menuChoice, int menuLength)  //assumes menu choices start at 1
{
	while (!std::cin || std::cin.peek() == '.' || menuChoice < 1 || menuChoice > menuLength)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Please enter a number between 1 and " << menuLength << std::endl;
		std::cin >> menuChoice;
	}
}