// WAF to print if a number is odd or even

#include <iostream>
using namespace std;

bool oddEven(int val)
{
    if(val % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    if(oddEven(num))
        cout << num << " is even";
    else
        cout << num << " is odd";

    return 0;
}