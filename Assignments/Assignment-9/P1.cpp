// Do not use friend function.

#include <iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		void scan();
		void print();
	//Do not add your own member function.
};

void Number::scan()
{
    cout << "Enter x and y : ";
    cin >> x >> y;
}
void Number::print()
{
    cout << "x = " << x << "    y = " << y << "\n";
}
int main()
{
	//Scan and print data for 2 objects.

    Number num1, num2;

    cout << "\n--- Object 1 ---\n";
    num1.scan();
    cout << "\n--- Object 2 ---\n";
    num2.scan();

    cout << "\n--- Object 1 ---\n";
    num1.print();
    cout << "\n--- Object 2 ---\n";
    num2.print();

    return 0;
}
