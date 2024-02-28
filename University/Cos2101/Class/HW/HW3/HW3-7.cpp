#include <iostream>
using namespace std;

void Input(int &, int &, int &);                          // รับวัน เดือน ปี ใด ๆ
void FindAge(int, int, int, int, int, int, int &, int &); // หาอายุ กี่ปี กี่เดือน

int main()
{
    int Bd, Bm, By;  // input วัน เดือน ปี เกิด
    int D, M, Y;     // input วัน เดือน ปี ปัจจุบัน
    int Year, Month; // output อายุกี่ปี กี่เดือน

    cout << "Birthday:" << endl;
    Input(Bd, Bm, By);

    cout << "Today:" << endl;
    Input(D, M, Y);

    FindAge(D, M, Y, Bd, Bm, By, Year, Month);

    cout << Year << " years " << Month << " months" << endl;
    return 0;
}

void Input(int &day, int &month, int &year)
{
    cout << "Day =? ";
    cin >> day;
    cout << "Month =? ";
    cin >> month;
    cout << "Year =? ";
    cin >> year;
}

void FindAge(int currentDay, int currentMonth, int currentYear, int birthDay, int birthMonth, int birthYear, int &ageYear, int &ageMonth)
{
    ageYear = currentYear - birthYear;
    ageMonth = currentMonth - birthMonth;

    if (currentDay < birthDay)
    {
        ageMonth--;
    }

    if (ageMonth < 0)
    {
        ageYear--;
        ageMonth += 12;
    }
}
