#ifndef MAIN_H
#define MAIN_H

using namespace std;

void showData1(int data)
{
      cout << "Data1 : " << data << endl;
}
void showAddress(int *data)
{
      cout << "Address : " << data << endl;
}
struct Data2
{
      int data;
      Data2(int data) : data(data) {}
      void showData2()
      {
            cout << "Data2 : " << data << endl;
      }
      void showAddress(Data2 *data)
      {
            cout << "Address : " << data << endl;
      }
};
class Data3
{
private:
      int data;

public:
      Data3(int data) : data(data) {}
      int getData() { return data; }
      void showData3()
      {
            cout << "Data3 : " << data << endl;
      }
      void showAddress(Data3 *data)
      {
            cout << "Address : " << data << endl;
      }
};

#endif