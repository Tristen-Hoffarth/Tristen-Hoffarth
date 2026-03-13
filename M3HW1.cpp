// CSC 134
// M3HW1 - Gold
// Tristen Hoffarth
// 3/13/26

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main() 
{
    // Question 1
    // Chatbot
    cout << "Question 1: Chatbot\n\n";

    // Variables
    string answer;

    // Chatbot message
    cout << "Hello, I'm a C++ program!\n";
    cout << "Do you like me? Please type yes or no.\n";
    cin >> answer;

    // Response for the chatbot
    if (answer == "yes") 
    {
    cout << "That's great! I'm sure we'll get along.\n";
    }
    else if (answer == "no") 
    {
        cout << "Well, maybe you'll learn to like me later.\n";
    }
    else 
    {
        cout << "If you're not sure... that's OK.\n";
    }

    cout << "\n";

    // Question 2
    // Receipt Calculator
    cout << "Question 2: Receipt Calculator\n\n";

    //Declare variables
    double meal_price;
    double tax_percent = 0.08;
    double tax_amount;
    double tip_amount = 0;
    double total;
    int order_type;

    //Greet the user
    cout << "Welcome to our CSC 134 restaurant!" << endl;

    //Ask for meal price
    cout << "Enter the price of the meal: $";
    cin >> meal_price;

    //Ask dine in or takeaway
    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> order_type;

    //Calculate tax
    tax_amount = meal_price * tax_percent;

    //Add tip if dine in
    if (order_type == 1) 
    {
        tip_amount = meal_price * 0.15;
    }

    //Calculate total
    total = meal_price + tax_amount + tip_amount;

    //Print receipt
    cout << setprecision(2) << fixed;
    cout << "\nThank you for shopping with us\n";
    cout << "_______________________________" << endl;
    cout << "Meal" << "\t\t$" << meal_price << endl;
    cout << "Tax" << "\t\t$" << tax_amount << endl;
    cout << "Tip" << "\t\t$" << tip_amount << endl;
    cout << "_______________________________" << endl;
    cout << "Total" << "\t\t$" << total << endl;
    cout << endl;


    // Question 3
    // Choose Your Own Adventure Game
    cout << "Question 3: Choose Your Own Adventure Game\n\n";


    // Variables
    int choice1, choice2;

    // Introduction
    cout << "Welcome to the C++ Adventure Game!\n";
    cout << "You are standing at a crossroads. Do you want to go left or right?\n";
    cout << "Enter 1 for left or 2 for right: ";
    cin >> choice1;

    // First choice
    if (choice1 == 1) 
    {
        cout << "A dragon appears and burns you.\n";
        cout << "Game Over.\n";
    }
    else if (choice1 == 2) 
    {
        //Second choice
        cout << "You find a treasure chest.\n";
        cout << "Do you 1) Open it or 2) Leave it?\n";
        cin >> choice2;

        if (choice2 == 1) 
        {
            cout << "The chest was trapped!\n";
            cout << "Defeat!\n";
        }
        else if (choice2 == 2) 
        {
            cout << "Smart choice! You escape safely.\n";
            cout << "Victory!\n";
        } 
        else 
        {
            cout << "Invalid choice. You lose.\n";
        }
    }

    cout << "\n";


    // Question 4
    // Math Practice
    cout << "Question 4: Math Practice\n\n";

    srand(time(0)); // Seed the random number generator

    // Variables
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int user_answer;

    cout << "What is " << num1 << " plus " << num2 << "?\n";
    cin >> user_answer;

    if (user_answer == num1 + num2) {
        cout << "Correct!\n";
    }
    else {
        cout << "Incorrect.\n";
    }


    return 0; //No errors
}