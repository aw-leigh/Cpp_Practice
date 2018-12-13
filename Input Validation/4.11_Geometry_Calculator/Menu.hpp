/******************************************************************************
 * ** Author:      Andrew Wilson
 * ** Date:        Dec. 5 2018
 * ** Description  Header file for menu display and choice validation function
 * ****************************************************************************/

#include <iostream>

const int MAXCHOICE = 4;  //maximum menu choice number
const int MINCHOICE = 1;  //minimum menu choice number
void displayMenu();  //displays menu text
void validateMenuChoice(int &choice);  //checks that the choice parameter is an integer between MAXCHOICE and MINCHOICE
                                       //if it is, does nothing; if not, continually reprompts until it is.                             
