// _10.12.2025_week7PsychicGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int secret = rand() % 10;
    int guess = -1;
    while (guess != secret) {
        cout << "What is the secret number?\n";
        cin >> guess;

        if (guess == secret) {
            cout << "Correct!";
        }
        else if (guess > secret) {
            cout << "Too high!\nIt's " << secret << "!\n";
        }
        else {
            cout << "Too low!\nIt's " << secret << "!\n";
        }//end if 
    }//end while



}//end main
