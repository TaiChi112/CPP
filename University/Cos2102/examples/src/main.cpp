#include <iostream>

using namespace std;

class Jewelry
{
      double price;
      int madeForm; // 1. gold, 2. silver 3. platinum

public:
      Jewelry() : price(990){};
      Jewelry(double price, int madeForm) : price(price), madeForm(madeForm){};
      ~Jewelry() { cout << "Destructuring class Jewelry" << endl; }
};
class Gem
{
      int type; // 1. diamond, 2. rubies, 3. jade, 4. sapphire, 5. Pearls

public:
      Gem() : type(5){};
      ~Gem() { cout << "Destructuring class Gem" << endl; }
};
class Ring : public Jewelry
{
      Gem **gems;
      int num;

public:
      Ring() : Jewelry(3000, false), gems(nullptr), num(0){};
      ~Ring() { cout << "Destructuring class Ring" << endl; }
};
class Necklace : public Jewelry
{
      bool pendant;

public:
      Necklace() : Jewelry(22000, 1), pendant(true){};
      ~Necklace() { cout << "Destructuring class Necklace" << endl; }
};
int main()
{
      return 0;
}