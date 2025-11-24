// _11.02.2025_week10MahLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int loop_amt = -1;

    cout << "How many times would you like to loop?\n";
    cin >> loop_amt;

    for (int i = 0; i < loop_amt; i++) {
        cout << "This is loop " << i + 1 << endl;
    }

    int end_number = -1;

    while (end_number != 0) {
        cout << "Please type a number!!!!!\n";
        cin >> end_number;
    }
    

}//end main
