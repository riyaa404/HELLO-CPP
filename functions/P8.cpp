// WAF to print if a number is prime or not.

#include <iostream>
using namespace std;

void prime(int val)
{
    bool isPrime = true;
    if(val <= 1)
    {
        cout << val << " is not Prime";
        return;
    }
    for(int i=2; i*i<=val; i++)
    {
        if(val % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        cout << val << " is Prime";
    else
        cout << val << " is not Prime";
}
int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    
    prime(num);
    return 0;
}