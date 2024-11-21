#ifndef DESSERT_H
#define DESSERT_H

class Dessert
{
    int price;

public:
    Dessert();
    Dessert(int);
    ~Dessert();
    void showDessert();
    int getPrice();
    void setPrice(int);
};
#endif // DESSERT_H
