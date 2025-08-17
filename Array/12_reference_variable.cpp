#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    cout << "Value of Num :" << num << endl;

    int &numA = num;
    cout << "Value of numA :" << numA << endl;
    int &numB = num;
    cout << "Value of numB :" << numB << endl
         << endl;

    // cout << "After inc of Num - " << endl;
    // num++;
    // cout << "Value of numA :" << numA << endl;
    // cout << "Value of numB :" << numB << endl
    //      << endl;
    // Both outputs are same - 11

    // cout << "After inc of NumA - " << endl;
    // numA++;
    // cout << "Value of num :" << num << endl;
    // cout << "Value of numB :" << numB << endl
    //      << endl;
    // Both outputs are same - 11

    int &numC = numB;
    cout << "Value of NumC :" << numC << endl
         << endl;

    // num++;
    // cout << "Value of NumC after inc:" << numC << endl
    //      << endl;

    // int &value = 6; ==> Error
}