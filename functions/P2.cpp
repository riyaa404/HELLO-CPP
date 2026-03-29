// Q. Write function to calculate the sum of digits of a number.

#include <iostream>
using namespace std;

int digitSum(int value)
{
    int rem, sum = 0;
    while(value > 0)
    {
        rem = value % 10;
        sum = sum + rem;
        value = value / 10;
    }
    return sum;

}

int main()
{
    int num;
    cout << "Enter a Number = ";
    cin >> num;

    int result = digitSum(num);
    cout << "Result = " << result; 

    return 0;
}