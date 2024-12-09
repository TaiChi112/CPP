#ifndef TYPE_H
#define TYPE_H
#include <string>

using namespace std;

class Types
{
      char char1;

public:
      void setChar(char char1)
      {
            this->char1 = char1;
      }
      char getChar()
      {
            return char1;
      }
      void showChar()
      {
            cout << "Value char1 : " << getChar() << endl;
            cout << "Address char1 : " << static_cast<void *>(&char1) << endl;
      }
};
// class MyInt
// {
//       int int1;

// public:
//       void setInt(int int1)
//       {
//             this->int1 = int1;
//       }
//       int getInt()
//       {
//             return int1;
//       }
//       void showInt()
//       {
//             cout << "Value int1 : " << getInt() << endl;
//             cout << "Address int1 : " << &int1 << endl;
//       }
// };
class MyString
{
      string string1;

public:
      void setString(string string1)
      {
            this->string1 = string1;
      }
      string getString()
      {
            return string1;
      }
      void showString()
      {
            cout << "Value string1 : " << string1 << endl;
            cout << "Address string1 : " << &string1 << endl;
      }
};
// class MyInt
// {
// public:
//       string name;
//       int age;

//       MyInt() : name(""), age(0) {}
//       MyInt(int val) : name(""), age(val) {}

//       MyInt &operator=(int val)
//       {
//             age = val;
//             return *this;
//       }
// };

#endif