//  CSC 134
//  M6T1
//  Tristen Hoffarth
//  4/25/26


#include <iostream>
#include <string>
using namespace std;

// Function declarations
void part1();
void part2();

// Main function calls both parts
int main() 
{
    part1();
    cout << endl;
    part2();
    return 0;
}

// Part 1 no arrays
void part1() 
{
    cout << "=== Part 1: Cars Per Day (no arrays) ===" << endl;
    cout << "Enter the number of cars that passed the site each day." << endl;

    const int SIZE = 5;   // Monday through Friday
    int count = 0;
    int carsToday = 0;
    int carsTotal = 0;
    double carsAvg = 0.0;

    while (count < SIZE) {
        cout << "Day " << count + 1 << " (";
        // Print day name without an array
        if (count == 0) cout << "Monday";
        else if (count == 1) cout << "Tuesday";
        else if (count == 2) cout << "Wednesday";
        else if (count == 3) cout << "Thursday";
        else cout << "Friday";
        cout << "): ";

        cin >> carsToday;
        carsTotal += carsToday;
        count++;
    }

    carsAvg = (double)carsTotal / SIZE;

    cout << "-----------------------------" << endl;
    cout << "Total cars this week: " << carsTotal << endl;
    cout << "Average cars per day: " << carsAvg    << endl;
}

// Part 2 with arrays and a chart
void part2() 
{
    cout << "=== Part 2: Cars Per Day (with array + chart) ===" << endl;
    cout << "Enter the number of cars that passed the site each day." << endl;

    const int SIZE = 5;
    string days[SIZE] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int cars[SIZE];// one slot per day
    int carsTotal = 0;
    double carsAvg = 0.0;

    // --- Input loop ---
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << ": ";
        cin >> cars[i];
    }

    // --- Totals ---
    for (int i = 0; i < SIZE; i++) {
        carsTotal += cars[i];
    }
    carsAvg = (double)carsTotal / SIZE;

    // --- Table ---
    cout << "\nDay\t\tCars" << endl;
    cout << "---\t\t----" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t";
        if (days[i].length() < 8) cout << "\t";   // align short names
        cout << cars[i] << endl;
    }
    cout << "-----------------------------" << endl;
    cout << "Total cars this week: " << carsTotal << endl;
    cout << "Average cars per day: " << carsAvg    << endl;

    // --- ASCII Bar Chart ---
    cout << "\n--- Weekly Traffic Bar Chart ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        // Print 3-letter day abbreviation
        cout << days[i] << " | ";

        // Print one # per car
        for (int b = 0; b < cars[i]; b++) {
            cout << "#";
        }

        // Print the numeric value after the bar
        cout << " " << cars[i] << endl;
    }
}