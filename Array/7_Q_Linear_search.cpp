#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    int target;
    cout << "Enter your target : ";
    cin >> target;

    int size = 6;
    bool flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "Target found :";
    }
    else
    {
        cout << "Target not found :";
    }
}