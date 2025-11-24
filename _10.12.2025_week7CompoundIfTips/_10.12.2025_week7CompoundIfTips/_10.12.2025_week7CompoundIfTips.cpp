// _10.12.2025_week7CompoundIfTips.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    bool check1 = true;
    bool check2 = false;
    
//                     or
    if (check1 == true || check2 == true) {
        cout << "at least one of these are true";
    }
//                     and
    if (check1 == true && check2 == true) {
        cout << "all of these are true";
    }
}
