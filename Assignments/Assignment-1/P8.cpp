// Q8.Scan a character from user.Check if it is capital alphabet or not.

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Character : ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        cout << "Capital Alphabet";
    }
    else
    {
        cout << "Not a Capital Alphabet";
    }
    
    return 0;
}