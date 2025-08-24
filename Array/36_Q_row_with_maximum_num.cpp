#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void printArray(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void coutOne(vector<vector<int>> &arr)
{
    int max = INT_MIN;
    int count = 0;
    int maxRow = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > max)
        {
            maxRow = i;
            max = count;
        }
        count = 0;
    }

    cout << "Maximum number of One , Row no : " << maxRow << endl;
    cout << "Total One is : " << max << endl;
}
int main()
{
    vector<vector<int>> arr(5, vector<int>(5));
    arr[0] = {0, 1, 0, 1, 1};
    arr[1] = {0, 0, 1, 0, 1};
    arr[2] = {1, 1, 0, 1, 1};
    arr[3] = {1, 0, 0, 0, 1};
    arr[4] = {0, 1, 0, 1, 0};

    printArray(arr);
    coutOne(arr);
}