// WAP to create an array of 8 integers, store its base address in pointer p.
// Scan 8 integers using p. Print addition of all integers using p.

#include <iostream>
using namespace std;
int main()
{
	int arr[8];
	int *p = arr;
	
	cout << "Enter elements of array : ";
	for(int i=0; i<=7; i++)
	{
		cin >> *(p+i);
		
	}
	
	int sum = 0;
	for(int i=0; i<=7; i++)
	{
		sum = sum + *(p+i);
	}
	
	cout << "\nAddition of all integers : " << sum;
	return 0;;
}
