// CSC 134
// M5Lab1
// Tristen Hoffarth
// 4/5/26

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_upstairs(); // extra branch

int main() 
{
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;

  main_menu();

  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() 
{
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (choice == 1) 
  {
    choice_front_door();
  } 
  else if (choice == 2) 
  {
    choice_back_door();
  } 
  else if (choice == 3) 
  {
    choice_go_home();
  } 
  else if (choice == 4) 
  {
    cout << "Ok, quitting game" << endl;
    return;
  } 
  else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}

// FUNCTION DEFINITIONS

void choice_front_door() 
{
  cout << "\nYou try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Go upstairs through a window" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (choice == 1) 
  {
    choice_back_door();
  } 
  else if (choice == 2) 
  {
    choice_upstairs();
  }
}

void choice_back_door() 
{
  cout << "\nYou sneak around to the back door..." << endl;
  cout << "It's slightly open!" << endl;
  cout << "Do you:" << endl;
  cout << "1. Go inside" << endl;
  cout << "2. Run away" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (choice == 1) 
  {
    cout << "You find a room full of treasure! You win!" << endl;
  } 
  else if (choice == 2) 
  {
    choice_go_home();
  }
}

void choice_go_home() 
{
  cout << "\nYou decide it's not worth it and go home safely." << endl;
}

void choice_upstairs() 
{
  cout << "\nYou climb up and enter through a window..." << endl;
  cout << "A ghost appears! Game over!" << endl;
}