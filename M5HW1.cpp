// CSC 134
// M5HW1 - Gold
// Tristen Hoffarth
// 4/14/26

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function prototypes
void question1();
void question2();
void question3();
void question4();
void question5();

// Main function
int main() 
{
    // Variable
    int choice;

    // Main Menu function
    cout << "Main Menu" << endl;
    cout << "--------------------" << endl;
    cout << "1. Rainfall Calculator" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "5. Question 5" << endl;
    cout << "Enter the number of the question you want to run: ";
    cin >> choice;

    // If statements to call the appropriate function based on user input
    if (choice == 1) {
        question1();
    } else if (choice == 2) {
        question2();
    } else if (choice == 3) {
        question3();
    } else if (choice == 4) {
        question4();
    } else if (choice == 5) {
        question5();
    } else {
        cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}

void question1() 
{
    // Declare Variables
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3, average;

    // Display the title
    cout << "Rainfall Calculator" << endl;
    cout << "-------------------" << endl;

    // Prompt the user for input
    cout << "Enter the month: ";
    cin >> month1;
    cout << "Enter the rainfall for " << month1 << ": ";
    cin >> rainfall1;

    cout << "Enter the month: ";
    cin >> month2;
    cout << "Enter the rainfall for " << month2 << ": ";
    cin >> rainfall2;

    cout << "Enter the month: ";
    cin >> month3;
    cout << "Enter the rainfall for " << month3 << ": ";
    cin >> rainfall3;

    // Calculate the average rainfall
    average = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    // Decimal formatting
    cout << fixed << setprecision(2);
    // Display the results
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is: " << average << endl;
}

// Question 2
void question2() 
{
    double length, width, height, volume;

    cout << "Volume Calculator" << endl;
    cout << "-----------------" << endl;

    cout << "Enter the length of the block: ";
    cin >> length;
    cout << "Enter the width of the block: ";
    cin >> width;
    cout << "Enter the height of the block: ";
    cin >> height;

    if ( length <= 0 || width <= 0 || height <= 0) {
        cout << "All sides must be greater than zero.\n" << endl;
        return;
    }

    // Calculate Volume
    volume = length * width * height;

    cout << fixed << setprecision(2);
    cout << "The volume of the block is: " << volume << endl;
}

// Question 3
void question3() 
{
    int number;

    cout << "Roman Numeral Converter" << endl;
    cout << "-----------------------" << endl;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 1 || number > 10) 
    {
        cout << "Invalid input. Please enter a number between 1 and 10." << endl;
        return;
    }

    cout << "Roman numeral: ";
    switch (number) {
        case 1:
            cout << "I" << endl;
            break;
        case 2:
            cout << "II" << endl;
            break;
        case 3:
            cout << "III" << endl;
            break;
        case 4:
            cout << "IV" << endl;
            break;
        case 5:
            cout << "V" << endl;
            break;
        case 6:
            cout << "VI" << endl;
            break;
        case 7:
            cout << "VII" << endl;
            break;
        case 8:
            cout << "VIII" << endl;
            break;
        case 9:
            cout << "IX" << endl;
            break;
        case 10:
            cout << "X" << endl;
            break;
    }
}

// Question 4
void question4() 
{
    int choice;
    double radius, length, width, base, height;

    cout << "Area Calculator" << endl;
    cout << "---------------" << endl;

    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please try again." << endl;
        return;
    }

    

}