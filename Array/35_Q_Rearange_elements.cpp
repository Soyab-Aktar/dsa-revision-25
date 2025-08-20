#include <iostream>
#include <vector>
using namespace std;
void rearrangeArray(vector<int> &nums)
{
    vector<int> positiveArray;
    vector<int> negetiveArray;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            positiveArray.push_back(nums[i]);
        }
        else
        {
            negetiveArray.push_back(nums[i]);
        }
    }

    int flag = 1;
    int pIndex = 0;
    int nIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (flag == 1)
        {
            nums[i] = positiveArray[pIndex];
            flag = 0;
            pIndex++;
        }
        else
        {
            nums[i] = negetiveArray[nIndex];
            flag = 1;
            nIndex++;
        }
    }
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

    vector<int> nums{3, 1, -2, -5, 2, -4};
    rearrangeArray(nums);
    print(nums);
}