/*Define class Rectangle with members width and height. also define function to set_values (w,l) to initialize the members,
area() to calculate area, Demonstrate class Rectangle for two objects*/

#include<iostream>
using namespace std;
class Rectangle
{
private:
    int width,height;
public:
    void set_values(int,int);
    int area()
    {
        return width*height;
    }

};

void Rectangle :: set_values(int w,int l)
    {
     width=w;
     height=l;
    }
int main()
{
    Rectangle r1,r2;
    r1.set_values(5,5);
    r2.set_values(10,10);
    cout<<"Area= "<<r1.area()<<endl;
    cout<<"Area= "<<r2.area()<<endl;
    return 0;
}
