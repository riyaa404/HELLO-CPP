// Q14.Scan length and width (in feet, 1 foot = 12 inches) of a piece of land.Find its area.
// Your task is to find the total cost of that land using following condition.
// If area is greater than 1000 square feet then caluclate cost with the rate of 
// 6000 Rs per square foot.If area is less than 1000 square feet then calculate
// cost with the rate of 5500/- Rs per square foot.

#include <iostream>
using namespace std;
int main()
{
    int len, width, area, cost;

    cout << "Enter length (in feet) : ";
    cin >> len;
    cout << "Enter width (in feet)  : ";
    cin >> width;

    area = len*width;

    if(area > 1000)
    {
        cost = area*6000;
    }
    else
    {
        cost = area * 5500;
    }

    cout << "Total Cost = " << cost;
    return 0;
}

