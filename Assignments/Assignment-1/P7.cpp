// 7.Scan a character from user.Print "APPLE" if user enters a or A.Otherwise print message "NO APPLE".

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Character : ";
    cin >> ch;

    if(ch == 'a' || ch == 'A')
    {
        cout << "APPLE";
    }
    else
    {
        cout << "NO APPLE";
    }
    return 0;
}