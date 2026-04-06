// WAP to find smallest value from array.

#include <iostream>
using namespace std;
int main()
{
    int arr[5], i;

    cout << "Enter 5 integers of array : ";
    for(i=0; i<=4; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    for(i=0; i<=4; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "Smallest value : " << min;
    return 0;
}