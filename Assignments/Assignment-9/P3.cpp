// Do not use friend function.

#include <iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		void scan()
        {
            cout << "Enter x and y: ";
			cin >> x >> y;
        }
		void print()
        {
            cout << "\nx = " << x << ", y = " << y << "\n";
        }
	public:
		static void scanfun(Number &);
		static void printfun(Number);
	//Do not add your own member function.
	//scan x and y in scan() function only
	//print x and y in print() function only.
};

void Number::scanfun(Number &temp)
{
    temp.scan();
}
void Number::printfun(Number temp)
{
	temp.print();
}

int main()
{
	//Scan and print data for 2 objects.

    Number num1, num2;

    Number::scanfun(num1);
    Number::scanfun(num2);

    Number::printfun(num1);
    Number::printfun(num2);
    
    return 0;

}