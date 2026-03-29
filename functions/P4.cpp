// Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

int scanData()
{
    int num;
    cin >> num;
    return num;
}
int largest(int val1, int val2, int val3)
{
    if(val1 > val2 && val1 > val3)
    {
        return val1;
    }
    else if(val2 > val1 && val2 > val3)
    {
        return val2;
    }
    else
    {
        return val3;
    }

}
int main()
{
    int num1, num2, num3;
    cout << "Enter 3 Numbers : ";

    num1 = scanData();
    num2 = scanData();
    num3 = scanData();

    int max = largest(num1, num2, num3);
    cout << "Largest Number : " << max;

    return 0;
}