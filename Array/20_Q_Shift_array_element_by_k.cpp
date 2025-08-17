#include <iostream>
using namespace std;

void shifting(int arr[], int size, int k)
{
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[size - k + i];
    }

    for (int i = size - 1; i >= 1; i--)
    {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int k;
    cout << "Input of number of shift :";
    cin >> k;

    shifting(arr, size, k);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}