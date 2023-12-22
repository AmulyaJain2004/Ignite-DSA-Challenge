#include <iostream>
using namespace std;

int linear_search(int* par, int size_arr, int target)
{
    for (int i = 0; i < size_arr; i++)
    {
        if (*(par + i) == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {19, 45, 52, 21, 76, 98, 65, 1, 39};
    int size = sizeof(arr) / sizeof(arr[0]);

    int search;
    cout << "Enter the element to search in Array: -" << endl;
    cin >> search;

    int found = linear_search(arr, size, search);

    if (found == -1)
    {
        cout << "Element not found in the array" << endl;
    }
    else
    {
        cout << "Element found in the array and at the index " << found << endl;
    }

    return 0;
}
