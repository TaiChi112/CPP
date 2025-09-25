**Pointer**
- ถ้า declare variable pointer หมายถึง variable ใช้เก็บ address other variable เช่น 
```cpp
int *a;//keeping address other variable
int b;
a = &b;// pointer variable a is keeping address varaible b 
```
- เเต่ถ้า assign value ให้กับ pointer variable จะต้องเขียนเเบบนี้ เช่น
```cpp
int *a;
int b(112);
*a = b;// now pointer variable a is keeping value b but not address b
```

คำถาม คือ ถ้าเรา declaration pointer variable จะเกิดอะไรขึ้นบ้าง
- Dangling pointer ซึ่งเรียกว่าอะไร ไปศึกษามา
    - เป็น pointer ที่ชี้ไป memory ที่ถูก deallocate เเล้ว ทำให้ pointer ชี้ไปที่ address นั้นเเม้เนื้อหาภายในไม่สามารถเข้าได้อย่าง ปลอดภัยอีกต่อไป
- Uninitialized pointer ซึ่งเรียกว่าอะไร ไปศึกษามา
    - pointer จะมี value เป็น garbage value ซึ่งอาจจะ pointer ไปที่ invalid memory location & เเละทำให้ program crash ได้ || etc.
    
**Impact**
- Segmentation fault
- Crash
- Data corruption
- Undefine behavior