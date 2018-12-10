/*
Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. 
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order.
Another function should be called that calculates the average score.
The program should display the sorted list of scores and averages with appropriate headings.
Use pointer notation rather than array notation whenever possible  
*/

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

double calcAverage(double* array, int arrayLength);
void sortAscending(double* array, int arrayLength);
int validatePositiveInt(int &choice);
double validatePositiveDouble(double &choice);

int main()
{
    int numberOfScores;
    double score = 0;

    cout << "How many scores would you like to enter? ";
    cin >> numberOfScores;
    validatePositiveInt(numberOfScores);  //user must input a nonnegative integer
    if (numberOfScores == 0)
        return 0;

    double* scoreArray = new double[numberOfScores];  //dynamically allocate array

    for (int i = 0; i < numberOfScores; i++)
    {
        cout << "Enter score: ";
        cin >> score;
        validatePositiveDouble(score);
        *(scoreArray + i) = score;  //the assignment says to use pointer notation so I'm doing it, but scoreArray[i] is easier to understand
    }

    sortAscending(scoreArray, numberOfScores);

    cout << "Scores in ascending order: " << endl;
    for (int i = 0; i < numberOfScores; i++)
        cout << *(scoreArray + i) << " ";

    cout << endl << "Average score: " << endl << calcAverage(scoreArray, numberOfScores);

    delete []scoreArray;
    return 0;
}


double calcAverage(double* array, int arrayLength)
{
    double temp = 0.0;

    for (int i = 0; i < arrayLength; i++)
        temp += *(array + i);

    return temp/arrayLength;
}

void sortAscending(double* array, int arrayLength)
{
    std::sort(array, array+arrayLength);  //is it cheating to use std::sort? also this doesn't even need to be a function
}

int validatePositiveInt(int &choice)
{
    while (!cin || choice < 0)
    {
        cout << "Please enter a nonnegative integer: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }  
}

double validatePositiveDouble(double &choice)
{
    while (!cin || choice < 0)
    {
        cout << "Please enter a nonnegative decimal or integer: ";
        cin.clear();
        cin.ignore(10000,'\n');
        cin >> choice;
    }   
}