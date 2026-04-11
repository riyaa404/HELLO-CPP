// Q13.Scan necessary data to find simple interest.If simple interest is greater than 5000/-,
// ask user to buy equity of total amount(principle and simple interest).
//If simple interest is less than or equal to 5000/-,ask user to invest total amount in mutual fund.
// (if else code,you can't use switch case here.)

#include <iostream>
using namespace std;
int main()
{
    float P, R, SI, total_amt;
    int T;     

    cout << "Enter Principal : ";
    cin >> P;
    cout << "Enter Rate of Interest : ";
    cin >> R;
    cout << "Enter years : ";
    cin >> T;

    // simple interest formula
    SI = (P * R  * T) / 100;

    total_amt = P + SI;

    cout << "\nSimple Interest = " << SI;
    cout << "\nTotal Amount = " << total_amt;

    if(SI > 5000)
    {
        cout << "\nSuggestion: Buy equity of total amount";
    }
    else
    {
        cout << "\nSuggestion: Invest total amount in mutual fund";
    }

    return 0;
}