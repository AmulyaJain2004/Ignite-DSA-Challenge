#include <iostream>
using namespace std;

int Binary_Search(int arr[], int size_arr, int search)
{
    int left_index = arr[0];
    int right_index = arr[size_arr - 1];

    while (left_index <= right_index)
    {
        int middle_index = left_index + (right_index - left_index) / 2;
        if (arr[middle_index] == search)
        {
            return middle_index;
        }
        else if (arr[middle_index] > search)
        {
            left_index = middle_index + 1;
        }
        else // if arr[middle_index] < search
        {
            right_index = middle_index - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 19, 21, 39, 45, 52, 65, 76, 98}; // already sorted array is must

    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the element to search in Array: -" << endl;
    cin >> target;

    int found = Binary_Search(arr, size, target);

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
