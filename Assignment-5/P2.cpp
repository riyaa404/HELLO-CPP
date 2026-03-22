// 2.Scan array of 6 integers from user.Find the largest value from array. (pointer notation)

#include <iostream>
using namespace std;
int main()
{

    int arr[6];
    int *p = &arr[0], i;  // Assigned base address of arr to pointer variable p
    
    // Input
    cout << "\nEnter 6 integers of array below\n\n";
    for(i=0; i<=5; i++)
    {
        cout << "Element " << i+1 << " : ";
        cin >> *(p+i);
    }

    // Largest value from array
    int max = *(p+0);
    for(i=0; i<=5; i++)
    {
        if(max < *(p+i))
        {
            max = *(p+i);
        }
    }

    // Result
    cout << "\nLargest value from array : " << max;

    return 0;
}
