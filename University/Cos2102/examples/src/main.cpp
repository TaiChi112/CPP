#include <iostream>

using namespace std;

class Jewelry
{
      double price;
      int madeForm; // 1. gold, 2. silver 3. platinum

public:
      Jewelry() : price(990){};
      // Jewelry(double price, int madeForm) : price(price), madeForm(madeForm){};
      Jewelry(double price, int madeForm)
      {
            setPrice(price);
            setMadeForm(madeForm);
      }
      ~Jewelry() { cout << "Destructuring class Jewelry" << endl; }
      void setPrice(double price)
      {
            if (price >= 0)
            {
                  this->price = price;
            }
            else
            {
                  cout << " price must > 0" << endl;
            }
      }
      void setMadeForm(int madeForm)
      {
            if (madeForm == 1 || madeForm == 2 || madeForm == 3)
            {
                  this->madeForm = madeForm;
            }
            else
            {
                  cout << "madeForm must be 1, 2 or 3" << endl;
            }
      }
      double getPrice() { return price; }
      int getMadeForm() { return madeForm; }

      virtual void show() = 0;

      void showPrice() { cout << "price: " << this->getPrice() << endl; }
};
class Gem
{
      int type; // 1. diamond, 2. rubies, 3. jade, 4. sapphire, 5. Pearls

public:
      Gem() : type(5){};
      ~Gem() { cout << "Destructuring class Gem" << endl; }
      void setType(int type)
      {
            if (type >= 1 && type <= 5)
            {
                  this->type = type;
            }
            else
            {
                  cout << "type must be 1, 2, 3, 4 or 5" << endl;
            }
      }
      int getType() { return type; }

      virtual void show() = 0;

      void showType() { cout << "type: " << this->getType() << endl; }
};
class Ring : public Jewelry
{
      Gem **gems;
      int num;

public:
      Ring() : Jewelry(3000, false), gems(nullptr), num(0){};
      ~Ring() { cout << "Destructuring class Ring" << endl; }
      void setGems(Gem **gems, int num)
      {
            this->gems = gems;
            if (num > 0)
            {
                  this->num = num;
            }
            else
            {
                  cout << "num must > 0" << endl;
            }
      }
      Gem **getGems() { return gems; }
      int getNum() { return num; }

      void show()
      {
            this->showPrice();
            this->showType();
            cout << "num: " << this->getNum() << endl;
            for (int i = 0; i < this->getNum(); i++)
            {
                  this->getGems()[i]->show();
            }
      }

      void showGems()
      {
            cout << "num: " << this->getNum() << endl;
            for (int i = 0; i < this->getNum(); i++)
            {
                  this->getGems()[i]->show();
            }
      }
};
class Necklace : public Jewelry
{
      bool pendant;

public:
      Necklace() : Jewelry(22000, 1), pendant(true){};
      ~Necklace() { cout << "Destructuring class Necklace" << endl; }
      void setPendant(bool pendant) { this->pendant = pendant; }

      bool getPendant() { return pendant; }

      void show()
      {
            this->showPrice();
            this->showType();
            cout << "pendant: " << this->getPendant() << endl;
      }

      void showPendant() { cout << "pendant: " << this->getPendant() << endl; }
};
int main()
{
      Jewelry(990, 1);
      cout << "End of main" << endl;
      return 0;
}