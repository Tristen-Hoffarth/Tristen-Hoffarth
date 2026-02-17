/*
CSC-134
M2T2 - Receipt Calculator
Tristen
2/17/26
*/

#include <iostream>
#include <iomanip> //For decimals
using namespace std;

int main() 
{
    //Create a simple receipt
    //Should include sales tax

    //Declare variables
    string item = "🍝 Spaghetti";
    double item_price = 5.99;
    double tax_percent = 0.08; //8% is 8/100
    double tax_amount;         //tax in $
    double total;              //price * tax

    //Greet the user
    cout << "Welcome to our CSC 134 restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    //Calculate the meal price
    //Calculate the sales tax and total
    tax_amount = item_price * tax_percent; //take 8% of the item
    total = item_price + tax_amount;



    //Print the receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us"  << endl;
    cout << "_______________________________" << endl;
    cout << item << "\t$" << item_price       << endl;
    cout << "Tax" << "\t\t$" << tax_amount    << endl;
    cout << "_______________________________" << endl;
    cout << "Total" << "\t\t$" << total       << endl;
    cout << endl;

    return 0; //No errors

}