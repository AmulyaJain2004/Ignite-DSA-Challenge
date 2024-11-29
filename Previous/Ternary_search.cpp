#include <iostream>
using namespace std;

int Ternary_Search(int left, int right, int target, int array[])
{
    while (right)
    {
        // first finding the trisector1, trisector2 fr the array
        int trisector1 = left + (right - left) / 3;
        int trisector2 = right - (right - left) / 3;
        // don't need to memorise above equations these are just modified form of section formula

        if (array[trisector1]==target)
        {
            // target will be at trisector1 
            return trisector1;
        }
        if (array[trisector2]==target)
        {
            // target will be at trisector2 
            return trisector2;
        }

        /*
        target is not present at the mid number indices so,
        we need to check in between the regions
        then repeat the steps til the desired target is found
        0----trisector1----trisector2----Last
        */
        
        if (array[trisector2]<target)
        {
            // target will be in between trisector2 and right index
            left = trisector2 + 1;
        }
        if (array[trisector1]>target)
        {
            // target will be in between trisector1 and left index
            right = trisector1 - 1;
        }
        else
        {
            // target will be in between trisector1 and trisector2
            left = trisector1 + 1;
            right = trisector2 - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 19, 21, 39, 45, 52, 65, 76, 98}; // already sorted array is must

    int size = sizeof(arr) / sizeof(arr[0]);

    int left_index = 0;
    int right_index = size - 1;

    int search;
    cout << "Enter the element to search in Array: -" << endl;
    cin >> search;

    int found = Ternary_Search(left_index, right_index, search, arr);

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
