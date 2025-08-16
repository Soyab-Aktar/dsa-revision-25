#include <iostream>
using namespace std;

int main()
{
    // Creating Array
    int arr[10];
    float brr[5];
    bool crr[5];

    // Checking Address of created array
    cout << "Address of arr :" << &arr << endl;
    cout << "Address of arr :" << arr << endl
         << endl;

    // Size of an Array
    cout << "Size of an Array : " << sizeof(arr) << endl;
}