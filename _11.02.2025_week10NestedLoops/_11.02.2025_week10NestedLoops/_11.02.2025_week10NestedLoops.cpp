// _11.02.2025_week10NestedLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 2; i++) {
		cout << "OUTER " << i << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tINNER " << j << endl;
		}//end for
	}//end for

	int count1 = 0;
	int count2 = 0;

	while (count1 < 2) {
		cout << "outer " << count1 << endl;
		count1++;
		while (count2 < 5) {
			cout << "\tinner " << count2 << endl;
			count2++;
		}
	}



}//end main