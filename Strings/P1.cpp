// Convert string into uppercase

#include <iostream>
using namespace std;

void toUpper(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    cout << "output :\n" << str;
}
int main()
{
    char str[100];
    
    cout << "Enter string : ";
    cin.getline(str, 100);

    toUpper(str);

    return 0;
}