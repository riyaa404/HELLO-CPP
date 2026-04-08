// Q9.Scan 2 integers from user.Then scan a choice also from user.
// If user enters 1 as a choice,print addition of first 2 integers.
// Otherwise print subtraction of 2 integers.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, choice;

    cout << "Enter two integers : ";
    cin >> num1 >> num2;

    cout << "\n--- Press ---";
    cout << "\n1 - Addition";
    cout << "\n2 - Subtraction";

    cout << "\nEnter your Choice : ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Addition : " << num1+num2;
    }
    else
    {
        cout << "Subtraction : " << num1-num2;
    }
    
    return 0;
}