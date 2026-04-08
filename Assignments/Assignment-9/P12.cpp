// 1.Scan n integers from user.Find largest value of them.

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter no.of integers : ";
    cin >> n;

    // Dynamic allocation
    int *arr = new int[n];

    cout << "Enter " << n << " integers : ";
    for(i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }

    int max = *(arr+0);
    for(i=0; i<n; i++)
    {
        if(max < *(arr+i))
        {
            max = *(arr+i);
        }
    }
    cout << "\nLargest value : " << max;

    //free memory
    delete[] arr;
    
    return 0;
}