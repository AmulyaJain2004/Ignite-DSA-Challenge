#include <iostream>
using namespace std;

int Sentinel_Linear_Search(int arr[], int size_arr, int search)
{
    // temporary storing last element of array in a variable
    int end_term = arr[size_arr - 1];

    // assigning last element value = element to be searched
    arr[size_arr - 1] = search;

    // linear search that is traversing through the whole array till we found the element and incrementing i
    int i = 0;
    while (arr[i] != search)
    {
        i++;
    }

    // putting back the original value of last element of array
    arr[size_arr - 1] = end_term;

    // checking if the target element is present before the last element or last element of array is the element we are searching for
    if (i < size_arr - 1 || arr[size_arr - 1] == search)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {19, 45, 52, 21, 76, 98, 65, 1, 39};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the element to search in Array: -" << endl;
    cin >> target;

    int found = Sentinel_Linear_Search(arr, size, target);

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
