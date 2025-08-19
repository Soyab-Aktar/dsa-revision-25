#include <iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i << "st row is : " << sum << endl;
        sum = 0;
    }
}

int main()
{
    int arr[][4] = {
        {10, 20, 5, 7},    // 42
        {2, 4, 6, 8},      // 20
        {10, 15, 15, 10}}; // 50

    printRowSum(arr, 3, 4);
}