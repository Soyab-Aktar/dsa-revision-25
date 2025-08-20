#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &arr, int k)
{
    int size = arr.size();
    vector<int> temp(size);

    for (int i = 0; i < size; i++)
    {
        int newindex = (i + k) % size;
        temp[newindex] = arr[i];
    }
    temp = arr;
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
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k;
    cout << "Enter your rotation : ";
    cin >> k;
    rotateArray(arr, k);
    print(arr);
}