//CSC - 134
// M1Lab
//Tristen Hoffarth
//2/10/26

#include <iostream>
using namespace std;

int main() {
    string name = "Jane Smith";
    int apples = 255;
    double pricePerApple = 0.25;

    cout << "Welcome to " << name;
    cout << "'s apple farm" << endl;

    cout << "We have " << apples << " apples for sale" << endl;
    cout << "Price is $" << pricePerApple << " each." << endl;

double totalPrice = (double) apples * pricePerApple;
cout << "Total price is: $" <<totalPrice<< endl;
}