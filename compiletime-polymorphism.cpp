#include <iostream>
using namespace std;


    int add(int a, int b) {
        return a+b;
    }
    double add(double a, double b){
        return a+b;
    }

int main() {
    cout << add(1,2) << endl;
    cout << add(4.0,9.6) << endl;
}