#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    // cout << "Reverse an array : ";
    // for (int i = size - 1; i > 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}