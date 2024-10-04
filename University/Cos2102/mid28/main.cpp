#include <iostream>
#include "soup.h"
#include "kaopad.h"

using namespace std;

int main()
{
    Soup s[2];

    // จัดสรร array เนื้อสัตว์และผักให้กับ s[0] (ต้มยำ)
    s[0].setMeatNum(3);      // มีเนื้อสัตว์ 3 อย่าง
    s[0].setVegetableNum(0); // ไม่มีผัก
    s[0].setTypeSoup(1);         // ต้มยำ
    s[0].setSpicyLevel(3);   // เผ็ดมาก
    s[0].setMeat(0, Meat(1));
    s[0].setMeat(1, Meat(2));
    s[0].setMeat(2, Meat(3));
    s[0].setPrice(250.0); // ราคา 250

    // จัดสรร array เนื้อสัตว์และผักให้กับ s[1] (แกงส้ม)
    s[1].setMeatNum(1);      // มีเนื้อสัตว์ 1 อย่าง
    s[1].setVegetableNum(2); // มีผัก 2 อย่าง
    s[1].setTypeSoup(2);         // แกงส้ม
    s[1].setSpicyLevel(2);   // เผ็ดกลาง
    s[1].setMeat(0, Meat(1));
    s[1].setVegetable(0, Vegetable("Tomato"));
    s[1].setVegetable(1, Vegetable("Carrot"));
    s[1].setPrice(100.0); // ราคา 100

    // แสดงข้อมูล s[0]
    cout << "Soup 0:" << endl;
    s[0].showTypeSoup();
    s[0].showSpicyLevel();
    s[0].showMeat();
    s[0].showVegetable();
    s[0].showPrice();

    // แสดงข้อมูล s[1]
    cout << "=====================================" << endl;
    cout << "Soup 1:" << endl;
    s[1].showTypeSoup();
    s[1].showSpicyLevel();
    s[1].showMeat();
    s[1].showVegetable();
    s[1].showPrice();

    cout << "=====================================" << endl;
    cout << "Kaopad 0:" << endl;
    Kaopad k[1];
    k[0].setPrice(120.0);
    k[0].setTypeKaopad(2);
    k[0].setMeatNum(1);
    k[0].setMeat(0, Meat(1));
    k[0].setVegetableNum(2);
    k[0].setVegetable(0, Vegetable("Carrot"));
    k[0].setVegetable(1, Vegetable("Onion"));

    k[0].showTypeKaopad();
    k[0].showMeat();
    k[0].showVegetable();
    k[0].showPrice();

    cout << "Amount object food : " << Food::getObjectCount() << endl;
    return 0;
}