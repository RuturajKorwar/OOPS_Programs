/*Write a C++ program to demonstrate multilevel inheritance. Define a base class Person with a member function display1().
Derive a class Student from Person with a member function display2(). Further derive a class ITStudent from Student with a
member function display3(). Create objects of all three classes*/

#include<iostream>
using namespace std;
class Person
{
public:
    void display1()
    {
        cout<<"Person class"<<endl;
    }
};
class Student : public Person
{
public:
    void display2()
    {
        cout<<"Student class"<<endl;
    }
};
class ITStudent : public Student
{
public:

    void display3()
    {
        cout<<"ITStudent class"<<endl;
    }
};
int main()
{
    Person p;
    Student s;
    ITStudent i;
    p.display1();
    s.display1();
    s.display2();
    i.display1();
    i.display2();
    i.display3();
    return 0;

}
