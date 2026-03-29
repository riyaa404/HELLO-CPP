// 4.Scan array of 6 characters from user and print them. ([] notation)

#include <iostream>
using namespace std;
int main()
{
	char arr[6];
	int i;
	
	// Input
	cout << "Enter 6 charaters of array below\n\n";
	for(i=0; i<=5; i++)
	{
		cout << "Element " << i+1 << " : ";
		cin >> arr[i];
	}
	
	// output
	cout << "\nArray : ";
	for(i=0; i<=5; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
