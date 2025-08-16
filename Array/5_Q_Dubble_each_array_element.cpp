#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter element at index no " << i << " : ";
        cin >> arr[i];
    }
    cout << "Before :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 2 * arr[i];
    }
    cout << endl
         << "After :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}