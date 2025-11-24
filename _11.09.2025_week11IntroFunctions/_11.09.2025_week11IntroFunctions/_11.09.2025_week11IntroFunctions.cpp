// _11.09.2025_week11IntroFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print() {
    cout << "fuzzy" << endl;
}//end print

void printTotal(int n1, int n2) {
    int total = n1 + n2;
    cout << n1 << " + " << n2 << " = " << total << endl;

}//end printTotal 

int getTotal(int n1, int n2) {
    return n1 + n2;
}//end getTotal

int main()
{
    print();
    printTotal(14, 14);
    printTotal(140, 2354);
    getTotal(100, 100);
   
}//end main