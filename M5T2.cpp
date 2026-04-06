#include <iostream>
using namespace std;

// Declare functions
int square(int num);
void printAnswerLine(int number, int squared);

int main() 
{
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) 
    {
        int result = square(i);
        printAnswerLine(i, result);
    }

    return 0;
}

// Value-returning function
int square(int num) 
{
    return num * num;
}

// Void function
void printAnswerLine(int number, int squared) 
{
    cout << number << " squared is " << squared << endl;
}