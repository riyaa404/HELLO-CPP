// Q7.Repeat Q6 using switch case.

#include <iostream>
using namespace std;
int main()
{
    char gender;
    cout << "Enter gender : ";
    cin >> gender;

    switch(gender)
    {
        case 'f' :
        case 'F' :
            cout << "Female";
            break;

        case 'm' :
        case 'M' :
            cout << "Male";
            break;
            
        default : 
            cout << "Wrong Input";
    }
    return 0;
}