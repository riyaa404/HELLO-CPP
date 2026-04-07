// Do not use friend function.

#include <iostream>
using namespace std;

class Number
{
    private:
        int x,y;
        void scan();
    public:
        void print();
        //Do not add your own member function.
};

void Number::scan()
{
    cin >> x >> y;
}
void Number::print()
{
    scan();
    cout << "\nOutput\n";
    cout << "x = " << x << " , y = " << y << "\n";
}

int main()
{
    //Scan and print data for 2 objects.

    Number num1, num2;

    cout << "\nEnter x and y for num1 : ";
    num1.print();
    cout << "\nEnter x and y for num2 : ";
    num2.print();

    return 0;
}

