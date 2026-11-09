#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout<<"Generic shape"<<endl;
    }
};
class Circle : public Shape
{
public:
    void draw() override
    {
        cout<<"Circle";
    }
};
int main()
{
    Shape s;
    Circle c;
    //Shape *s = new Circle();
    Shape *ptr, *ptr1;
    ptr=&s;
    ptr1=&c;
    ptr->draw();
    ptr1->draw();
    return 0;
}
