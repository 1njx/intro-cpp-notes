// _10.26.2025_InsultGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int random_number = rand() % 5 + 1;

    if (random_number == 1) {
        cout << "Yo mama sooo fat";
    }
    else if (random_number == 2) {
        cout << "Yo mama sooo stupid";
    }
    else if (random_number == 3) {
        cout << "Yo mama sooo ugly";
    }
    else if (random_number == 4) {
        cout << "Yo mama sooo old";
    }
    else if (random_number == 5) {
        cout << "Yo mama sooo poor";
    }
    else
        cout << ":(";


   
}//end main

