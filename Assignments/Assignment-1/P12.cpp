// Q12.Scan radius of a circle from user.Find area and circumference of circle.
// If area of circle is greater than 50,print how much it is greater than 50.
// If area is smaller than 50,print how much it is smaller than 50.
// Print every message properly.

#include <iostream>
using namespace std;
int main()
{
    const float PI = 3.146;
    float radius, area, circum;
    
    cout << "Enter radius of circle : ";
    cin >> radius;

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    cout << "\nArea : " << area;
    cout << "\nCircumference : " << circum;

    if(area > 50)
    {
        cout << "\nArea is greater than 50 by " << (area-50);
    }
    else if(area < 50)
    {
        cout << "\nArea is smaller than 50 by " << (50-area);
    }
    else
    {
        cout << "\nArea is equal to 50";
    }

    return 0;
}