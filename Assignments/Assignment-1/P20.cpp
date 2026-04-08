// Q20.Scan a 3 digit number from user.Print its each digit separately.

#include <iostream>
using namespace std;
int main()
{
    int num, digi1, digi2, digi3;
    cout << "Enter 3 Digit Number : ";
    cin >> num;

    digi1 = num / 100;       //hunderds
    digi2 = (num / 10) % 10; //tens
    digi3 = num % 10;        //ones

    cout << "Digits are " << digi1 << " " << digi2 << " " << digi3;
    return 0;
}