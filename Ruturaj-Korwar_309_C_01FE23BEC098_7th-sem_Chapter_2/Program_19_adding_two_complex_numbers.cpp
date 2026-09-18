/*Define class complex with members real and imaginary, also define function to setData() to initialize the members,
print() to display values and addnumbers() that adds two complex objects*/

#include<iostream>
using namespace std;
class complex
{
private:
    int real,imaginary;
public:
    void setData()
    {
        cout<<"Enter real and imaginary number:";
        cin>>real>>imaginary;
    }
    void addnumbers(complex comp1,complex comp2)
    {
        real=comp1.real+comp2.real;
        imaginary=comp1.imaginary+comp2.imaginary;
    }
    void print()
    {
        cout<<"Sum="<<real<<"+"<<imaginary<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setData();
    c2.setData();
    c3.addnumbers(c1,c2);
    c3.print();
    return 0;
}
