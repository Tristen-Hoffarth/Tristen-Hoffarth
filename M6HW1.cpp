// CSC 134
// M6HW1 - Gold
// Tristen Hoffarth
// 5/2/26
 
#include <iostream>
using namespace std;
 
// --- Function Prototypes ---
void main_menu();
void front_porch();
void foyer();
void library();
void basement();
void attic();
void escape_ending();
void go_home_ending();
 
// --- Global inventory flags ---
bool hasKey      = false;  // rusty key (found in library)
bool hasNote     = false;  // torn note  (found in foyer)
bool basementOpen = false; // unlocked once player has the key
 
// ============================================================
int main()
{
    cout << "==========================================" << endl;
    cout << "   M6HW1 - The Haunted Hoffarth Manor    " << endl;
    cout << "==========================================" << endl;
    cout << endl;
    main_menu();
    cout << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}
 
// ============================================================
// MAIN MENU  (front yard)
// ============================================================
void main_menu()
{
    cout << "\n[ FRONT YARD ]" << endl;
    cout << "You stand outside a crumbling old manor." << endl;
    cout << "A rusted iron sign reads: \"Abandon hope... or find the treasure.\"" << endl;
    cout << endl;
    cout << "What do you do?" << endl;
    cout << "  1. Approach the front porch" << endl;
    cout << "  2. Peek through the side window" << endl;
    cout << "  3. Turn around and go home" << endl;
    cout << "  4. [Quit]" << endl;
    cout << "Choose: ";
 
    int choice;
    cin >> choice;
 
    if      (choice == 1) { front_porch(); }
    else if (choice == 2)
    {
        cout << "\nYou press your nose to the glass. Inside you glimpse" << endl;
        cout << "dusty shelves and... something glinting on a table." << endl;
        cout << "Might be worth going in." << endl;
        front_porch();
    }
    else if (choice == 3) { go_home_ending(); }
    else if (choice == 4) { cout << "Quitting. Goodbye!" << endl; }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        main_menu();
    }
}
 
// ============================================================
// ROOM 1 – FRONT PORCH
// ============================================================
void front_porch()
{
    cout << "\n[ FRONT PORCH ]" << endl;
    cout << "A weathered note is nailed to the door:" << endl;
    cout << "  \"The only way out is through the basement." << endl;
    cout << "   Find the key before you look for the lock.\"" << endl;
 
    if (!hasNote)
    {
        cout << "\nYou tear the note from the door and pocket it." << endl;
        hasNote = true;
    }
 
    cout << "\nThe front door swings open with a groan." << endl;
    cout << "Do you:" << endl;
    cout << "  1. Step inside the foyer" << endl;
    cout << "  2. Back away and go home" << endl;
    cout << "Choose: ";
 
    int choice;
    cin >> choice;
 
    if      (choice == 1) { foyer(); }
    else if (choice == 2) { go_home_ending(); }
    else
    {
        cout << "Invalid choice." << endl;
        front_porch();
    }
}
 
// ============================================================
// ROOM 2 – FOYER  (hub room — connects library & basement)
// ============================================================
void foyer()
{
    cout << "\n[ FOYER ]" << endl;
    cout << "You're inside the manor. Cobwebs everywhere." << endl;
    cout << "To the LEFT is a door marked \"Library\"." << endl;
    cout << "Straight ahead, a heavy door leads DOWN to the basement." << endl;
 
    if (basementOpen)
        cout << "(The basement door is unlocked!)" << endl;
    else
        cout << "(The basement door is padlocked shut.)" << endl;
 
    cout << "\nWhere do you go?" << endl;
    cout << "  1. Enter the Library" << endl;
    cout << "  2. Try the basement door" << endl;
    cout << "  3. Head back outside" << endl;
    cout << "Choose: ";
 
    int choice;
    cin >> choice;
 
    if (choice == 1) { library(); }
    else if (choice == 2)
    {
        if (hasKey)
        {
            cout << "\nYou slide the rusty key into the padlock — CLICK. It opens!" << endl;
            basementOpen = true;
            basement();
        }
        else
        {
            cout << "\nThe door is padlocked. You need a key." << endl;
            foyer();
        }
    }
    else if (choice == 3)
    {
        cout << "\nYou step back onto the porch." << endl;
        front_porch();
    }
    else
    {
        cout << "Invalid choice." << endl;
        foyer();
    }
}
 
