// Q11.Write a menu driven program to print square or cube of given number.

#include <iostream>
using namespace std;
int main()
{
    int num, choice;

    cout << "Enter a number : ";
    cin >> num;

    cout << "\n--- Menu ---";
    cout << "\n1.Sqaure of number";
    cout << "\n2.Cube of number";

    cout << "\nEnter choice : ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\nSqaure : " << num*num;
            break; 

        case 2:
            cout << "\nCube : " << num*num*num;
            break;

        default :
            cout << "Invalid Choice";
    }
    
    return 0;
}