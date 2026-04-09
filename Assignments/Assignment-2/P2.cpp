// Q2.Repeat Q1 using switch case.Perform experiments.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    switch(num)
    {
        case 1 :
            cout << "ONE";
            break;

        case 2 : 
            cout << "TWO";
            break;

        case 3 :
            cout << "THREE";
            break;
            
        default : 
            cout << "Wrong Input";
    }
    return 0;
}