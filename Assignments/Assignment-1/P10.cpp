// Q10.Scan a character from user.Check if it is digit or not.

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if(ch >= '0' && ch <= '9')
    {
        cout << "It is Digit";
    }
    else
    {
        cout << "It is not Digit";
    }

    return 0;
}