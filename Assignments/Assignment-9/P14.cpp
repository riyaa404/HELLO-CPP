// 3.For given class Student,Scan and print data of 2 students.
// Draw stackframe.

#include <iostream>
using namespace std;

class Student
{
	public:
		char stdname[20];
		int age;
		//Do not add any member function.
		//Write whole code in main() only.
};

Student getData()
{
    Student temp;

    cout << "Enter Name : ";
    cin >> temp.stdname;
    cout << "Enter age  : ";
    cin >> temp.age;

    return temp;
}
void display(Student& temp)
{
    cout << "Name : " << temp.stdname;
    cout << "\nAge  : " << temp.age << "\n";
}

int main()
{
    Student s1, s2;

    cout << "\n--- Student 1 ---\n";
    s1 = getData();
    cout << "\n--- Student 2 ---\n";
    s2 = getData();

    cout << "\n--- Details of Student 1 ---\n";
    display(s1);
    cout << "\n--- Details of Student 2 ---\n";
    display(s2);

    return 0;
}