// 1.Scan array of 10 integers.Copy it in another array. Print both arrays. ([ ] notation)

#include <iostream>
using namespace std;
int main()
{
    int source[10], target[10];
    int i;

    // Input
    cout << "Enter 10 integers of Array below\n";
    for(i=0; i<=9; i++)
    {
        cout << "Element " << i+1 << " : ";
        cin >> source[i];
    }

    // Copy
    for(i=0; i<=9; i++)
    {
        target[i] = source[i];
    }

    // Print both arrays
    cout << "\nSource Array : ";
    for(i=0; i<=9; i++)
    {
        cout << source[i] << " ";
    }

    cout << "\nTarget Array : ";
    for(i=0; i<=9; i++)
    {
        cout << target[i] << " ";
    }
    return 0;
}