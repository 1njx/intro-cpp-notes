
#include <iostream>
using namespace std;

int main()
{
    int inches;

    cout << "Enter Inches: ";
    cin >> inches;
    cout << endl;

    cout << inches << " inch(es) = ";
    //inches and the equal sign
    cout << inches / 12 << " feet (foot) and ";
    //number of feet (foot)
    cout << inches % 12 << " inch(es)" << endl;

    return 0;
}
