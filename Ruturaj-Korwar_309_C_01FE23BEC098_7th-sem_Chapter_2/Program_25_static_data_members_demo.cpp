/*Write a C++ program to demonstrate the use of a static data member in a class. Create a class demo with a static
data member count and a member function getcount() to increment and display the count. Create three objects of the class and
call the function using each object to show that the static data member is shared among all objects*/

#include<iostream>
using namespace std;
class demo
{
    static int count;
public:
    void getcount()
    {
        cout<<"count : "<<++count<<endl;
    }
};
int demo::count;
int main()
{
    demo d1,d2,d3;
    d1.getcount();
    d2.getcount();
    d3.getcount();
    return 0;
}
