/******************************************************************************
 * ** Author:      Andrew Wilson
 * ** Date:        Dec. 5 2018
 * ** Description  Header file for custom input validation functions
 * ****************************************************************************/

#include <iostream>

int validateInt(int &choice);  //ensures that input is an integer
int validatePositiveInt(int &choice);  //ensures that input is a nonnegative integer (0 is ok)
double validateDouble(double &choice);  //ensures that input is a double
double validatePositiveDouble(double &choice);  //ensures that input is a nonnegative double (0 is ok)

int validateNumber(int &number);  //does overloading work? - yes it does
double validateNumber(double &number);
