#include "StudentScore.hpp"

double calcAverage(StudentScore* array, int arrayLength)
{
    double temp = 0.0;

    for (int i = 0; i < arrayLength; i++)
        temp += array[i].score;

    return temp/arrayLength;
}

void sortScoreAscending(StudentScore* array, int arrayLength)
{
    std::sort(array, array+arrayLength, sortByScore);  //is it cheating to use std::sort? also this doesn't even need to be a function
}

void sortNameAscending(StudentScore* array, int arrayLength)
{
    std::sort(array, array+arrayLength, sortByName);  //is it cheating to use std::sort? also this doesn't even need to be a function
}

bool sortByScore(const StudentScore &lhs, const StudentScore &rhs)
{ 
    return lhs.score < rhs.score;
}

bool sortByName(const StudentScore &lhs, const StudentScore &rhs)
{ 
    return lhs.name < rhs.name;
}

int validatePositiveInt(int &choice)
{
    while (!std::cin || choice < 0)
    {
        std::cout << "Please enter a nonnegative integer: ";
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cin >> choice;
    }  
}

double validatePositiveDouble(double &choice)
{
    while (!std::cin || choice < 0)
    {
        std::cout << "Please enter a nonnegative decimal or integer: ";
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cin >> choice;
    }   
}