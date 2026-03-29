// Write a function that accepts character(ch) as parameters & returns the character that occurs after ch in the English alphabet.
// Note:forch=‘z’,return‘a’

#include <iostream>
using namespace std;

char afterChar(char ch)
{
    if (ch >= 'A' || ch <='Z' || ch >= 'a' || ch <= 'z')
    {
        if(ch == 'z')
            return 'a';
        else if(ch == 'Z')
            return 'A';
    }
    else
    {
        return ch+1;
    }
}

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    char res = afterChar(ch);
    cout << "Character after " << ch << " : " << res ;

    return 0;
}