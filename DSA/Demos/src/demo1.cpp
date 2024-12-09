#include <iostream>
#include "../include/test1.cpp"

using namespace std;

int main()
{
      // int value; // variable value it's have only address but it's not assgined yet
      // input(&value);
      // output(&value);
      int day, hour, minute, second;
      // Input_Day(&day);
      Input_Hour(&hour);
      Input_Minute(&minute);
      Input_Second(&second);
      cout << "Today you use the time : " << hour << " : hour " << minute << " : minute " << second << " : second" << endl;
      // system("Hello world!");
      return 0;
}