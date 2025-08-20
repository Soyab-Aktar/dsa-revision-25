#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &arr)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int index = 0;

    while (index <= end)
    {
        if (arr[index] == 0)
        {
            swap(arr[index], arr[start]);
            start++;
            index++;
        }
        else if (arr[index] == 2)
        {
            swap(arr[index], arr[end]);
            end--;
            // index++  -- there is a chance,value exist like 0/1/2
        }
        else
        {
            index++;
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
    vector<int> arr{2, 0, 2, 1, 1, 0};

    cout << "After Sorting :" << endl;
    sortColors(arr);
    print(arr);
}