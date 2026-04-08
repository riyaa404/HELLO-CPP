// Q5.Scan a number from user.Check if it is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << num << " is Even Number";
    }
    else
    {
        cout << num << " is Odd Number";
    }
    return 0;
}