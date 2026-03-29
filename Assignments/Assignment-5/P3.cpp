// 3.Declare and itialize an array of 8 integers.Find the smallest value from array.(pointer notation)

#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {2, 45, 67, 76, 33, 57, 29, 38};
    int *p = arr; //pointer notation

    // Smallest value from array
    int min = *(p+0);
    for(int i=0; i<=7; i++)
    {
        if(min > *(p+i))
        {
            min = *(p+i);
        }
    }

    // Output
    cout << "\nSmallest value from array : " << min;

    return 0;
}