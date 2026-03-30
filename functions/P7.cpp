// WAF to print the factorial of number n

#include <iostream>
using namespace std;

int factorial(int val)
{
    int fact = 1;
    for(int i = 1; i<=val; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter a number = ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num);
    return 0;
}