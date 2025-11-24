// _10.05.2025_week6BookAssignment2_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature >= 50)
        if (temperature >= 80)
            cout << "Good day for swimming." << endl;
        else
            cout << "Good day for golfing." << endl;
    else
        cout << "Good day to play tennis." << endl;
}
