#include <iostream>
#include <vector>
using namespace std;

void missingNum(vector<int> &arr)
{
    int sum = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int n = size + 1;
    int totalSum = ((n) * (n + 1)) / 2;

    int ans = totalSum - sum;
    cout << "Missing Num :" << ans;
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> arr{1, 4, 2, 5};
    vector<int> nums{3, 1, -2, -5, 2, -4};
    missingNum(arr);
    // print(nums);
}