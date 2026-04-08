// Do not use friend function.

#include <iostream>
using namespace std;

class Number
{
	int x,y;
	void addition(Number, Number);
	public:
		void scan();
		void print();
		void myfun(Number, Number);		
	
	// Do not add your own member function
};

void Number::addition(Number obj1, Number obj2)
{
	x = obj1.x + obj2.x;
	y = obj1.y + obj2.y;
}
void Number::scan()
{
	cout << "Enter x and y : ";
	cin >> x >> y;
}
void Number::print()
{
	cout << "\nAddition : \nx = " << x << ", y = " << y;
}
void Number::myfun(Number obj1, Number obj2)
{
	addition(obj1, obj2);
}

int main()
{
	//Perform T3 = T1 + T2 for given class Number

	Number T1, T2, T3;

	T1.scan();
	T2.scan();
	T3.myfun(T1, T2);
	T3.print();

	return 0;
}