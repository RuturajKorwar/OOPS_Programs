/*Write a C++ program to define a class Student with private data members name and age. Define member functions SetData() and
DisplayData() to initialize and display the data members. Define SetData() outside the class using the scope resolution operator.
Create an object of the class and demonstrate the use of these member functions.*/

#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void SetData(string, int);
    void DisplayData()
    {
        cout<<"Name = "<< name << endl;
        cout<<"Age = "<< age;
    }
};

void student::SetData(string name, int age)
{
    this->name=name;
    this->age=age;
}

int main()
{
    student s1;
   /* string name;
    int age;
    cout<<"Enter name: ";
    cin>>name;
    cout <<"Enter age: ";
    cin>>age;*/
    s1.SetData("ru",5);
    s1.DisplayData();
    return 0;
}
