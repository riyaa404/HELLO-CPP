// Q3.Scan a character from user.If user gives 'A',print "APPLE", for 'B' print "BANANA",
// for 'C' print "CHERRY". For any other character,print Some Other Fruit.Do this using if else.

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if(ch == 'A')
    {
        cout << "APPLE";
    }
    else if(ch == 'B')
    {
        cout << "BANANA";
    }
    else if(ch == 'C')
    {
        cout << "CHERRY";
    }
    else
    {
        cout << "Some Other Fruit";
    }
    return 0;
}