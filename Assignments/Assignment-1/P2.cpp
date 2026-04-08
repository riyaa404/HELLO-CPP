// Q2.Scan 3 numbers from user.Find the largest of them.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter 3 integers : ";
    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " is Largest Number";
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        cout << num2 << " is Largest Number";
    }
    else
    {
        cout << num3 << " is Largest Number";
    }
    return 0;
}