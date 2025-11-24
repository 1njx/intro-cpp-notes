// _10.04.2025_week6IntroToNestedIfs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int number1 = 10;
    // nested
    if (number1 == 10) {
        number1 = number1 + 1;
            if (number1 == 11) {
                cout << "it 11 now\n";
            }
    }
    
    int number2 = 20;
    // compound
    // && - AND 
    // || - OR
    if (number1 == 11 && number2 == 20 && true || false) {
        cout << "11 and 20\n";
    }
    else if(number1 != 11 && number2 == 20) {
        cout << "not 11 but still 20\n";
    }
    else if (number1 == 11 && number2 != 20) {
        cout << "still 11 but not 20\n";
    }
    else if (number1 != 11 && number2 != 20) {
        cout << "neither 11 or 20\n";
    }
    


}//end main
