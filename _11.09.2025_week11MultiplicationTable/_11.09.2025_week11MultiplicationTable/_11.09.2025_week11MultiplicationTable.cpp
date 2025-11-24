// _11.09.2025_week11MultiplicationTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 20; j++) {
            cout << setw(5) << i * j;
        }//end for
        cout << endl;
    }//end for

}//end main
