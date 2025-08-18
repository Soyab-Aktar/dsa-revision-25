#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // initialize vector
    // vector<variable_type>array_name;
    vector<int> arr;

    // Insert values
    // array_name.push_back(value);
    int elements;
    cout << "How much elements , want to insert :";
    cin >> elements;
    for (int i = 0; i < elements; i++)
    {
        int data;
        cout << "Enter your data at index no " << i << " : ";
        cin >> data;
        arr.push_back(data);
    }

    // Pop/Delete elements => always from end
    // array_name.pop_back();
    arr.pop_back();

    // Print data from particular index
    // 1
    cout << "Element at index no 2 : " << arr[2] << endl;
    cout << "Element at index no 3 : " << arr.at(3) << endl;

    printArray(arr);

    // Delete all elements from an array
    arr.clear();
    cout << "after clear" << endl;
    arr.push_back(99);
    printArray(arr);
}