// _10.05.2025_week6PasswordChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string CorrectUsername = "Brodie";
    string CorrectPassword = "furrycheese";
    
    string AttemptedUsername;
    string AttemptedPassword;

    cout << "Enter Username: ";
    cin >> AttemptedUsername;

    if (AttemptedUsername == CorrectUsername) {
        cout << "Enter Password: ";
        cin >> AttemptedPassword;

        if (AttemptedPassword == CorrectPassword) {
            cout << "Correct Username and Password";
        }
        else if (AttemptedPassword != CorrectPassword) {
            cout << "Incorrect password"; 
        }
    }
    else if (AttemptedUsername != CorrectUsername) {
        cout << "Incorrect Username";
    }

      

}//end main
