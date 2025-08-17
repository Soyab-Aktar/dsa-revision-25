#include <iostream>
using namespace std;
void sortZeroOne(int arr[], int size)
{
    int zero = 0;
    int one = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    int index = 0;

    while (zero--)
    {
        arr[index] = 0;
        index++;
    }
    while (one--)
    {
        arr[index] = 1;
        index++;
    }
}
int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int size = 9;

    sortZeroOne(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}