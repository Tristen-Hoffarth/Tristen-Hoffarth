// CSC 134
// M4HW1 - Gold
// Tristen Hoffarth
// 3/24/26

#include <iostream>
using namespace std;

int main() 
{
    // Variables
    int number;

    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    // Input Validation Loop
    while (number < 1 || number > 12) 
    {
        cout << "Invalid input. Please enter a number from 1 to 12." << endl;
        cin >> number;
    }

    // Time Table Loop
    int i = 1;
    while (i <= 12) 
    {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }

    return 0;
}