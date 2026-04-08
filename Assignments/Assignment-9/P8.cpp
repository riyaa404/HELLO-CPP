// Use friend function

#include <iostream>
using namespace std;

class Base;
class Power;
void calc(Base, Power);

class Base
{
	int b;

    public:
        void getBase()
        {
            cout << "Enter base : ";
            cin >> b;
        }
        friend void calc(Base, Power);
};
class Power
{
	int p;

    public :
        void getPower()
        {
            cout << "Enter Power : ";
            cin >> p;
        }
        friend void calc(Base tempBase, Power tempPower);
};
	
void calc(Base tempBase, Power tempPower)
{
	//calculate base^power here, using objects created in main.
    int res = 1;

    for(int i=1; i<=tempPower.p; i++)
    {
        res = res * tempBase.b;
    }
    cout << "\nResult : " << res;
}
	
int main()
{
	Base base;
	Power power;

    base.getBase();
    power.getPower();
    calc(base, power);    

	return 0;
}
