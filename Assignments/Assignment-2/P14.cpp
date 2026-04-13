// Q18.WAP to scan name,age and hometown of an employee.Print all the data.

#include <iostream>
using namespace std;
int main()
{
    char name[20], hometown[50];
    int age;

    cout << "--- Enter employee details ---\n";
    cout << "Enter name : ";
    cin >> &name[0];
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter hometown : ";
    cin >> &hometown[0];

    cout << "\n--- Employee Details ---\n";
    cout << "Name : " << name;
    cout << "\nAge  : " << age;
    cout << "\nHometown : " << hometown;

    return 0;
}