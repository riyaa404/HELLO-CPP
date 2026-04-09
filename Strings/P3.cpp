// Reverse a char array/string

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[50], rev[50];
    
    cout << "Enter string: ";
    cin.getline(str, 50);

    int len = strlen(str);

    // Reverse string
    for(int i = 0; i < len; i++)
    {
        rev[i] = str[len - 1 - i];  //n-1-i
    }

    rev[len] = '\0';  // terminating character of string

    cout << "\nOutput : " << rev;

    return 0;
}