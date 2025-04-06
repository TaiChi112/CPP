#include <iostream>
#include <string>
using namespace std;
class Corn{
    string type;
    public:
    Corn():type("unknown"){}
    Corn(string t):type(t){}
    void setTypeCorn(string t){
        this->type = t;
    }
    string getTypeCorn(){
        return this->type;
    }
    void showTypeCorn(){
        cout<<"Type of Corn is: "<<getTypeCorn()<<endl;
    }
};
class CornStorage{
  int num;
  Corn *storage;
  public:
  CornStorage():num(0){}
  CornStorage(int n){
    storage = new Corn[n];
  }
  ~CornStorage(){delete storage;}
  void setNumCornStorage(int n){
    this->num = n;
  }
  int getNumCornStorage(){
    return this->num;
  }
  void showNumCornStorage(){
    cout<<"Capacity of corn storage: "<<getNumCornStorage()<<endl;
  }

};
class Somtum{
  double price;
  int chilliNum;
  public:
  Somtum():price(35),chilliNum(3){}
  Somtum(double p,int cn):price(p),chilliNum(cn){}
  void setSomtumPrice(double p){
      if(p>0){
          this->price = p;
      }else{
          this->price = 35;
      }
  }
  void setSomtunChilliNum(int cn){
    if(cn>0){
          this->chilliNum = cn;
      }else{
          this->chilliNum = 3;
      }
  }
  double getSomtumPrice(){
    return this->price;
  }
  int getChilliNum(){
    return this->chilliNum;
  }
  void showSomtum(){
    cout<<"Somtum is price: "<<getSomtumPrice()<<" & amount chilli is: "<<getChilliNum()<<endl;
  }
};
int main(){
    Corn *c = new Corn[2];
    c[0].setTypeCorn("America");
    c[1].setTypeCorn("Thailand");
    for(int i(0);i<2;i++){
        c[i].showTypeCorn();
    }
    CornStorage *cs = new CornStorage[1];
    cs[0].setNumCornStorage(2);
    cs[0].showNumCornStorage();

    Somtum *st = new Somtum[2];
    st[0].setSomtumPrice(50.0);
    st[1].setSomtumPrice(112.112);
    st[0].setSomtunChilliNum(7);
    st[1].setSomtunChilliNum(112);
    for(int i(0);i<2;i++){
      st[i].showSomtum();
    }

    return 0;
};
