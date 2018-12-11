#include <iostream>
#include <string>
#include <algorithm>

struct StudentScore
{   
    std::string name;
    double score;
};

double calcAverage(StudentScore* array, int arrayLength);  //returns the average score
void sortScoreAscending(StudentScore* array, int arrayLength);  //sorts the array by score, low to high
void sortNameAscending(StudentScore* array, int arrayLength);  //sorts the array by name, a to z
bool sortByScore(const StudentScore &lhs, const StudentScore &rhs);  //custom comparison for sort function; compares scores
bool sortByName(const StudentScore &lhs, const StudentScore &rhs);  //custom comparison for sort function; alphabetizes by name
int validatePositiveInt(int &choice); //ensures passed value is a nonnegative int, reprompting as necessary
double validatePositiveDouble(double &choice);  //ensures passed value is a nonnegative double, reprompting as necessary

// tutorial for sort function is here: http://www.cplusplus.com/articles/NhA0RXSz/