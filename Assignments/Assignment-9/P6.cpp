// Use friend function

#include <iostream>
using namespace std;

class Digit;
class Number
{
	int x,y;
    friend class Digit;
};

class Digit
{
	public:
		void getdata()
		{
			Number obj;
			//scan and print obj here.

            cout << "Enter x and y: ";
            cin >> obj.x >>obj.y;

            cout << "\nOutput : \nx = " << obj.x << ", y = " << obj.y;
		}
};
	
int main()
{
	Digit D;
	D.getdata();
	
   return 0;
}