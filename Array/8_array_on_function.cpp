#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target;
    cout << "Enter your target :";
    cin >> target;

    print(arr, size);
    // linearSearch(arr, size, target);

    if (linearSearch(arr, size, target))
    {
        cout << "Target found";
    }
    else
    {
        cout << "Not found";
    }
}