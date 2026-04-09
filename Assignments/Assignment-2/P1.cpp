// Q1.Scan a number from user.If user gives 1,print "ONE",if user gives 2,print "TWO",
// for 3,print "THREE".If user gives some other number,print wrong input.Do this using if else.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    if(num == 1)
    {
        cout << "ONE";
    }
    else if(num == 2)
    {
        cout << "TWO";
    }
    else if(num == 3)
    {
        cout << "THREE";
    }
    else
    {
        cout << "Wrong Input";
    }
    return 0;
}