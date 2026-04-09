// Reverse an array without using extra space (2 Pointer Approach)
// tc = O(n)    sc = O(1)

#include <iostream>
using namespace std;
int main()
{
    int i, n=5;
    int arr[n];

    cout << "Enter 5 Elements of Array : ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = n-1;
    
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
    
    cout << "Reverse Array : ";
    for(int i=0; i<=4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}