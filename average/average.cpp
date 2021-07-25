#include <iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;

int main()
{
    int numberOfStudents;
    int gradesList[MAX_CLASS_SIZE];
    int currGrade;
    int ind, sum;
    double average;

    cout << "Please enter the number of students in the class (no more than " << MAX_CLASS_SIZE << "): " << endl;
    cin >> numberOfStudents;

    // reading the grades
    cout << "Enter the students' grades (seperated by a space): " << endl;
    for(ind = 0; ind < numberOfStudents; ind++)
    {
        cin >> currGrade;
        gradesList[ind] = currGrade;
    }

    // calculating the average
    sum = 0;
    for(ind = 0; ind < numberOfStudents; ind++)
    {
        sum += gradesList[ind];
    }
    average = (double)sum / (double)numberOfStudents;
    cout << "The class average is " << average << endl;

    // print grades above the average
    cout << "The grades above the average are: ";
    for(ind = 0; ind < numberOfStudents; ind++)
    {
        if(gradesList[ind] > average)
        {
            cout << gradesList[ind] << " ";
        }
    }
    cout << endl;

    return 0;
}