// Q2.WAP to explain copy constructor while passing parameter by value.

#include <iostream>
using namespace std;

class Number
{
	public:
		int x, y;
		
		Number()
    	{
        	x = 10;
        	y = 20;
        	cout << "In default constructor\n";
    	}
		
		Number(Number &temp)
		{
			cout << "\nIn copy constructor\n";
			x = temp.x + 5;
			y = temp.y + 5;
		}
		~Number()
		{
			cout << "\nDestructor executed";
		}
	
};

//num1 = temp1 (copy constructor gets executed)
void function(Number temp1, Number &temp2, Number *temp3)
{
	cout << "\nParameter passing by value\n";
	cout << "x = " << temp1.x << " y = " << temp1.y << "\n";
	
	cout << "\nParamter passing by reference\n";
	cout << "x = " << temp2.x << " y = " <<	temp2.y << "\n";
	
	cout << "\nParameter passing by address\n";
	cout << "x = " << temp3->x << " y = " << temp3->y << "\n";
	
}

int main()
{
	Number num1, num2, num3;
	
	function(num1, num2, &num3);
	
	return 0;
}