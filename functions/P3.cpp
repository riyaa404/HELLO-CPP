// Write a function which takes 2 numbers as parameters (a&b) and outputs : a^2+b^2+2*ab.

#include <iostream>
using namespace std;

int scanData()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    return num;
}

int result(int val1, int val2)
{
    return (val1*val1) + (val2*val2) + 2*(val1*val2);
}

int main()
{
    int num1 = scanData();
    int num2 = scanData();

    cout << "Result : " << result(num1, num2);

    return 0;
}