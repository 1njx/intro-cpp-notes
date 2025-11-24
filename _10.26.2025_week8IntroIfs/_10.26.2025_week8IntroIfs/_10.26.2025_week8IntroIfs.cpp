// _10.26.2025_week8IntroIfs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // for loop -- has too be a count
    //   start    ;end   ;counter
    for (int i = 0; i < 5; i++) { //i++ is the same as i = i + 1
        cout << "i is now " << i << endl;
    }//end for

    // while loop
    int o = 0;
    while (o < 5) {
        cout << "o is now " << o << endl;
        o++;
    }

    // for loop with input
    int loop_amt;
    cout << "How many times would you like to loop?\n";
    cin >> loop_amt;

    for (int i = 0; i < loop_amt; i++) { //i++ is the same as i = i + 1
        cout << "!!!" << endl;
    }//end for with input

    // while loop wih input
    bool looping = true;
    int number = 1;
    int my_number;

    cout << "Lets count! ";
    while (looping) {
        cout << number << endl;
        cin >> my_number;

        if (my_number != number + 1) {
            cout << "You stupid";
            looping = false;
        }

        number = my_number + 1;     
    }// end while looping


}//end main
