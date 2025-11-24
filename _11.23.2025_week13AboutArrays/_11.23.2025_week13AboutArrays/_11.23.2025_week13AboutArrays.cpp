// _11.23.2025_week13AboutArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    arr[0] = 34;
    arr[1] = 20;
    arr[2] = 23;

    cout << arr[1] << endl;

    int array2[4] = {1,3,5,7};

    for (int i = 0; i < sizeof(array2)/ sizeof(array2[0]); i++) { // LENGTH ------> sizeof(array2)/ sizeof(array2[0])
        cout << array2[i] << endl;
    }
}//end main