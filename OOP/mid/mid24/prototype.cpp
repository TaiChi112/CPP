#include "prototype.h"
#include <iostream>

Corn::Corn() : type("A") {}
Corn::Corn(std::string type) : type(type) {}
Corn::~Corn() {}
std::string Corn::getType() { return type; }
void Corn::setType(std::string type) { this->type = type; }
void Corn::show() { std::cout << "Corn type: " << getType() << std::endl; }

CornStorage::CornStorage() : num(0), storage(0) {}
CornStorage::CornStorage(int num) : num(num), storage(new Corn[num]) {}
CornStorage::~CornStorage() { delete[] storage; }
void CornStorage::setNum(int num)
{
    delete[] storage;
    this->num = num;
    storage = new Corn[num];
}
void CornStorage::setStorage(Corn *storage)
{
    // this->storage = storage;
    for (int i = 0; i < num; i++)
    {
        this->storage[i] = storage[i];
    }
}
void CornStorage::setStorage(int index, Corn corn)
{
    // storage[index] = corn;
    // storage[index].setType(corn.getType());
    if (index >= 0 && index < num)
    {
        storage[index] = corn;
    }
    else
    {
        std::cout << "Index out of range" << std::endl;
    }
}
Corn CornStorage::getStorage(int index)
{
    // return storage[index];
    if (index >= 0 && index < num)
    {
        return storage[index];
    }
    else
    {
        std::cout << "Index out of range" << std::endl;
        return Corn();
    }
}
int CornStorage::getNum() { return num; }
void CornStorage::show()
{
    std::cout << "CornStorage num: " << num << std::endl;
    for (int i = 0; i < num; i++)
    {
        storage[i].show();
    }
}

Somtum::Somtum() : price(35), chillinum(3) {}
Somtum::Somtum(double price, int chillinum) : price((price > 0 ? price : 35)), chillinum((chillinum >= 0 ? chillinum : 3)) {}
Somtum::~Somtum() {}
void Somtum::setPrice(double price) { this->price = price; }
void Somtum::setChillinum(int chillinum) { this->chillinum = chillinum; }
double Somtum::getPrice() { return price; }
int Somtum::getChillinum() { return chillinum; }
void Somtum::show() { std::cout << "Somtum price: " << price << ", chillinum: " << chillinum << std::endl; }

SomtumThai::SomtumThai() : Somtum(35, 3), peanut(true) {}
SomtumThai::SomtumThai(bool peanut) : peanut(peanut) {}
SomtumThai::~SomtumThai() {}
void SomtumThai::setPeanut(bool peanut) { this->peanut = peanut; }
bool SomtumThai::getPeanut() { return peanut; }
void SomtumThai::show() { std::cout << "SomtumThai peanut: " << peanut << std::endl; }
bool SomtumThai::moreChilli(SomtumThai somtumThai) { return getChillinum() > somtumThai.getChillinum(); }

SomtumCorn::SomtumCorn() : Somtum(40, 4), corn("B"), saltedEgg(true) {}
SomtumCorn::SomtumCorn(Corn corn, bool saltedEgg) : corn(corn), saltedEgg(saltedEgg) {}
SomtumCorn::~SomtumCorn() {}
void SomtumCorn::setCorn(Corn corn) { this->corn = corn; }
void SomtumCorn::setSaltedEgg(bool saltedEgg) { this->saltedEgg = saltedEgg; }
Corn SomtumCorn::getCorn() { return corn; }
bool SomtumCorn::getSaltedEgg() { return saltedEgg; }
void SomtumCorn::show() { std::cout << "SomtumCorn corn: " << corn.getType() << ", saltedEgg: " << saltedEgg << std::endl; }
int SomtumCorn::count = 0;
int SomtumCorn::getCount() { return count; }