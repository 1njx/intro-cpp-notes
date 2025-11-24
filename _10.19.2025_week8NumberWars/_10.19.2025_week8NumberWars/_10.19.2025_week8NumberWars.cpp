// _10.19.2025_week8NumberWars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Number Wars.\nRules: You choose a number, and the computer chooses a number and we see who wins!\n";
    cout << "0 loses to 1\n";
    cout << "1 loses to 2\n";
    cout << "2 loses to 0\n";
    
    srand(time(NULL)); // resets the random numbers

    int computer_number = rand() % 3;
    int player_number;
    int player2_number;
    int game_mode;

    cout << "Type 1 to play with the computer.\nType 2 to play with another player.\n";
    cin >> game_mode;

    if (game_mode == 1) {

        cout << "Please choose your Number: 0, 1, 2\n";
        cin >> player_number;

        cout << "You chose " << player_number << "\n";
        cout << "Computer chooses " << computer_number << "\n";



        if (player_number == 0) {
            if (computer_number == 0) {
                cout << "Tie";
            }
            else if (computer_number == 1) {
                cout << "Computer wins!";
            }
            else if (computer_number == 2) {
                cout << "You win!";
            }
        }//end if 0
        else if (player_number == 1) {
            if (computer_number == 0) {
                cout << "You win!";
            }
            else if (computer_number == 1) {
                cout << "Tie!";
            }
            else if (computer_number == 2) {
                cout << "Computer wins!";
            }
        }//end if 1
        else if (player_number == 2) {
            if (computer_number == 0) {
                cout << "Computer wins!!";
            }
            else if (computer_number == 1) {
                cout << "You win!";
            }
            else if (computer_number == 2) {
                cout << "Tie!";
            }
        }//end if 2

    }//end game mode 1


    if (game_mode == 2) {

        cout << "Player 1, choose your Number: 0, 1, 2\n";
        cin >> player_number;

        cout << "Player 2, choose your Number: 0, 1, 2\n";
        cin >> player2_number;

        cout << "Player 1 chose " << player_number << "\n";
        cout << "Player 2 chose " << player2_number << "\n";


        if (player_number == 0) {
            if (player2_number == 0) {
                cout << "Tie";
            }
            else if (player2_number == 1) {
                cout << "Player 2 wins!";
            }
            else if (player2_number == 2) {
                cout << "Player 1 wins!";
            }
        }//end if 0
        else if (player_number == 1) {
            if (player2_number == 0) {
                cout << "Player 1 wins!";
            }
            else if (player2_number == 1) {
                cout << "Tie!";
            }
            else if (player2_number == 2) {
                cout << "Player 2 wins!";
            }
        }//end if 1
        else if (player_number == 2) {
            if (player2_number == 0) {
                cout << "Player 2 wins!";
            }
            else if (player2_number == 1) {
                cout << "Player 2 wins!";
            }
            else if (player2_number == 2) {
                cout << "Tie!";
            }
        }//end if 2

    }//end game mode 2



}//end main

