// Binary Search O(log n) - has better time complexity than linear search
// NOTE: the array should be sorted before applying binary search logic.

#include <iostream> 
using namespace std;

int binarySearch(int *arr, int n, int key)
{
    int start = 0, end = n-1;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int i, key, n=5;
    int arr[n];

    cout << "Enter " << n << " Elements of Array (Sorted Array): ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search : ";
    cin >> key;

    int idx = binarySearch(arr, n, key);

    if(idx != -1)
    {
        cout << "\nElement is found at index " << idx;
    }
    else
    {
        cout << "\nElement is not found";
    }

    return 0;
}