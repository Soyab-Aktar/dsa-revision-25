#include <iostream>
using namespace std;

void transpose(int array[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(array[i][j], array[j][i]);
        }
    }
}

void printArray(int array[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int array[][3] = {
        {2, 4, 6},
        {8, 3, 5},
        {7, 9, 1}};

    cout << "Before :" << endl;
    printArray(array, 3, 3);
    cout << "Transpose :" << endl;
    transpose(array, 3, 3);
    printArray(array, 3, 3);
}