// ============================================================
// ROOM 3 – LIBRARY  (key is here + optional attic branch)
// ============================================================
void library()
{
    cout << "\n[ LIBRARY ]" << endl;
    cout << "Floor-to-ceiling shelves of rotting books." << endl;
    cout << "A ghost in a top hat floats near the fireplace." << endl;
    cout << "Ghost: \"Ah, a visitor! Looking for treasure, are we?\"" << endl;
    cout << "Ghost: \"Find my family's crest in the basement and I shall" << endl;
    cout << "        finally rest. The key is on the reading table.\"" << endl;
 
    if (!hasKey)
    {
        cout << "\nYou spot a RUSTY KEY on the reading table. You pick it up!" << endl;
        hasKey = true;
        cout << "(Inventory: Rusty Key)" << endl;
    }
    else
    {
        cout << "(You already have the rusty key.)" << endl;
    }
 
    cout << "\nWhat now?" << endl;
    cout << "  1. Climb to the Attic (a side room)" << endl;
    cout << "  2. Return to the Foyer" << endl;
    cout << "Choose: ";
 
    int choice;
    cin >> choice;
 
    if      (choice == 1) { attic(); }
    else if (choice == 2) { foyer(); }
    else
    {
        cout << "Invalid choice." << endl;
        library();
    }
}
 
// ============================================================
// SIDE ROOM – ATTIC  (flavour / dead end)
// ============================================================
void attic()
{
    cout << "\n[ ATTIC ]" << endl;
    cout << "Old trunks, broken furniture, and a rocking chair" << endl;
    cout << "that moves on its own. You nope right out of here." << endl;
    library();   // return player to library automatically
}
 
// ============================================================
// ROOM 4 – BASEMENT  (lock-and-key payoff + endings)
// ============================================================
void basement()
{
    cout << "\n[ BASEMENT ]" << endl;
    cout << "Stone walls. A single torch flickers on the wall." << endl;
    cout << "In the centre of the room sits an ornate chest." << endl;
    cout << "Carved into the lid is a family crest." << endl;
    cout << "\nA TRAP DOOR is in the floor — a way out!" << endl;
 
    cout << "\nWhat do you do?" << endl;
    cout << "  1. Open the chest" << endl;
    cout << "  2. Ignore the chest and escape through the trap door" << endl;
    cout << "  3. Go back upstairs" << endl;
    cout << "Choose: ";
 
    int choice;
    cin >> choice;
 
    if (choice == 1)
    {
        cout << "\nYou lift the lid. Inside: GOLD COINS and a glowing" << endl;
        cout << "family crest medallion. You grab both!" << endl;
        cout << "\nThe ghost's voice echoes from above:" << endl;
        cout << "\"Thank you... I am at peace. TAKE THE TREASURE AND GO!\"" << endl;
        escape_ending();
    }
    else if (choice == 2)
    {
        cout << "\nYou yank the trap door open and drop into the tunnel below." << endl;
        escape_ending();
    }
    else if (choice == 3) { foyer(); }
    else
    {
        cout << "Invalid choice." << endl;
        basement();
    }
}
 
// ============================================================
// ENDINGS
// ============================================================
void escape_ending()
{
    cout << "\n==========================================" << endl;
    cout << "          *** YOU ESCAPED! ***            " << endl;
    cout << "==========================================" << endl;
    cout << "You burst out of the tunnel into the moonlit garden." << endl;
    cout << "Pockets full of gold, crest in hand — you've done it." << endl;
    cout << "The manor crumbles behind you with a satisfied groan." << endl;
    cout << "\n  -- GOOD ENDING --" << endl;
}

void go_home_ending()
{
    cout << "\n==========================================" << endl;
    cout << "You decide the manor isn't worth it." << endl;
    cout << "You walk home, safe but curious forever." << endl;
    cout << "\n  -- SAFE ENDING --" << endl;
    cout << "\n===========================================" << endl;
}
