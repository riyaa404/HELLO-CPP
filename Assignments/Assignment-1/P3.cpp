// Q3.Scan 2 numbers from user.Print square and cube of both numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter 2 integers : ";
    cin >> num1 >> num2;

    cout << "\nSquare of " << num1 << " is " << num1*num1;
    cout << "\nCube of " << num1 << " is " << num1*num1*num1 << "\n"; 

    cout << "\nSquare of " << num2 << " is " << num2*num2;
    cout << "\nCube of " << num2 << " is " << num2*num2*num2;
    return 0;
}