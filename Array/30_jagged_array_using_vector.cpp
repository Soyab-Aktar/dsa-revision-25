#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(3);

    arr[0] = vector<int>(3, 1);
    arr[1] = vector<int>(5, 2);
    arr[2] = vector<int>(9, 8);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}