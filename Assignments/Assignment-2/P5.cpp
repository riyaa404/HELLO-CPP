// Q5.Write a menu driven program for 4 arithmetic operations of 2 integers.
// (Menu Driven means switch case)

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, choice;

    cout << "Enter 2 Integers : ";
    cin >> num1 >> num2;

    cout << "\n--- Menu ---";
    cout << "\n1 - Addition";
    cout << "\n2 - Subtraction";
    cout << "\n3 - Multiplication";
    cout << "\n4 - Division\n";

    cout << "\nEnter Choice : ";
    cin >> choice;

    switch(choice)
    {
        case 1 :
            cout << "\nAddition : " << num1 + num2;
            break;
        
        case 2 :
            cout << "\nSubtraction : " << num1 - num2;
            break;

        case 3 :
            cout << "\nMultiplication : " << num1 * num2;
            break;

        case 4 :
            cout << "\nDivision : " << (float)num1 / num2;
            break;
            
        default :
            cout << "\nInvalid Choice";
    }
    return 0;
}