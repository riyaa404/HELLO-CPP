// class Number
// 	{
// 		public:
// 			int x;
// 			int y;
// 	};
// Create 2 objects in main().Scan their data and print

#include <iostream>
using namespace std;

class Number
{
	public:
		int x, y;

        void scan()
        {
            cout << "\nEnter x and y : ";
            cin >> x >> y;
        }
        void print()
        {
            cout << "x = " << x << "\ny = " << y << "\n";
        }
};

int main()
{
    Number num1, num2;

    cout << "\n--- Object 1 ---\n";
    num1.scan();
    num1.print();

    cout << "\n--- Object 2 ---\n";
    num2.scan();
    num2.print();

    return 0;
}