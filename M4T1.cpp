// CSC 134
// M4T1
// Tristen Hoffarth
// 3/13/26


#include <iostream>
using namespace std;
  
int main()
{
    // Program 5-3
    // Part 1, Say "Hello" 5 times
    int count = 1;
    while (count <= 5) 
    {
        cout << "Hello number "<< endl;
        count++;
    }
    cout << "That's all" << endl;


    cout << "\n";

    // Program 5-6
    // Part 2, Create a table of numbers from 1 to 10 and their squares

    // Variables
    const int min_number = 1;
    const int max_number = 10;
    int num = min_number;

    // Table header
    cout << "Number\tSquare\n";
    cout << "----------------\n";
    
    while (num <= max_number)
    {
        cout << num << "\t" << num * num << endl;
        num++;
    }

    return 0; // done
}