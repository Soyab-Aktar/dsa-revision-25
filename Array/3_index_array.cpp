#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    // Initialisation of an Array
    int arr[] = {1, 2, 3, 4, 5};

    cout << "Value of Index no 3 :" << arr[3] << endl;
    cout << "Value of Index no 0 :" << arr[0] << endl;

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}