#ifndef FOOD_H
#define FOOD_H

#include "meat.h"
#include "vegetable.h"

#include <iostream>
using namespace std;

class Food
{
    double price;
    Meat *meat;
    Vegetable *vegetable;
    int meatNum;
    int vegetableNum;
    static int objectCount;

public:
    Food() : price(0), meat(nullptr), vegetable(nullptr), meatNum(0), vegetableNum(0){
        objectCount++;
    }


    ~Food()
    {
        objectCount--;
        delete[] meat;
        delete[] vegetable;
    }
    void setMeatNum(int meatNum)
    {
        this->meatNum = meatNum;
        meat = new Meat[meatNum];
    }
    void setVegetableNum(int vegetableNum)
    {
        this->vegetableNum = vegetableNum;
        vegetable = new Vegetable[vegetableNum];
    }
    void setMeat(int index, Meat m)
    {
        if (index < meatNum)
        {
            meat[index] = m;
        }
    }

    // กำหนดผักในตำแหน่งที่กำหนด
    void setVegetable(int index, Vegetable v)
    {
        if (index < vegetableNum)
        {
            vegetable[index] = v;
        }
    }
    // void setMeat(Meat *meat, int index)
    // {
    //     // this->meat[index] = *meat;
    //     if (index < meatNum)
    //     {
    //         this->meat[index] = meat[index];
    //     }
    // }
    // void setVegetable(Vegetable *vegetable, int index)
    // {
    //     // this->vegetable[index] = *vegetable;
    //     if (index < vegetableNum)
    //     {
    //         this->vegetable[index] = vegetable[index];
    //     }
    // }
    void setPrice(double price)
    {
        this->price = price;
    }
    double getPrice()
    {
        return price;
    }
    void showPrice()
    {
        cout << "Price of food is $" << price <<" dollar"<< endl;
    }
    void showMeat()
    {
        for (int i = 0; i < meatNum; i++)
        {
            meat[i].showTypeMeat();
        }
    }
    void showVegetable()
    {
        for (int i = 0; i < vegetableNum; i++)
        {
            vegetable[i].showNameVegetable();
        }
    }
    static int getObjectCount()
    {
        return objectCount;
    }
};
int Food::objectCount = 0;
#endif // FOOD_H