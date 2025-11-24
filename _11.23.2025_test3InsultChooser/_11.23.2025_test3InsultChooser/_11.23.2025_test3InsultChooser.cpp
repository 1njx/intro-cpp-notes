// _11.23.2025_test3InsultChooser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void options()
{
    cout << "Choose your insult:" << endl;
    cout << "1. You stupid" << endl;
    cout << "2. Yo mama so stupid" << endl;
    cout << "3. Yo mama soooo fat" << endl;
    cout << "4. Give up. You win computer... :( You are too much." << endl;
}

int comp_insult = -1;
void comp_insults()
{
    comp_insult = rand() % 3;
    if (comp_insult == 0) {
        cout << "Computer: yo dumb as heck bro" << endl << endl;
    }
    else if (comp_insult == 1) {
        cout << "Computer: yo mama so old" << endl << endl;
    }
    else if (comp_insult == 2) {
        cout << "Computer: I GIVE UP." << endl << endl;
    }
}

int main()
{
    int insult = -1;

    options();
    cin >> insult;
    cout << endl;

    while (insult != 4) {
        srand(time(NULL));
        comp_insult = rand() % 2;

        if (insult == 1) {
            cout << "You: You stupid" << endl;
            comp_insults();
            if (comp_insult == 2) {
                break;
            }
            options();
            cin >> insult;
            cout << endl;
        }
        else if (insult == 2) {
            cout << "You: Yo mama so stupid" << endl;
            comp_insults();
            if (comp_insult == 2) {
                break;
            }
            options();
            cin >> insult;
            cout << endl;
        }
        else if (insult == 3) {
            cout << "You: Yo mama soooo fat" << endl;
            comp_insults();
            if (comp_insult == 2) {
                break;
            }
            options();
            cin >> insult;
            cout << endl;
            
        }
    }


    if (insult == 4) {
        cout << "You: You win computer... :( You are too much.";
    }

}//end main



