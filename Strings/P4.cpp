// Reverse a char array/string (2 pointer approach)

#include <iostream>
#include <string.h>
using namespace std;

void reverse(char str[], int len)
{
    int start = 0, end = len-1;
    while(start < end)
    {
        swap(str[start], str[end]);

        start ++;
        end --;
    }
    cout << "\nOutput : " << str;
}

int main()
{
    char str[100];
    cout << "Enter string : ";
    cin.getline(str, 100);

    reverse(str, strlen(str));

    return 0;
}