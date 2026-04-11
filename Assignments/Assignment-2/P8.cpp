// Q8.Write a menu driven program to find following 
// -area of circle
// -area of rectangle
// -circumference of circle
// -perimeter of rectangle.

#include <iostream>
using namespace std;
int main()
{
    float const pi = 3.14;
    float radius, len, width;
    int choice;

    cout << "--- Menu ---\n";
    cout << "\n1.Area of circle";
    cout << "\n2.Area of rectangle";
    cout << "\n3.Circumference of circle";
    cout << "\n4.perimeter of rectangle";

    cout << "\nEnter Choice (1-4) : ";
    cin >> choice;

    switch(choice)
    {
        case 1 :
            cout << "\nEnter radius : ";
            cin >> radius;
            cout << "Area of circle : " << (pi*radius*radius);
            break;

        case 2 :
            cout << "\nEnter length : ";
            cin >> len;
            cout << "Enter width  : ";
            cin >> width;
            cout << "Area of rectangle : " << (len*width);
            break;

        case 3 :
            cout << "\nEnter radius : ";
            cin >> radius;
            cout << "Circumference of circle : " << (2*pi*radius);
            break;

        case 4 :
            cout << "\nEnter length : ";
            cin >> len;
            cout << "Enter width  : ";
            cin >> width;
            cout << "\nPerimeter of rectangle : " << 2*(len+width);
            break;

        default :
            cout << "\nInvalid Choice";
    }

    return 0;
}