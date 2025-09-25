#ifndef MAIN_H
#define MAIN_H

class Furniture
{
    double price;

public:
    Furniture();
    Furniture(double);
    double getPrice();
    void showPrice();
};
class Table : public Furniture
{
    int type; // 1.computer 2.TV 3.reception 
public:
    Table();
    Table(int, Furniture);
    int getTypeTable();
    void showTypeTable();
};
class Chair : public Furniture{
    int type; // 1.computer 2.armchair 3.children
    public:
    Chair();
    Chair(int, Furniture);
    int getTypeChair();
    void showTypeChair();
};


#endif // MAIN_H