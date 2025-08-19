#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating Vector for 2D
    vector<vector<int>> arr;
    vector<vector<int>> array(5, vector<int>(2, 0));
    vector<vector<int>> brr(5, vector<int>(3)); // each index will be zero value by default

    // Debug -----
    // vector<int>>            -- Structure of 2D array
    // array                   -- Name of array
    // (5,_____)               -- Number of Rows
    // (_,vector<int>(10,0))   -- Row ites, initialize with a vector of size 10 that is initialize 0

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[i].size(); j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}