#include <iostream>
using namespace std;

// A copy of the actual value is passed to the function.

// Modifications inside the function remain local.

// The original variable remains unchanged after the function call.

int incNum(int num)
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