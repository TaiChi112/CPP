#ifndef PROTOTRYPE_H
#define PROTOTRYPE_H
#include <iostream>

class Corn
{
    std::string type;

public:
    Corn();
    Corn(std::string type);
    ~Corn();
    std::string getType();
    void setType(std::string type);
    void show();
};
class CornStorage
{
    int num;
    Corn *storage;

public:
    CornStorage();
    CornStorage(int num);
    ~CornStorage();
    void setNum(int num);
    void setStorage(Corn *storage);
    void setStorage(int index, Corn corn);
    Corn getStorage(int index);
    int getNum();
    void show();
};
class Somtum
{
    double price;
    int chillinum;

public:
    Somtum();
    Somtum(double price, int chillinum);
    ~Somtum();
    void setPrice(double price);
    void setChillinum(int chillinum);
    double getPrice();
    int getChillinum();
    void show();
};
class SomtumThai : public Somtum
{
    bool peanut;

public:
    SomtumThai();
    SomtumThai(bool peanut);
    ~SomtumThai();
    void setPeanut(bool peanut);
    bool getPeanut();
    void show();
    bool moreChilli(SomtumThai somtumThai);
};
class SomtumCorn : public Somtum
{
    Corn corn;
    bool saltedEgg;
    static int count;

public:
    SomtumCorn();
    SomtumCorn(Corn corn, bool saltedEgg);
    ~SomtumCorn();
    void setCorn(Corn corn);
    void setSaltedEgg(bool saltedEgg);
    Corn getCorn();
    bool getSaltedEgg();
    void show();
    static int getCount();
};
#endif // PROTOTRYPE_H