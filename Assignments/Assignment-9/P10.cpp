// Use friend function

#include <iostream>
using namespace std;
class Digit;

class Number
{
	int x;
	//do not add member function here.

    friend class Digit;
};
class Digit
{
	private:
		void show()
		{
			// Scan and print an object of Number here.
			Number num;

            cout << "Enter x : ";
			cin>>num.x;

			cout << "\nx = " << num.x;
		}
	public:
		void disp()
        {
            show();
        }
};
	
int main()
{
    Digit D;
    D.disp();
    
    return 0;
}