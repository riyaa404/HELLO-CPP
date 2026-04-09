// Liner search -> O(n)

#include <iostream>
using namespace std;

int search(int *parr, int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(parr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, i, key=0;
    cout << "Enter no.of Elements of Array : ";
    cin >> n;

    int *arr = new int [n];

    cout << "Enter Elements of Array : ";
    for(i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }

    cout << "Enter Element to search in Array : ";
    cin >> key;

    int index = search(arr, n, key);

    if(index != -1)
    {
        cout << "\nElement found at index " << index;
    }
    else
    {
        cout << "\nElement not found";
    }
    return 0;
}