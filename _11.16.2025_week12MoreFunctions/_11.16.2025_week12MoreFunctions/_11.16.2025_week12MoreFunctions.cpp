// _11.16.2025_week12MoreFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int max(int n1, int n2) {
	if (n1 >= n2) {
		return n1;
	}
	else {
		return n2;
	}//end if
}//end max

int maxa(int n1, int n2, int n3) {
	if (n1 >= n2 && n1 >= n3) {
		return n1;
	}
	else if (n2 >= n1 && n2 >= n3) {
		return n2;
	}
	else if (n3 >= n1 && n3 >= n2) {
		return n3;
	}//end if
}//end maxa

int maxb(int n1, int n2, int n3) {
	return max(n1, max(n2, n3));
}//end maxb

int main() {

	cout << max(100, 53225325) << endl;
	cout << maxa(5, 3, 2) << endl;
	cout << maxb(235235, 49, 235) << endl;

}
