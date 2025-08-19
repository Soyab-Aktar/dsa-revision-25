#include <iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
    }
    cout << "Sum of Diagonal is : " << sum << endl;
}

int main()
{
    int arr[][4] = {
        {10, 20, 5, 7},
        {2, 4, 6, 8},
        {10, 15, 15, 10}};

    printRowSum(arr, 3, 4);
}