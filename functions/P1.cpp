// Q. Write a function to check if a number is palindrome or nott.

#include <iostream>
using namespace std;

bool Palindrome(int value)
{
    int check = value;
    int rem, rev=0;
    while(value > 0)
    {
        rem = value % 10;
        rev = rev * 10 + rem;
        value = value / 10;
    }
    if(check == rev)
        return true;
    else
        return false;

}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    bool result = Palindrome(num);
    if(result == true)
        cout << "\n" << num << " is Palindrome";
    else
        cout << "\n" << num << " is not Palindrome";

    return 0;
}