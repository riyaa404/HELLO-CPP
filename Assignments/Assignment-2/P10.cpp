// Q12.Write a menu driven program for arithmetic operations of 2 integers
// where choices will be arithmetic symbols (+,-,*,/).

#include <iostream>
using namespace std;
int main()
{
    char choice;
    int num1, num2;

    cout << "Enter 2 integers : ";
    cin >> num1 >> num2;

    cout << "\n ---- Menu ----";
    cout << "\n + Addition";
    cout << "\n - Subtraction";
    cout << "\n * Multiplication";
    cout << "\n / Division\n";

    cout << "\nEnter choice (symbol) : ";
    cin >> choice;

    switch(choice)
    {
        case '+':
            cout << "\nAddition : " << num1+num2;
            break;
        
        case '-':
            cout << "\nSubtraction : " << num1-num2;
            break;

        case '*':
            cout << "\nMultiplication : " << num1*num2;
            break;

        case '/':
            cout << "\nDivision : " << (float)num1/num2;
            break;

        default:
            cout << "\nInvalid Choice";
    }

    return 0;
}