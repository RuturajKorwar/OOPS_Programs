/*Write a c++ program to initialize employee ID and Department for a employee in a company */

#include<iostream>
using namespace std;
class employee
{
private:
    int employee_ID;
    string Dept;
public:
    employee()
    {
        cout<<"Enter Employee_ID :";
        cin>>employee_ID;
        cout<<"Enter Department :";
        cin>>Dept;
    }
    void print()
    {
        cout<<"employee ID: "<<employee_ID<<endl;
        cout<<"Dept: "<<Dept<<endl;
    }
};
int main()
{
    employee e1,e2;
    e1.print();
    e2.print();
}
