#include <iostream>
using namespace std;

void getunique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Unique Element is :" << ans << endl;
}
int main()
{
    int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int size = 9;

    getunique(arr, size);
}