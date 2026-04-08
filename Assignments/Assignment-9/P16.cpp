// 5.For given class Student,Scan and print data of 2 students.
// Draw stackframe.

#include <iostream>
using namespace std;

class Student
{
	public:
		char * stdname;
		int age;
		//Do not add any member function.
		//Write whole code in main() only.
};

Student getData(Student& temp)
{

    cout << "\nEnter Details\n";

    cout << "Enter Name : ";
    cin >> temp.stdname;
    cout << "Enter age  : ";
    cin >> temp.age;
}
void display(Student& temp)
{
    cout << "\nStudent Details";
    cout << "\nName : " << temp.stdname;
    cout << "\nAge  : " << temp.age << "\n";
}

int main()
{
    Student s1, s2;

    // Dynamic memory allocation
    s1.stdname = new char[20];
    s2.stdname = new char[20];

    getData(s1);
    getData(s2);
    display(s1);
    display(s2);

    // Free memory
    delete[] s1.stdname;
    delete[] s2.stdname;

    return 0;
}