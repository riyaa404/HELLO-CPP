// Use friend function

#include <iostream>
using namespace std;

class Number
{
	private:
		int x;
		void scandata();
		void printdata();

        friend int main();
};

void Number::scandata()
{
    cout << "Enter x : ";
    cin >> x;
}
void Number::printdata()
{
    cout << "\nx = " << x;
}

int main()
{
	//Scan and print data of one object of Number.
    Number obj;
    
    obj.scandata();
    obj.printdata();

    return 0;
}