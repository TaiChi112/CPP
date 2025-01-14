#include <iostream>
#include "prototype.h"

using namespace std;

int main()
{
    CornStorage cornStorage(3);

    Corn *corn = new Corn[3];

    corn[0].setType("A");
    corn[1].setType("B");
    corn[2].setType("C");
    cornStorage.setStorage(corn);
    cornStorage.show();
    cout << endl;

    cornStorage.setStorage(0, Corn("D"));
    cornStorage.setStorage(1, Corn("E"));
    cornStorage.setStorage(2, Corn("F"));
    cornStorage.show();
    cout << endl;

    SomtumThai tumThai1, tumThai2;

    tumThai1.setPrice(50);
    tumThai1.setChillinum(5);
    tumThai1.setPeanut(true);

    tumThai2.setPrice(60);
    tumThai2.setChillinum(6);
    tumThai2.setPeanut(false);

    cout << "TumThai1: " << tumThai1.getPrice() << " bath " << " amount of chilli: " << tumThai1.getChillinum() << " peanut: " << (tumThai1.getPeanut() ? "Yes" : "No") << endl;
    cout << "TumThai2: " << tumThai2.getPrice() << " bath " << " amount of chilli: " << tumThai2.getChillinum() << " peanut: " << (tumThai2.getPeanut() ? "Yes" : "No") << endl;
    cout << endl;

    SomtumCorn tumCorn1, tumCorn2;

    tumCorn1.setCorn(corn[0]);
    tumCorn1.setPrice(40);
    tumCorn1.setChillinum(5);
    tumCorn1.setSaltedEgg(true);

    tumCorn2.setCorn(corn[1]);
    tumCorn2.setPrice(45);
    tumCorn2.setChillinum(7);
    tumCorn2.setSaltedEgg(false);

    cout << "TumCorn1: " << tumCorn1.getPrice() << " bath " << " amount of chilli: " << tumCorn1.getChillinum() << " salted egg: " << (tumCorn1.getSaltedEgg() ? "Yes" : "No") << endl;
    cout << "TumCorn2: " << tumCorn2.getPrice() << " bath " << " amount of chilli: " << tumCorn2.getChillinum() << " salted egg: " << (tumCorn2.getSaltedEgg() ? "Yes" : "No") << endl;
    cout << endl;

    (tumThai1.moreChilli(tumThai2)) ? cout << "TumThai1 has more chilli than TumThai2" : cout << "TumThai1 has less chilli than TumThai2";
    cout << endl;

    cout << "Total price: " << tumCorn1.getPrice() + tumCorn2.getPrice() + tumThai1.getPrice() + tumThai2.getPrice() << " bath" << endl;
    delete[] corn;
    delete corn;
    return 0;
}