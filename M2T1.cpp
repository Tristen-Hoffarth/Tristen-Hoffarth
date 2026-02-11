// M2T1 - Product Sales
// Tristen
// 2/11/26

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //Set up variables
    string first_name, last_name, full_name; //Hold customer name
    string product = "apples";
    int amount_purchased;
    double cost_each = 0.99;
    double totale_cost;


    //greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;



    //Ask how many they would like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    //Calculate the total price
    totale_cost = amount_purchased * cost_each;


    // Formatting: set all prices to 2 decimal places
    cout << setprecision(2) << fixed;
   

    //Give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be $" << totale_cost << endl;
    cout << "Thank you for shopping with us!" << endl;




    return 0; // no errors
}