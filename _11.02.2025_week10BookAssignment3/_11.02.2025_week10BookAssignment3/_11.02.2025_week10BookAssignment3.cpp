// _11.02.2025_week10BookAssignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {
    // page 273
    int i = 0;          

    while (i <= 20) {
        cout << i << " ";
        i = i + 5;
    }

    cout << endl;

    // page 274
    int j = 20;
    while (j < 20) {
        cout << j << " ";
        j = j + 5;
    }
    cout << endl;

    // page 292
    int sum = 0;
    int num;

    cin >> num;
    while (cin) {
        sum = sum + num;
        cin >> num;
    }

    cout << "Sum = " << sum << endl;
    
    // page 313
    int k = 11;

    while (k <= 10) {
        cout << k << " ";
        k = k + 5;
    }
    cout << endl;

    int l = 11;

    do {
        cout << l << " ";
        l = l + 5;
    } while (l <= 10);

    cout << endl;
}
