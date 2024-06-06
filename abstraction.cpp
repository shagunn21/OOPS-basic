#include <iostream>
using namespace std;

class Shape {
    public:
    virtual double area() const = 0;

    void display() const {
        cout << "shape" << endl;
    }
};
class Circle : public Shape {
    private:
    double radius;
    public:
    Circle(double r) : radius(r) {

    }
    double area() const override {
        return 3.14 * radius * radius;
    }
};
int main() {
    Circle c(5.0);
    cout << c.area() << endl;
    c.display();
}