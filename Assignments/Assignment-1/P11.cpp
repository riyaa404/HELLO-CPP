// Q11.Scan length and width of a rectangle , find area and perimeter of rectangle.
// If area is greater than 100, print message "Big rectangle" else print message "Small Rectangle"

#include <iostream>
using namespace std;
int main()
{
    int len, width, area, peri;
    
    cout << "Enter length : ";
    cin >> len;
    cout << "Enter width : ";
    cin >> width;

    area = len * width;
    peri = 2 * (len + width); //do not forget to put multiplication sign

    cout << "\nArea : " << area;
    cout << "\nPerimeter : " << peri;
    
    if(area > 100)
    {
        cout << "\nBig rectangle";
    }
    else
    {
        cout << "\nSmall Rectangle";
    }

    return 0;
}