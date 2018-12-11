#include "StudentScore.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int numberOfScores;
    double score = 0;

    cout << "How many scores would you like to enter? ";
    cin >> numberOfScores;
    validatePositiveInt(numberOfScores);  //user must input a nonnegative integer
    if (numberOfScores == 0)
        return 0;

    StudentScore* scoreArray = new StudentScore[numberOfScores];  //dynamically allocate array of StudentScore structs

    for (int i = 0; i < numberOfScores; i++)
    {
        cout << "Enter name: ";
        cin >> scoreArray[i].name;

        cout << "Enter score: ";
        cin >> score;
        validatePositiveDouble(score);  //score must be nonnegative
        scoreArray[i].score = score;  //I'm supposed to put this in pointer notation but *(scoreArray + i).score doesn't work.

        cout << endl;
    }

    sortScoreAscending(scoreArray, numberOfScores);

    cout << "Scores in ascending order: " << endl;
    for (int i = 0; i < numberOfScores; i++)
        cout << scoreArray[i].name << ": " << scoreArray[i].score << endl;

    cout << endl << "Average score: " << endl << calcAverage(scoreArray, numberOfScores) << endl;

    delete []scoreArray;
    return 0;
}