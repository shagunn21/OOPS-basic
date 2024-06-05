#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Engine {
public:
    void start() const {
        cout << "Starting the engine" << endl;
    }
};

class Wheel {
public:
    void rotate() const {
        cout << "Rotating wheels of car" << endl;
    }
};

class Music {
public:
    void playMusic(const string& song) const {
        cout << "Playing music: " << song << endl;
    }
};

class Car {
private:
    Engine engine;
    vector<Wheel> wheels;
    Music music;

public:
    Car() : wheels(4) {
    }

    void startEngine() {
        engine.start();
    }

    void rotateWheels() {
        for (const Wheel& wheel : wheels) {
            wheel.rotate();
        }
    }
    
    void playRadio(const string& song) {
        music.playMusic(song);
    }

    void drive() {
        startEngine();
        rotateWheels();
    }
};

int main() {
    Car myCar;
    myCar.drive();
    myCar.playRadio("Shake It Off by Taylor Swift");
    return 0;
}
