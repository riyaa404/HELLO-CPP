// 6.Scan a gender from user.If user enters m OR M, print MALE. If user enters f OR F,
// print FEMALE.Print wrong input for any other character. (Using if else)

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter gender (M/F): ";
    cin >> ch;

    if(ch == 'm' || ch == 'M')
    {
        cout << "MALE";
    }
    else if(ch == 'f' || ch == 'F')
    {
        cout << "FEMALE";
    }
    else
    {
        cout << "Wrong Input";
    }
    return 0;
}