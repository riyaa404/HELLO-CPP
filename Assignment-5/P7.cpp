// 7.Scan array of 8 integers from user.Write menu driven program for following activities.
// -find largest value
// -find smallest value
// -Scan a number from user and check if it is present in the array or not.

#include <iostream>
using namespace std;
int main()
{
	int arr[8];
	int i, choice;
	
	// Input
	cout << "Enter 8 integers of array below\n\n";
	for(i=0; i<=7; i++)
	{
		cout << "Element " << i+1 << " : ";
		cin >> arr[i];
	}
	
	//menu
	cout << "\n1.Find largest value";
	cout << "\n2.Find smallest value";
	cout << "\n3.To check if number is present in the array or not";
	
	cout << "\n\nEnter Choice : ";
	cin >> choice;

	int max = arr[0], min = arr[0], key, flag=false;
	switch(choice)
	{
		case 1:
			for(i=0; i<=7; i++)
			{
				
				if(max < arr[i])
				{
					max = arr[i];	
				}
			}
			cout << "\nLargest Value : " << max;
			break;
			
		case 2:
			for(i=0; i<=7; i++)
			{
				if(min > arr[i])
				{
					min = arr[i];
				}
			}
			cout << "\nSmallest Value : " << min;
			break;
			
		case 3:
			cout << "\nEnter Number to check if present or not :  ";
			cin >> key;
			
			for(i=0; i<=7; i++)
			{
				if(key == arr[i])
				{
					flag = 1;
					break;
				}	
			}
			if(flag == 1)
					cout << "\nNumber found at index " << i << " in array";
				else
					cout << "\nNumber not Found in array";
			break;
			
		default:
			cout << "\nInvalid Choice Entered";
			cout << "\nTry again....";
	}
	return 0;
}
