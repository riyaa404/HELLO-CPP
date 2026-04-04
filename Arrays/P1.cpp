// WAP to find largest value from array.

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;

    cout << "Enter 5 Numbers of array : ";
    for(i=0; i<=4; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for(i=0; i<=4; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Largest value : " << max;
    return 0;
}