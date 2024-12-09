#include <iostream>
#include "main.h"

using namespace std;

int main()
{
      int data1(112);
      showData1(data1);

      Data2 data2(113);
      data2.showData2();

      Data3 data3(114);
      showData1(data1);

      int *data4 = &data1;
      Data2 *data5 = &data2;
      Data3 *data6 = &data3;

      showAddress(data4);
      data2.showAddress(data5);
      data3.showAddress(data6);

      int *dataPtr = createDynamicMemory(115);
      data2.craeteDynamicMemory(116);
      data3.createDynamicMemory(117);

      showDynamicMemory(dataPtr);
      data2.showDynamicMemory(data5);
      data3.showDynamicMemory(data6);
      return 0;
}