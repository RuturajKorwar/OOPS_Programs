/*Write a C++ program to define a class numbers with two private data members num1 and num2. Define a member function setdata()
 to initialize these members and a friend function add() to calculate and return their sum.
 Demonstrate how a friend function can access the private data members of a class*/

#include<iostream>
using namespace std;
class numbers
{
    int num1,num2;
public:
    void setdata(int a,int b);
    friend int add(numbers N);
};
void numbers::setdata(int a,int b)
{
    num1=a;
    num2=b;
}
int add(numbers N)
{
    return (N.num1+N.num2);
}
int main()
{
    numbers N1;
    N1.setdata(10,20);
    cout<<"Sum = "<<add(N1);
    return 0;
}
