/*
CSC 134
M2HW1 - Gold
Tristen Hoffarth
3/3/26
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



int main() 
{
	//Question 1
    //A program that that simulates a banking transaction

    cout << "Question 1: Banking Transaction Simulation\n\n";

    //Variables
    double start_balance, deposit, withdrawal,  final_balance;
    string account_name;
    int account_number = 37456;

    //Number formatting
	cout << fixed << setprecision(2) << showpoint;
	
    //Prompt the user for the account name, starting balance, deposit amount, and withdrawal amount
    cout << "Enter the account holder's name: ";
    getline(cin, account_name);
    cout << "Enter the starting balance: $";
    cin >> start_balance;
    cout << "Enter the deposit amount: $";
    cin >> deposit;
    cout << "Enter the withdrawal amount: $";
    cin >> withdrawal;

    //Calculate the final balance
    final_balance = start_balance + deposit - withdrawal;

    //Display the account information and final balance
    cout << "\nAccount Name: " << account_name << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "Final Balance: $" << final_balance << endl;


    //Question 2
    //A program that calculates the cost, charge, and profit for a crate based on its dimensions

    cout << "\nQuestion 2: Crate Cost, Charge, and Profit Calculation\n\n";

    //Constants for cost and the amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length, width, height, volume, cost, charge, profit;

    //Formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the dimensions of the box
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    
    // Display the calculated data
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;


    //Question 3
    //A program that calculates the number of pizzas needed for a party based on the number of people attending and the number of slices per pizza

    cout << "\nQuestion 3: Pizza Party Calculator\n\n";

    //Variables
    int pizzas, slices_per_pizza, total_slices, people, slices_leftover;
    int slices_per_person = 3;

    //Prompt the user how many pizzas they ordered, how many slices per pizza, and how manmy visitors are coming.
    cout << "How many pizzas did you order? ";
    cin >> pizzas;
    cout << "How many slices are in each pizza? ";
    cin >> slices_per_pizza;
    cout << "How many people are attending the party?";
    cin >> people;

    //Calculate the total number of slices and the number of slices left over
    total_slices = pizzas * slices_per_pizza;
    slices_leftover = total_slices - (people * slices_per_person);

    //Display the results
    cout << "\nTotal slices: " << total_slices << endl;
    cout << "Slices left over: " << slices_leftover << endl;

    //Question 4
    //This is a program that cheers for FTCC

    cout << "\nQuestion 4: Cheer for FTCC\n\n";

    //Variables
    string cheerOne, cheerTwo;

    string school = "FTCC";
    string team = "Trojans";
    string letsGo = "Let's go";

    //Construct the cheer
    cheerOne = letsGo + " " + school;
    cheerTwo = letsGo + " " + team;

    //Display the cheer
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

	return 0;
}