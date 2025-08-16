#include <iostream>
using namespace std;

void count(int arr[], int size, int countOne, int countZero)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            countOne++;
        }
        else
        {
            countZero++;
        }
    }

    cout << "One is : " << countOne << endl;
    cout << "Zero is : " << countZero << endl;
}

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1};
    int size = 8;
    int countOne = 0;
    int countZero = 0;

    count(arr, size, countOne, countZero);
}