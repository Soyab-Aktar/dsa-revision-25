#include <iostream>
#include <limits.h>
using namespace std;

void checkmin(int arr[], int size, int min)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "min number is : " << min;
}

int main()
{
    int arr[] = {56, 37, 45, 97, 23, 67, 33};
    int size = 7;
    int min = INT_MAX;

    checkmin(arr, size, min);
}