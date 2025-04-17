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
class SomtumThai: public Somtum{
  bool isPeanut;
  public:
  SomtumThai():isPeanut(false){}
  SomtumThai(double p,int cn,bool ip):Somtum(p,cn),isPeanut(ip){}
  void setSomtumThaiPeanut(bool ip){
    this->isPeanut = ip;
  }
  bool getSomtumThaiPeanut(){
    return this->isPeanut;
  }
  void showSomtumThai(){
    cout<<"Somtum Thai is price: "<<getSomtumPrice()<<" & amount chilli is: "<<getChilliNum()<<" & peanut is: "<<getSomtumThaiPeanut()<<endl;
  }
};
class SomtumCorn: public Somtum{
  Corn corn;
  bool isSaltedEgg;
    public:
  SomtumCorn():isSaltedEgg(false){}
  SomtumCorn(double p,int cn,Corn c,bool ise):Somtum(p,cn),corn(c),isSaltedEgg(ise){}
  void setSomtumCorn(Corn c){
    this->corn = c;
  }
  void setSomtumCornSaltedEgg(bool ise){
    this->isSaltedEgg = ise;
  }
  Corn getSomtumCorn(){
    return this->corn;
  }
  bool getSomtumCornSaltedEgg(){
    return this->isSaltedEgg;
  }
  void showSomtumCorn(){
    cout<<"Somtum Corn is price: "<<getSomtumPrice()<<" & amount chilli is: "<<getChilliNum()<<" & corn type is: "<<getSomtumCorn().getTypeCorn()<<" & salted egg is: "<<getSomtumCornSaltedEgg()<<endl;
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
    SomtumThai *stt = new SomtumThai[2];
    stt[0].setSomtumPrice(50.0);
    stt[0].setSomtunChilliNum(7);
    stt[0].setSomtumThaiPeanut(true);
    stt[1].setSomtumPrice(112.112);
    stt[1].setSomtunChilliNum(112);
    stt[1].setSomtumThaiPeanut(false);
    for(int i(0);i<2;i++){
      stt[i].showSomtumThai();
    }

    SomtumCorn *stc = new SomtumCorn[2];
    stc[0].setSomtumPrice(50.0);
    stc[0].setSomtunChilliNum(7);
    stc[0].setSomtumCorn(c[0]);
    stc[0].setSomtumCornSaltedEgg(true);
    stc[1].setSomtumPrice(112.112);
    stc[1].setSomtunChilliNum(112);
    stc[1].setSomtumCorn(c[1]);
    stc[1].setSomtumCornSaltedEgg(false);
    for(int i(0);i<2;i++){
      stc[i].showSomtumCorn();
    }
    cout<<"Somtum Corn is price: "<<stc[0].getSomtumPrice()<<" & amount chilli is: "<<stc[0].getChilliNum()<<" & corn type is: "<<stc[0].getSomtumCorn().getTypeCorn()<<" & salted egg is: "<<stc[0].getSomtumCornSaltedEgg()<<endl;
    cout<<"Somtum Corn is price: "<<stc[1].getSomtumPrice()<<" & amount chilli is: "<<stc[1].getChilliNum()<<" & corn type is: "<<stc[1].getSomtumCorn().getTypeCorn()<<" & salted egg is: "<<stc[1].getSomtumCornSaltedEgg()<<endl;
    cout<<"Somtum Corn is price: "<<stc[0].getSomtumPrice()<<" & amount chilli is: "<<stc[0].getChilliNum()<<" & corn type is: "<<stc[0].getSomtumCorn().getTypeCorn()<<" & salted egg is: "<<stc[0].getSomtumCornSaltedEgg()<<endl;
    cout<<"Somtum Corn is price: "<<stc[1].getSomtumPrice()<<" & amount chilli is: "<<stc[1].getChilliNum()<<" & corn type is: "<<stc[1].getSomtumCorn().getTypeCorn()<<" & salted egg is: "<<stc[1].getSomtumCornSaltedEgg()<<endl;
    delete[] stc;
    delete[] c;
    delete[] cs;
    delete[] st;
    delete[] stt;
    cout<<"End of program."<<endl;
    return 0;
};
