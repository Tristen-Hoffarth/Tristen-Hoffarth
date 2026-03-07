// CSC 134
// M3Lab2
// Tristen Hoffarth
// 3/6/26

#include <iostream>
using namespace std;

int main() 
{
    // Declare variables
    int grade;
    char letterGrade;

    // Get user input
    cout << "Please input a numerical grade: ";
    cin >> grade;

    // Calculate letter grade
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade. Please enter a grade between 0 and 100." << endl;
        return 1; // Exit with error code
    } else if (grade >= 90) {
        letterGrade = 'A';
    } else if (grade >= 80) {
        letterGrade = 'B';
    } else if (grade >= 70) {
        letterGrade = 'C';
    } else if (grade >= 60) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    // Display letter grade
    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}