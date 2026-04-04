// class Student
// {
// 	public:
// 		char name[30];
// 		int age;
// 		char hometown[20];
// }
// Scan data of 2 Students from user.And print that data.
// Do not add any member function.

#include <iostream>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		char hometown[20];
};

Student getData()
{
    Student temp;
    
    cout << "Enter name : ";
    cin >> temp.name;
    cout << "Enter age : ";
    cin >> temp.age;
    cout << "Enter hometown : ";
    cin >> temp.hometown;

    return temp;
}

void display(Student temp)
{
    cout << "Name : " << temp.name;
    cout << "\nAge : " << temp.age;
    cout << "\nHometown : " << temp.hometown << "\n";
}

int main()
{
    Student s1, s2;

    cout << "\n--- Enter Data of 1st Student ---\n";
    s1 = getData();
    cout << "\n--- Enter Data of 2nd Student ---\n";
    s2 = getData();

    cout << "\n--- Details of 1st Student ---\n";
    display(s1);
    cout << "\n--- Details of 2nd Student ---\n";
    display(s2);

    return 0;
}