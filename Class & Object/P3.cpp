// Memory of object and class

#include <iostream>
using namespace std;

class Number
{
	public:
		int x, y;
		
		void show()
		{
			cout << "\nx : " << x  << "	  " << "y : " << y  << "\n";
		}
};

int main()
{
	Number num;
	
	cout << "Enter x : ";
	cin >> num.x;
	cout << "Enter y : ";
	cin >> num.y;
	
	num.show();
		
	//Memory of class Number
	cout << "\nMemory of class Number : " << sizeof(Number);
	
	// Memory of object of class Number
	cout << "\nMemory of object num : " << sizeof(num);
	
	return 0;
}
