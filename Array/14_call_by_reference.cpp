#include <iostream>
using namespace std;

// The function receives the address of the actual variable, not a copy of its value.
// Changes inside the function are reflected in the original variable.

int incNum(int &num)
{
    num++;
    return num;
}

int main()
{
    int num;
    cout << "Enter a value :";
    cin >> num;

    int numA = incNum(num);
    cout << "Value of numA :" << numA << endl;
    cout << "Value of num :" << num;
}