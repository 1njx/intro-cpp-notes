// _11.02.2025_week10LoopsWithIfs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int choice = -1;
    while (choice != 3) {
        cout << "Please choose an option" << endl;
        cout << "1. Im number 1" << endl;
        cout << "2. Who does number 2 work for?" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "You chose 1" << endl;
        }
        else if (choice == 2) {
            cout << "You chose 2" << endl;
        }
        else if (choice == 3) {
            cout << "Goodbye" << endl;
        }
        else {
            cout << "Noob!" << endl;
        }//end if

    }

}//end main
