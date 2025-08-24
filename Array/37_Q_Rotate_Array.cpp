#include <iostream>
#include <vector>
#include <algorithm>
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

void transposeArray(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr[i].size(); j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void revArr(vector<int> &list)
{
    int start = 0;
    int end = list.size() - 1;
    while (start <= end)
    {
        swap(list[start], list[end]);
        start++;
        end--;
    }
}
void reverseArray(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        // reverse(arr[i].begin(), arr[i].end()); // No extra space required
        revArr(arr[i]);
    }
}
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    transposeArray(arr);
    reverseArray(arr);
    printArray(arr);
}