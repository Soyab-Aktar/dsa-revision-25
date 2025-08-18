#include <iostream>
using namespace std;

void staticPrint(int srr[])
{
    cout << "Static Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << srr[i] << " ";
    }
    cout << endl;
}

void dynamicPrint(int arr[], int size)
{
    cout << "Dynamic Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Static Memory Allocation
    int srr[5] = {1, 2, 3, 4, 5};
    staticPrint(srr);

    // Dynamic Memory Allocation
    int size;
    cout << "Enter size of an array :";
    cin >> size;
    // variable_type * array_name = new variable_type[size];
    int *arr = new int[size]; // define size on runtime
    for (int i = 0; i < size; i++)
    {
        int data;
        cout << "Enter data for index no " << i << " : ";
        cin >> data;
        arr[i] = data;
    }
    dynamicPrint(arr, size);
}