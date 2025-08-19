#include <iostream>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool find(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int row = 3;
    int col = 3;
    printArray(arr, row, col);
    int target;
    cout << "Enter your target : ";
    cin >> target;
    int findOutput = find(arr, row, col, target);
    if (findOutput)
    {
        cout << "Target found ..." << endl;
    }
    else
    {
        cout << "Not Found ..." << endl;
    }
}