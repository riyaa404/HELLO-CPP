// 5.Scan array of 4 alphabets from user.Print ascii value of each alphabet in array. ([] notation)

#include <iostream>
using namespace std;
int main()
{
	char arr[4];
	int i;
	
	// Input
	cout << "Enter 4 characters of array below\n\n";
	for(i=0; i<=3; i++)
	{
		cout << "Element " << i+1 << " : ";
		cin >> arr[i];
	}
	
	// Print ASCII value of each alphabets
	cout << "\nArray (ascii value) : ";
	for(i=0; i<=3; i++)
	{
		cout << (int)arr[i] << " ";
	}
	return 0;
}
