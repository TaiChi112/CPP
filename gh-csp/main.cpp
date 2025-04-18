#include <iostream>

using namespace std;
class Stove{
    int type;// 1 gas 2 eletric 3 Electromagnet 4 infarate
    public:
    Stove(): type(1){}
    Stove(int t):type(t){}
    ~Stove(){}
        
};
class Pot{
    double price;
    int width,height,num;
    Stove *stove;
    public:
    Pot():price(299),width(18),height(8),num(1){
        stove = new Stove[num];
        stove[0] = Stove(1);
    }
    Pot(double p,int w,int h, int n): price(p), width(w), height(h),num(n){
        stove = new Stove[num]
    }
    ~Pot(){}
        
};
class SteamingPot:public Pot{
    int layer;
    public:
    SteamingPot():layer(1),Pot(450,25,30,1){
        Stove *stove = new Stove[1];
        stove[0] = new Stove(1);
    }
    SteamingPot(int ly): layer(ly), Pot() {}
    ~SteamingPot(){}
};  
class NoodlePot:public Pot{
    int compartment;
    public:
    NoodlePot(int cpmt): compartment(cpmt) {}
    ~NoodlePot(){}
    
        
};
int main(){
    cout << "Hello, World!" << endl;
    return 0;
}    