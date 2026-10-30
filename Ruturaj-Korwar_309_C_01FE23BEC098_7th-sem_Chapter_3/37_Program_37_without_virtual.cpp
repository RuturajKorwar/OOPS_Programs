/*Multiple Inheritance, function overriding
C:\Users\HP\Downloads\OOPS_using_C++\Chapter_3\37_Program_37_without_virtual.cpp|26|error: request for member 'i' is ambiguous|*/
#include<iostream>
using namespace std;
class A
{
public:
    int i;
};
class B : public A
{
public:
    int j;
};
class C : public A
{
public:
    int k;
};
class D : public B, public C
{
public:
    int sum;
};
int main()
{
    D ob1;
    ob1.i=10;
    ob1.j=20;
    ob1.k=30;
    ob1.sum=ob1.i+ob1.j+ob1.k;
    cout<<ob1.sum;
}
