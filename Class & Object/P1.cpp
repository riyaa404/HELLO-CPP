// function definition inside and outside the class
// public and private
// non-static and independent functions

#include <iostream>
using namespace std;

class Number
{
	// if first it's private and then it's public
	
	private:
		int x, y;	// Now this x, y cannot be access outside private in class Number
		void display()
		{
			cout << x << y;
		}
		
	public:
		int a, b;	// that's why we have to define anotther variable a, b in public
		void show()
		{
			cout << "\nShow from Class Number : ";
			cout << a << " " << b;
		}
};
Number scanNumber();
int main()
{
	Number num1, num2;
	
	num1 = scanNumber();	// independent or non-member function call
	num2 = scanNumber();
	
// can access public member function outside the class
	num1.show();
	num2.show();	// static member function call

// cannot access private member function outside the class
//	num1.display();
//	num2.display();
	
	return 0;
}
Number scanNumber()
{
	Number temp;
	cout << "Enter x : ";
	cin >> temp.a;
	cout << "Enter y : ";
	cin >> temp.b;
	
	return temp;
}
