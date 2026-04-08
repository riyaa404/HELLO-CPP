// Q6.Scan a number from user.Check if it is multiple of 6 or not without using 6.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    if(num % 2 == 0 && num % 3 == 0)
    {
        cout << "Is multiple of 6";
    }
    else
    {
        cout << "Is not multiple of 6";
    }
    return 0;
}