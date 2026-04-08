// 2.Scan n characters from user.
// Count uppercase alphabets only from given input.

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter no.of Characters : ";
    cin >> n;

    // Dynamic allocation
    char *arr = new char[n];

    cout << "\nEnter " << n << " characters : ";
    for(i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }

    int counter = 0;
    for(i=0; i<n; i++)
    {
        if(*(arr+i) >= 'A' && *(arr+i) <= 'Z')
        {
            counter ++;
        }
    }

    cout << "No.of Uppercase Alphabets : " << counter;
    
    //free memory
    delete[] arr;
    
    return 0;
}