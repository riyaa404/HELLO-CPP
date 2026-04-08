// Use friend function
//using calculate function find base^power.
//print answer in main().

#include <iostream>
using namespace std;
class Calc;

class Base
{
	int b;
	//do not add member function here.
    friend class Calc;
    friend int main();
};
class Power
{
	int p;
	//do not add member function here.
    friend class Calc;
    friend int main();
};
class Calc
{
	private:
		int calculate(Base tempBase, Power tempPower)
        {
            int res = 1;
            for(int i=1; i<=tempPower.p; i++)
            {
                res *= tempBase.b;
            }
            return res;
        }
		//do not add member function here.
        friend int main();
};

int main()
{
	Base base;
	Power power;
	Calc obj;

    cout << "Enter Base : ";
    cin >> base.b;

    cout << "Enter Power : ";
    cin >> power.p;

    cout << "\nResult : " << obj.calculate(base,power);
    return 0;
}