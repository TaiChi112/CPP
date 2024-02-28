#include <iostream>
#include <string>
using namespace std;

void Input(int &);       // รับวันที่ใด ๆ ของเดือนเมษายน
string FindHoliday(int); // ส่งผ่านข้อความกลับมายังจุดเรียกใช้

int main()
{
    int Day;       // input
    string Output; // output
    Input(Day);
    Output = FindHoliday(Day);
    cout << Output << endl;
    return 0;
}

void Input(int &day)
{
    cout << "Day =? ";
    cin >> day;
}

string FindHoliday(int day)
{
    switch (day)
    {
    case 6:
    case 13:
    case 14:
    case 15:
        return "official holiday";
    case 1: // Add additional cases as needed
    case 2:
    // ...
    case 30:
        return "regular holiday";
    default:
        return "workday";
    }
}
