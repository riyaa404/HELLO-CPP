// 3.Scan n integers from user, store them. Print addition of all n integers

#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout << "Enter no.of elements of array : ";
	cin >> n;
	
	int *ptr;
	ptr = new int[n];
	
	cout << "Enter " << n << "integers of array : ";
	for(i =0; i<=n-1; i++)
	{
		cin >> *(ptr+i);
	}
	
	int sum=0;
	for(i=0; i<=n-1; i++)
	{
		sum = sum + *(ptr+i);
	}
	
	cout << "\nAddition of all " << n << " integers : " << sum;
	
	delete[] ptr;
	return 0;
}
