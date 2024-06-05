#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "Vehicle Constructor" << endl;
    }
    ~Vehicle()
    {
        cout << "Vehicle Destructor" << endl;
    }
    virtual void display() const
    {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
    }
    ~Car()
    {
    }
    void display() const override
    {
        cout << "This is a car" << endl;
    }
};

class Bike : public Vehicle
{
public:
    Bike()
    {
    }
    ~Bike()
    {
    }
    void display() const override
    {
        cout << "This is a bike" << endl;
    }
};

int main()
{
    Vehicle *v1 = new Car();
    Vehicle *v2 = new Bike();

    v1->display();
    v2->display();

    delete v1;
    delete v2;

    return 0;
}