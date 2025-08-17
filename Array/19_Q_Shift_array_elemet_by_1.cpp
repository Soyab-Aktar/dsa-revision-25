#include <iostream>
using namespace std;

void shifting(int arr[], int size)
{
    int lastElemet = arr[size - 1];
    for (int i = size - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElemet;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    shifting(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}