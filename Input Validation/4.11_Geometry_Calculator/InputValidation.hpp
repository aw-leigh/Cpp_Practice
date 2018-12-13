/******************************************************************************
 * ** Author:      Andrew Wilson
 * ** Date:        Dec. 5 2018
 * ** Description  Header file for custom input validation functions
 * ****************************************************************************/

#include <iostream>

void validateInt(int &choice);  //ensures that input is an integer
void validateInt(int &choice, int min, int max);  //ensures that input is an integer and between min and max
void validateDouble(double &choice);  //ensures that input is a double                                  
void validateDouble(double &choice, double min, double max);  //ensures that input is a double and between min and max        