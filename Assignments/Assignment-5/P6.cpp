// 6.Keep scanning a number from user.Print addition of positive and negative numbers seperately.
	
#include <iostream>
using namespace std;
int main()
{
	int num=1, pnum=0, nnum=0;
		
	while(num != 0)
	{
		cout << "Enter Number : ";
		cin >> num;
		if(num>0)
		{
			pnum = pnum + num;
		}
		else
		{
			nnum = nnum + num;
		}
	}
	cout << "\nAddition of Positive Numbers : " << pnum;	
	cout << "\nAddition of Negative Numbers : " << nnum;
	return 0;
}
