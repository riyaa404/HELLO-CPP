// Q14.Scan a gender from user.If user enters M , print male.
// If user enter F, print female.Otherwise print wrong input.

#include <iostream>
using namespace std;
int main()
{
    char gender;

    cout << "Enter Gender (F/M) : ";
    cin >> gender;

    if(gender == 'F' || gender == 'f')
    {
        cout << "Female";
    }
    else if(gender == 'M' || gender == 'm')
    {
        cout << "Male";
    }
    else
    {
        cout << "Wrong input";
    }

    return 0;
}