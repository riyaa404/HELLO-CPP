// Q1.Scan 3 integers from user.Print their average.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter 3 integers : ";
    cin >> num1 >> num2 >> num3;

    // use float datatype
    float avg = (num1 + num2 + num3) / 3.0;
    cout << "Average : " << avg;

    return 0;
}