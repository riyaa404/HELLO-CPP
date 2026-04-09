// Reverse an array -> using extra space
// tc = O(n)    sc = O(n)

#include <iostream>
using namespace std;
int main()
{
    int i, n=5;
    int arr[5], rev[5];

    cout << "Enter 5 Elements of Array : ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(i=0; i<n; i++)
    {
        rev[i] = arr[n-1-i];
    }

    cout << "Actual Array  : ";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nReverse Array : ";
    for(i=0; i<n; i++)
    {
        cout << rev[i] << " ";
    }
    
    return 0;
}