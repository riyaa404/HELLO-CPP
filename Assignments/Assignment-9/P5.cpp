// Do not use friend function.
// Calculate base^power in independent function calc().
// Print result in main().

#include <iostream>
using namespace std;

class Base
{
	private:
		int b;

	public:
        //You can add your own member functions
        void scanBase()
        {
            cout << "Enter Base : ";
            cin >> b;
        }
		int getBase()
        {
            return b;
        }
};
class Power
{
	private:
		int p;

	public:
		//You can add your own member functions
        void scanPower()
        {
            cout << "Enter Power : ";
            cin >> p;
        }
        int getPower()
        {
            return p;
        }
};

int calc(int tempb, int tempp)
{
    int res = 1;
    for(int i = 1; i<=tempp; i++)
    {
        res = res * tempb;
    }
    return res;
}

int main()
{
	Base base;
	Power power;

    base.scanBase();
    power.scanPower();

    int res = calc(base.getBase(), power.getPower());
    cout << "\nResult : " << res;

    return 0;
}
