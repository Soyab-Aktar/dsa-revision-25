#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &arr)
{
    int point = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[point]);
            point++;
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
    vector<int> arr{23, -7, 12, -10, -11, 40, 60};
    cout << "Before : ";
    print(arr);
    cout << "After : ";
    sort(arr);
    print(arr);
}