#include <iostream>
using namespace std;

class Stove {
    int type; // 1 gas, 2 electric, 3 electromagnetic, 4 infrared
public:
    Stove() : type(1) {}
    Stove(int t) : type(t) {}
    ~Stove() {}
};

class Pot {
    double price;
    int width, height, num;
    Stove *stove;
public:
    Pot() : price(299), width(18), height(8), num(1) {
        stove = new Stove[num];
        stove[0] = Stove(1);
    }
    Pot(double p, int w, int h, int n) : price(p), width(w), height(h), num(n) {
        stove = new Stove[num];
        for (int i = 0; i < num; ++i) {
            stove[i] = Stove(1); // Default to gas stove type
        }
    }
    ~Pot() {
        delete[] stove; // Proper cleanup of dynamically allocated memory
    }
};

class SteamingPot : public Pot {
    int layer;
public:
    SteamingPot() : Pot(450, 25, 30, 1), layer(1) {}
    SteamingPot(int ly) : Pot(), layer(ly) {}            
    ~SteamingPot() {}
};

class NoodlePot : public Pot {
    int compartment;
public:
    NoodlePot(int cpmt) : Pot(), compartment(cpmt) {}
    ~NoodlePot() {}
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}.  
