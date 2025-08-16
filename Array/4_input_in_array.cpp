#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int arr[5];
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your data at index no " << i << " : ";
        cin >> arr[i];
    }

    cout << "Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}