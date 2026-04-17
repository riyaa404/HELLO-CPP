// 1.WAP to understand working of mew operator

#include <iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr = new int();
	
	cout << "Enter integer : ";
	cin >> *ptr;
	
	cout << "\nEntered integer : " << *ptr;
	delete ptr;
	
	return 0;
}
