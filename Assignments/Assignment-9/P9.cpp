// Use friend function
//using calculate function find base^power
//print answer in main()

#include <iostream>
using namespace std;
class Calc;

class Base
{
	int b;

    public:
        void getBase()
        {
            cout << "Enter Base : ";
            cin >> b;
        }
        friend class Calc;
};
class Power
{
	int p;

    public:
        void getPower()
        {
            cout << "Enter Power : ";
            cin >> p;
        }
        friend class Calc;
};

class Calc
{
	public:
	    int calculate(Base tempBase, Power tempPower)
        {
            int res = 1;

            for(int i=1; i<=tempPower.p; i++)
            {
                res *= tempBase.b;
            }
            return res;
        }
};

int main()
{
	Base base;
	Power power;
	Calc obj;

    base.getBase();
    power.getPower();
    
    cout << "\nResult : " << obj.calculate(base, power);
    return 0;
}