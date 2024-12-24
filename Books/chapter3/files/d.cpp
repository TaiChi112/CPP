#include <iostream>

using namespace std;

// ฟังก์ชัน f(x) = x^3 - 2x - 5
// double func(double x)
// {
//     return (x * x * x) - (2 * x) - 5;
// }
double func(double x)
{
    return (x * x) - 4;
}

// ฟังก์ชันคำนวณจุด c ตาม False Position Method
double falsePosition(double a, double b)
{
    double fa = func(a);
    double fb = func(b);

    // สูตรหา c
    double c = (a * fb - b * fa) / (fb - fa);
    return c;
}

int main()
{
    double a = -1, b = 5;       // กำหนดช่วงเริ่มต้น
    double c;                  // จุดประมาณใหม่
    double tolerance = 0.0001; // กำหนดความแม่นยำ
    int iterations = 0;        // ตัวนับจำนวนครั้งในการวนซ้ำ
    double prev_fc = 0;        // เก็บค่า f(c) รอบก่อนหน้า

    cout << "Finding root using False Position Method\n";

    // ตรวจสอบเงื่อนไขเริ่มต้นว่ารากอยู่ในช่วง [a, b] หรือไม่
    if (func(a) * func(b) >= 0)
    {
        cout << "Invalid interval: f(a) and f(b) must have opposite signs.\n";
        return -1;
    }

    // เริ่มการวนซ้ำ
    do
    {
        c = falsePosition(a, b); // คำนวณจุด c ใหม่
        double fc = func(c);     // คำนวณค่า f(c)

        cout << "Iteration " << iterations + 1 << ": c = " << c << ", f(c) = " << fc << endl;

        // เงื่อนไขหยุด: f(c) ใกล้ 0.0
        if (abs(fc) < tolerance)
        {
            cout << "Root found at x = " << c << " after " << iterations + 1 << " iterations.\n";
            break;
        }

        // เงื่อนไขหยุด: f(c) ห่างจาก 0 มากขึ้นเรื่อยๆ
        if (iterations > 0 && abs(fc) > abs(prev_fc))
        {
            cout << "Divergence detected. Stopping iterations.\n";
            break;
        }

        prev_fc = fc; // อัปเดตค่า f(c) รอบก่อนหน้า

        // อัปเดตช่วงใหม่ [a, b]
        if (func(a) * fc < 0)
            b = c; // รากอยู่ระหว่าง a และ c
        else
            a = c; // รากอยู่ระหว่าง c และ b

        iterations++;
    } while (iterations < 1000); // จำกัดจำนวนการวนซ้ำไม่เกิน 1000 รอบ

    if (iterations == 1000)
    {
        cout << "Maximum iterations reached. Approximate root: " << c << endl;
    }

    return 0;
}
