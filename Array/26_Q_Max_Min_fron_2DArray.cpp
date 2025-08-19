#include <iostream>
#include <limits.h>
using namespace std;

void find_Max_Min(int arr[3][3], int row, int col)
{
    int maxValue = INT_MIN;
    int minValue = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxValue)
            {
                maxValue = arr[i][j];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minValue)
            {
                minValue = arr[i][j];
            }
        }
    }

    cout << "Max num is : " << maxValue << endl;
    cout << "Min num is : " << minValue << endl;
}

int main()
{
    int arr[3][3] = {
        {11, 32, 24},
        {65, 44, 34},
        {77, 23, 12}};
    find_Max_Min(arr, 3, 3);
}