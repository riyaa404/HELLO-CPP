// Q1.WAP to explain constructor and destructor for runtime objects.

#include <iostream>
using namespace std;

class Number
{
	public:
		
		Number()
		{
			cout << "Constructor executed\n";	
		}	
		~Number()
		{
			cout << "Destructor executed\n";
		}
};

int main()
{
	Number *ptr;
	ptr = new Number();
	
	delete ptr;
	return 0;
}