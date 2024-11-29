#include <iostream>
using namespace std;

int Binary_Search(int arr[], int size_arr, int search)
{
    int left_index = 0;
    int right_index = size_arr - 1;

    while (left_index <= right_index)
    {
        int middle_index = left_index + (right_index - left_index) / 2;
        if (arr[middle_index] == search)
        {
            return middle_index;
        }
        else if (arr[middle_index] > search)
        {
            left_index = middle_index + 1; // since at middle index, term to be searched is not present and it is greater than the term,
                                           // so it can't be present in first half and hence we changed left index to be middle index + 1 to search in second half.
        }
        else // if arr[middle_index] < search
        {
            right_index = middle_index - 1;// since at middle index, term to be searched is not present and it is lesser than the term,
                                           // so it can't be present in second half and hence we changed right index to be middle index - 1 to search in first half.
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
