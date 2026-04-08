// Q16.Scan marks of 4 subjects of a student. If average of 4 subjects 
// is greater than 75, print message DISTINCTION,else print message "STUDY MORE".

#include <iostream>
using namespace std;
int main()
{
    int sub1, sub2, sub3, sub4;

    cout << "Enter marks of 4 subjects : ";
    cin >> sub1 >> sub2 >> sub3 >> sub4;
    
    // declare avg as flaot datatype (don't repeat same mistake)
    float avg = (sub1 + sub2 + sub3 + sub4) / 4.0;
    cout << "\nAverage : " <<avg;

    if(avg > 75)
    {
        cout << "\nDISTINCTION";
    }
    else
    {
        cout << "\nSTUDY MORE";
    }

    return 0;
}