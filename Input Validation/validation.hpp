/*********************************************************************
** Author: Andrew Wilson
** Date: Jan 12, 2019
** Description: Functions for input validation.
*********************************************************************/

#ifndef VALIDATION_HPP
#define VALIDATION_HPP

//takes int by reference, reprompts if not an integer
void validateInt(int &input);  
//takes int by reference, and int fir min and max. Reprompts if input is not an integer or between min and max
void validateInt(int &input, int min, int max);  
//returns an int. Prompts user for integer, reprompting if not an int
int validateInt();  
//takes ints for min and max, returns an int. Prompts user for integer, reprompting if not an int/between min-max
int validateInt(int min, int max);
//takes double input by reference, reprompts if input is not a decimal/integer
void validateDouble(double &input);
//takes double input by reference and doubles for min, max. Reprompts if input is not a decimal or between min and max
void validateDouble(double &input, double min, double max); 
//returns a double. Prompts user for double, reprompting if not a decimal/integer
double validateDouble();
//takes doubles for min and max, returns a double. Reprompts if not a decimal/integer between min-max
double validateDouble(double min, double max);
//clears the screen
void clearScreen();  
//Pauses until user presses a key
void systemPause();  

#endif 