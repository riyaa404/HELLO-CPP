// Q19.Scan 3 integers from user.Find the smallest of those 3 integers.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter 3 integers : ";
    cin >> num1 >> num2 >> num3;

    if(num1 <= num2 && num1 <= num3)
    {
        cout << num1 << " is Smallest Number";
    }
    else if(num2 <= num1 && num2 <= num3)
    {
        cout << num2 << " is Smallest Number";
    }
    else
    {
        cout << num3 << " is Samllest Number";
    }

    return 0;
}