// Q18.Scan salary of a person.If salary is greater than 10000, 
// add 5% bonus in the salary.Else add 8% bonus in the salary. Print final salary.

#include <iostream>
using namespace std;
int main()
{
    int salary, final_sal;

    cout << "Enter salary : ";
    cin >> salary;

    if(salary > 10000)
    {
        final_sal = salary + (salary * 0.05);
    }
    else
    {
        final_sal = salary + (salary * 0.08);
    }

    cout << "Final Salary including Bonus : " << final_sal;
    return 0;
}