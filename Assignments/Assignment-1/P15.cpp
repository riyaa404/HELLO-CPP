// Q15.Scan length and width of a rectangle from user.Check if it is square or rectangle.

#include <iostream>
using namespace std;
int main()
{
    int len, width;

    cout << "Enter length : ";
    cin >> len;
    cout << "Enter width : ";
    cin >> width;

    if(len == width)
    {
        cout << "\nIt is Square";
    }
    else
    {
        cout << "\nIt is Rectangle";

    }
    
    return 0;
}