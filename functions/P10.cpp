// WAF to find binomial coefficient for given n and r 
// formula  n^C^r = n! / r! * (n-r)!

#include <iostream>
using namespace std;

int scanData()
{
    int value;
    cin >> value;
    return value;
}

int factorial(int num)
{
    int fact = 1;
    for(int i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int binomial(int n, int r)
{
    if(r > n || r < 0)
        return -1;  // invalid case

    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    return val1 / (val2 * val3);
}

int main()
{
    int n, r;

    cout << "Enter n : ";
    n = scanData();
    cout << "Enter r : ";
    r = scanData();

    int result = binomial(n, r);

    if(result == -1)
        cout << "Invalid input (r should be <= n)";
    else
        cout << "Binomial Coefficient : " << result;

    return 0;
}

// Optimized Approach

// int binomial(int n, int r)
// {
//     if(r > n) return -1;

//     r = min(r, n - r);

//     int res = 1;

//     for(int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }

//     return res;
// }