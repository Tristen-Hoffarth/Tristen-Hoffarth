#include <iostream>
#include <string>
using namespace std;

// Declare functions
string formatAnswer (int answer);
void printAnswer (string msg);

int main() 
{
    int answer = 5;
    string message;
    message = formatAnswer (answer);
    printAnswer(message);
    return 0;
}

string formatAnswer (int answer) 
{
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);

    return answerMessage;
}

void printAnswer (string msg) 
{
    // display the message
    cout << msg << endl;
}