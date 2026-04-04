// WAF to print all Primes in a range from 2 to n

#include <iostream>
using namespace std;

void primes(int val)
{
    if(val <= 1)
    {
        cout << "No primes";
        return;
    }
    for(int i=2; i<=val; i++)
    {
        bool isPrime = true;    // resets for each i

        for(int j=2; j*j<=i; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;

    cout << "Primes in range : ";
    primes(num);
    return 0;
}