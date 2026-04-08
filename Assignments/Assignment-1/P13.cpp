// Q13.A customer has deposited P Rs in bank in the form of Fixed Deposit for N years having rate of interest 5.00%.(Here P ad N is the input from user).
// Find the total amount he will get after N years.If total amount he will receive is greater than 12000/-
// then suggest him to invest them in mutual fund else suggest him to buy the gold.

#include <iostream>
using namespace std;
int main()
{
    float P, SI, amount, r = 5.0;
    int N;

    cout << "Enter Principal amount (P) : ";
    cin >> P;
    cout << "Enter number of years (N)  : ";
    cin >> N;

    // Simple interest formula
    SI = (P * N * r) / 100;
    amount = P + SI;
    cout << "\nTotal amount receiving after " << N << " years : " << amount;

    if(amount > 12000)
    {
        cout << "\nSuggestion : Invest in Mutual Funds";
    }
    else
    {
        cout << "\nSuggestion : Buy Gold";
    }

    return 0;
}