// function definition inside and outside the class
// public and private
// non-static and independent functions

#include <iostream>
using namespace std;

class Number
{
	// if first it's public and then it's private
	
	public:
		int x, y;	// Now this x, y can be accessible throughout the class Number unlike private
		void show()
		{
			cout << "\nShow from Class Number : ";
			cout << x << " " << y;
		}
		
	private:
		void display()
		{
			cout << x << y;	// variables declared in public are accessible in private as well
		}
};
Number scanNumber();
int main()
{
	Number num1, num2;
	
	num1 = scanNumber();	//independent function call statement
	num2 = scanNumber();
	
// public non-static member function
	num1.show();	// statice member function call statement
	num2.show();

// private non-static member function
//	num1.display();
//	num2.display();
	
	return 0;
}
Number scanNumber()
{
	Number temp;
	cout << "Enter x : ";
	cin >> temp.x;
	cout << "Enter y : ";
	cin >> temp.y;
	
	return temp;
}
