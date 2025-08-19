#include <iostream>
using namespace std;

void print2DArray(int brr[3][3], int row, int col)
{
    cout << "Printing 2D array , Row wise : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Printing 2D array , Col wise : " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // creation of 2d Array
    // varable_type array_name [rows] [cols]
    int arr[2][2] = {
        {1, 2},
        {3, 4}};
    int brr[3][3] = {
        {11, 32, 24},
        {65, 44, 34},
        {77, 23, 12}};

    // Acesses elements from 2D array
    cout << "Value at [0][0] :" << brr[0][0] << endl;
    cout << "Value at [2][1] :" << brr[2][1] << endl;

    // Find index on 1D array, from 2D array
    // Formula -- col*i+j (mapping from 2D to 1D)

    // Print 2D array
    int row = 3;
    int col = 3;
    print2DArray(brr, row, col);
}