/*********************************************************************
** Author: Andrew Wilson
** Date: Jan 12, 2019
** Description: Functions for input validation.
*********************************************************************/

#ifndef VALIDATION_HPP
#define VALIDATION_HPP

void validateInt(int &input);
void validateRangedInt(int &input, int min, int max);
void validateDouble(double &input);
void validateRangedDouble(double &input, double min, double max);
void validateMenuChoice(int &menuChoice, int menuLength);
int validateInt2(std::string &input);

#endif