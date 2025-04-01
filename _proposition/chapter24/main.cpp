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
    return 0;
};
