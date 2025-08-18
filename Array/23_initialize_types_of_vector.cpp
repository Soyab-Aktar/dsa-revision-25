#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;                   // Default with no data , 0 size
    vector<int> brr(5, -1);            // init with n size with specific data
    vector<int> crr = {1, 2, 3, 4, 5}; // init with some elements
    vector<int> drr{11, 22, 33, 44};

    // Copy vector
    vector<int> prr = {54, 23, 13, 55};
    vector<int> copyArr(prr);
    cout << "Elements of copyArr : ";
    for (auto element : copyArr)
    {
        cout << element << " ";
    }
}