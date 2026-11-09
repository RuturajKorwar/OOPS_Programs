/* Write a c++ code with classes Abstract Class vehicle and derived class car and bike to display features of vehicle
such as number_of_wheels, mileage, fuel_capacity */

#include<iostream>
using namespace std;
class vehicle
{
public:
    int number_of_wheels = 2;
    float mileage = 30;
    float fuel_capacity = 10;
    virtual void display() = 0;
};

class car : public vehicle
{
public:
    void display() override
    {
        number_of_wheels = 4;
        mileage = 20;
        fuel_capacity = 40;
        cout << "Car Features:" << endl;
        cout << "Number of wheels: " << number_of_wheels << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Fuel capacity: " << fuel_capacity << endl;
    }
};

class bike : public vehicle
{
public:
    void display() override
    {
        number_of_wheels = 2;
        mileage = 30;
        fuel_capacity = 10;
        cout << "\nBike Features:" << endl;
        cout << "Number of wheels: " << number_of_wheels << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Fuel capacity: " << fuel_capacity << endl;
    }
};

int main()
{
    vehicle *v, *v1;
    car c;
    bike b;
    v = &c;
    v1 = &b;
    v->display();
    v1->display();
    return 0;
}
