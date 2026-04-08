// Q4.Scan a number from user. Print message correct input if number lies between 15 and 20.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    if(num >= 15 && num <= 20)
    {
        cout << "Correct Input";
    }
    return 0;
}