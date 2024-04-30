#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
    wcout << "Hello World" << endl;
    cout << "Hello World" << endl;
    _setmode(_fileno(stdout), _O_U16TEXT);

    // พิมพ์ข้อความภาษาไทยออกทางหน้าจอ
    wcout << L"สวัสดีชาวโลก" << endl;
    return 0;
}