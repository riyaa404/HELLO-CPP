// Q4.Repeat Q3 using switch.

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    switch(ch)
    {
        case 'A' :
            cout << "APPLE";
            break;
        case 'B' :
            cout << "BANANA";
            break;
        case 'C' :
            cout << "CHERRY";
            break;
        default : 
            cout << "Some Other Fruit";
    }
    return 0;
}