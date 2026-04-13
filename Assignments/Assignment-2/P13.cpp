// Q15.You are an employee in a Company.Your task is to calculate bonus for diwali and print
// total salary(basic salary+bonus).Bonus should be calculated by using following conditions.
// -if salary is more than 15000/-, bonus will be 20% of salary.
// -if salary is less than or equal to 15000/-, bonus will be 25% of salary.
// Print toal salary of employee for the month of Diwali.Input from user is basic salary.

#include <iostream>
using namespace std;
int main()
{
    float salary, bonus, total_sal;

    cout << "Enter your salary: ";
    cin >> salary;

    if(salary > 15000)
    {
        bonus = salary * 0.20;
    }
    else
    {
        bonus = salary * 0.25;
    }

    total_sal  = salary + bonus;

    cout << "\nBonus : " << bonus;
    cout << "\nTotal Salary : " << total_sal;

    return 0;
}