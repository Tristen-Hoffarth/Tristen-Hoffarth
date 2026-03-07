// CSC 134
// M3T2
// Tristen Hoffarth
// 3/6/26
// Start with dice rolls

#include <iostream>
// for pseudo-random numbers
#include <cmath>
// for making it truly random
#include <ctime>
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;

    int seed = time(0);
    srand(seed);

    const int MAX = 6; // numbers from 1-6
    int roll1, roll2, total;
    int point;

    roll1  = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll1 << endl;

    roll2  = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

    // Let's play craps!
    // 7 and 11 - win!
    // 2, 3, and 12 - lose
    // anything else becomes the point

    if (total == 7) {
        cout << "Lucky seven! You win!" << endl;
    }
    else if (total == 11) {
        cout << "Eleven is a winner!" << endl;
    }
    else if (total == 2) {
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else if (total == 3) {
        cout << "Sorry, three is unlucky, you lose." << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else {
        // Point system starts here
        point = total;
        cout << "Your point is " << point << endl;

        //Rolls until you roll the point again or a 7
        while (true) {

            roll1  = (rand() % MAX) + 1;
            roll2  = (rand() % MAX) + 1;
            total = roll1 + roll2;

            cout << "You rolled: " << roll1 << " + " << roll2 << " = " << total << endl;

            if (total == point) {
                cout << "You rolled your point! You win!" << endl;
                break;
            }
            else if (total == 7) {
                cout << "You rolled a 7. You lose." << endl;
                break;
            }
        }
    }

    return 0;
}