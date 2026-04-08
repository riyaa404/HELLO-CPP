// 4.For given class Student, Scan and print data of 2 students.
// Draw stackframe 

#include <iostream>
using namespace std;

class Student
{
	private:
		char stdname[20];
	    int age;
	public:
		//your member functions here.
        void getData()
        {
            cout << "\nEnter Details";

            cout << "\nEnter name : ";
            cin >> stdname;
            cout << "Enter age : ";
            cin >> age;
        }
        void display()
        {
            cout << "\nStudent Details";
            cout << "\nName : " << stdname;
            cout << "\nAge : " << age << "\n";
        }
};

int main()
{
    Student s1, s2;

    s1.getData();
    s2.getData();

    s1.display();
    s2.display();

    return 0;
}