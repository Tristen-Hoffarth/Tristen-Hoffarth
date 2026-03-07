// CSC 134
// M3Lab1
// Tristen Hoffarth
// 3/6/26

#include <iostream>
using namespace std;

// Tell the code the functions exist
void choice1();
void choice2();

int main () 
{
    // Declare variables
    int choice;

    //Prompt user for input
    cout << "A monster  appears in front of you! What do you do?" << endl;
    cout << "1. Run away" << endl;
    cout << "2. Fight the monster" << endl;
    cin >> choice;

    //Print the result
    if (choice == 1) 
    {
        choice1();
    } else if (choice == 2) 
    {
        choice2();
    } 
    else 
    {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
    }

    return 0;
}

// Function for choice 1
void choice1 () 
{
    cout << "You run away from the monster and escape safely!" << endl;
}

// Function for choice 2
void choice2 ()
{
    cout << "You fight the monster and lose!" << endl;
    cout << "Game Over!" << endl;
}