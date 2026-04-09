// Check whether string is palindrome or not (using 2 pointer approach)

#include <iostream>
#include <string.h> 
using namespace std;
int main()
{
    char str[50];

    cout << "Enter string : ";
    cin.getline(str, 50);

    int len = strlen(str);
    int start = 0, end = len-1;

    bool isPalindrome = true;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is not Palindrome";
    }
    return 0;
}