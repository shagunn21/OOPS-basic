#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void makeSound() {
        cout << "Animal is making a sound" << endl;
    }
};

class Cow : public Animal {
    public:
    void makeSound() override {
        cout << "Cow making sound moooo" << endl;
    }
};

class Dog : public Animal {
    public:
    void makeSound() override {
        cout << "Dog making sound bow bow" << endl;
    }
};

int main() {
    Animal* myAnimal = new Animal();
    Dog* myDog = new Dog();
    Cow* myCow = new Cow();

    myAnimal->makeSound();
    myCow->makeSound();
    myDog->makeSound();

    delete myAnimal;
    delete myCow;
    delete myDog;

    return 0;
}