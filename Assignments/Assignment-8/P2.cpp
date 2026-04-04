// class Time
// {
// 	public:
// 		int hour,min;
// }
// Create 2 objects of class Time.Scan their data.
// Convert these objects in total minutes.Decide which one is greater.
// Do not add any member function.

#include <iostream>
using namespace std;

class Time
{
	public:
		int hour,min;
};

Time scan()
{
    Time temp;

    cout << "Enter hour : ";
    cin >> temp.hour;

    cout << "Enter min : ";
    cin >> temp.min;

    return temp;
}

int convertMin(Time temp)
{
    return temp.hour * 60 + temp.min;
}

void compareMin(int min1, int min2)
{
    if(min1 > min2)
    {
        cout << "Object 1 is greater" << "\nTotal Minutes : " << min1;
    }
    else if(min1 < min2) 
    {
        cout << "\nObject 2 is greater" << "\nTotal Minutes : " << min2;   
    }
    else
    {
        cout << "\nBoth times are equal";
    }
}

int main()
{
    Time t1, t2;

    cout << "\n--- Object 1 ---\n";
    t1 = scan();
    cout << "\n--- Object 2 ---\n";
    t2 = scan();

    int min1 = convertMin(t1);
    int min2 = convertMin(t2);

    compareMin(min1, min2);
    return 0;
}