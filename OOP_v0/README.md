# 📚 Library Management System - OOP Challenge

## Language Options / ตัวเลือกภาษา

Choose your preferred language to read the challenge:
เลือกภาษาที่คุณต้องการอ่านโจทย์ท้าทาย:

| Language | ภาษา | Link |
|----------|------|------|
| 🇹🇭 **Thai** | **ไทย** | [👉 อ่านเป็นภาษาไทย](#🇹🇭-thai-version-เวอร์ชันภาษาไทย) |
| 🇺🇸 **English** | **อังกฤษ** | [👉 Read in English](#🇺🇸-english-version) |

---

## 🇹🇭 Thai Version (เวอร์ชันภาษาไทย)

## 🎯 ภาพรวมของโจทย์ท้าทาย

ยินดีต้อนรับสู่ **ระบบจัดการห้องสมุด** โจทย์ท้าทาย OOP! งานของคุณคือการออกแบบและพัฒนาระบบจัดการห้องสมุดที่ครอบคลุม เพื่อแสดงให้เห็นถึงหลักการ Object-Oriented Programming (การเขียนโปรแกรมเชิงวัตถุ) หลักๆ

## 📋 รายละเอียดโจทย์ท้าทาย

คุณได้รับมอบหมายให้สร้างระบบจัดการห้องสมุดดิจิทัลสำหรับห้องสมุดสาธารณะสมัยใหม่ ระบบควรจัดการสื่อประเภทต่างๆ (หนังสือ, หนังสือเสียง, นิตยสารดิจิทัล), จัดการผู้ใช้ประเภทต่างๆ (สมาชิกทั่วไป, สมาชิกพรีเมียม, บรรณารักษ์), และติดตามกิจกรรมการยืม

## 🏗️ ข้อกำหนดหลัก

### 1. **การห่อหุ้ม (Encapsulation)** 🔒
- สร้างคลาสที่มีการซ่อนข้อมูลอย่างเหมาะสมโดยใช้ private/protected attributes
- พัฒนา getter และ setter methods พร้อมการตรวจสอบความถูกต้อง
- ให้แน่ใจว่าสถานะภายในได้รับการปกป้องจากการเข้าถึงที่ไม่ได้รับอนุญาต

### 2. **การสืบทอด (Inheritance)** 🌳
- ออกแบบลำดับชั้นคลาสสำหรับประเภทต่างๆ ของสิ่งของในห้องสมุด
- สร้างลำดับชั้นผู้ใช้สำหรับประเภทสมาชิกที่แตกต่างกัน
- แสดงการใช้งาน base และ derived classes อย่างเหมาะสม

### 3. **การเปลี่ยนรูป (Polymorphism)** 🎭
- พัฒนา method overriding สำหรับประเภทของสิ่งของที่แตกต่างกัน
- ใช้ virtual functions/methods ในที่ที่เหมาะสม
- แสดงการเปลี่ยนรูปแบบในขณะทำงาน (runtime polymorphism) ผ่าน interface contracts

### 4. **การนามธรรม (Abstraction)** 🎨
- สร้าง abstract base classes หรือ interfaces
- ซ่อนรายละเอียดการพัฒนาที่ซับซ้อน
- ให้บริการ interfaces ที่ชัดเจนและง่ายสำหรับการใช้งานระบบ

## 🎮 ส่วนประกอบของระบบ

### รายการสื่อ
- **หนังสือ**: ชื่อเรื่อง, ผู้แต่ง, ISBN, ประเภท, จำนวนหน้า
- **หนังสือเสียง**: ชื่อเรื่อง, ผู้แต่ง, ISBN, ประเภท, ระยะเวลา, ผู้บรรยาย
- **นิตยสารดิจิทัล**: ชื่อเรื่อง, หมายเลขฉบับ, วันที่พิมพ์, หัวข้อ

### ประเภทผู้ใช้
- **สมาชิกทั่วไป**: สิทธิ์การยืมพื้นฐาน (สูงสุด 3 รายการ, ระยะเวลา 14 วัน)
- **สมาชิกพรีเมียม**: สิทธิ์พิเศษ (สูงสุด 5 รายการ, ระยะเวลา 21 วัน)
- **บรรณารักษ์**: การเข้าถึงแบบผู้ดูแล, สามารถจัดการสินค้าคงคลัง

### ฟังก์ชันหลัก
1. **การจัดการรายการ**: เพิ่ม, ลบ, ค้นหาสิ่งของในห้องสมุด
2. **การจัดการผู้ใช้**: ลงทะเบียนผู้ใช้, จัดการสมาชิกภาพ
3. **ระบบการยืม**: ยืม, คืน, ต่ออายุสิ่งของ
4. **ระบบค่าปรับ**: คำนวณค่าปรับจากการคืนล่าช้า
5. **การรายงาน**: สร้างสถิติการยืม

## ✅ ข้อกำหนดเฉพาะ

### ต้องพัฒนา:
- [ ] คลาสสื่อแตกต่างกันอย่างน้อย 3 คลาส ที่สืบทอดมาจาก base class `LibraryItem`
- [ ] คลาสผู้ใช้แตกต่างกันอย่างน้อย 3 คลาส ที่สืบทอดมาจาก base class `User`
- [ ] คลาส `Library` ที่จัดการระบบทั้งหมด
- [ ] คลาส `Transaction` เพื่อติดตามประวัติการยืม
- [ ] การจัดการข้อผิดพลาดอย่างเหมาะสมสำหรับการดำเนินการที่ไม่ถูกต้อง
- [ ] อย่างน้อยหนึ่ง abstract method ที่ต้องถูกพัฒนาโดย derived classes
- [ ] ตัวอย่างของ method overloading หรือ overriding
- [ ] Static methods/variables ในที่ที่เหมาะสม

### ฟีเจอร์โบนัส:
- [ ] พัฒนาระบบการจองสำหรับสิ่งของที่ถูกยืมไปแล้ว
- [ ] เพิ่มระบบการให้คะแนน/รีวิวสิ่งของ
- [ ] สร้างระบบแจ้งเตือนสำหรับวันกำหนดคืน
- [ ] พัฒนาการเก็บข้อมูลถาวร (บันทึก/โหลดจากไฟล์)
- [ ] เพิ่ม user interface แบบข้อความง่ายๆ

## 🛠️ ภาษาโปรแกรมมิ่งที่แนะนำ

เลือกหนึ่งในภาษาต่อไปนี้ตามความชอบและเป้าหมายการเรียนรู้ของคุณ:

### **Python** 🐍
- **ข้อดี**: ไวยากรณ์ที่สะอาด, เยี่ยมสำหรับการเรียนรู้แนวคิด OOP
- **คุณสมบัติ**: Properties, multiple inheritance, duck typing
- **ความยาก**: เหมาะสำหรับผู้เริ่มต้น

### **Java** ☕
- **ข้อดี**: รากฐาน OOP ที่แข็งแรง, ระบบ type ที่เข้มงวด
- **คุณสมบัติ**: Interfaces, abstract classes, encapsulation ที่แข็งแรง
- **ความยาก**: ระดับกลาง

### **C#** 🔷
- **ข้อดี**: คุณสมบัติ OOP สมัยใหม่, standard library ที่ครอบคลุม
- **คุณสมบัติ**: Properties, events, LINQ, generics
- **ความยาก**: ระดับกลาง

### **C++** ⚡
- **ข้อดี**: ประสิทธิภาพ, การควบคุมการจัดการหน่วยความจำ
- **คุณสมบัติ**: Multiple inheritance, operator overloading, templates
- **ความยาก**: ระดับสูง

## 📊 เกณฑ์การประเมิน

โซลูชันของคุณจะถูกประเมินตาม:

1. **การพัฒนา OOP ที่ถูกต้อง** (40%)
   - การใช้งาน encapsulation, inheritance, polymorphism, abstraction อย่างเหมาะสม
   - การออกแบบคลาสและความสัมพันธ์ที่สะอาด

2. **คุณภาพโค้ด** (30%)
   - โค้ดที่อ่านง่าย, มีเอกสารที่ดี
   - การตั้งชื่อที่เหมาะสม
   - การจัดการข้อผิดพลาด

3. **ฟังก์ชันการทำงาน** (20%)
   - ข้อกำหนดหลักทั้งหมดถูกพัฒนา
   - ระบบทำงานตามที่คาดหวัง

4. **รูปแบบการออกแบบ (Design Patterns)** (10%)
   - การใช้รูปแบบการออกแบบที่เหมาะสมเมื่อเป็นไปได้
   - โครงสร้างโค้ดที่ขยายได้และบำรุงรักษาได้

## 🚀 การเริ่มต้น

1. **เลือกภาษาโปรแกรมมิ่งของคุณ** จากรายการที่แนะนำ
2. **ออกแบบลำดับชั้นคลาสของคุณ** - ร่างความสัมพันธ์ก่อนเขียนโค้ด
3. **เริ่มต้นด้วย base classes** - พัฒนา `LibraryItem` และ `User` ก่อน
4. **เพิ่ม derived classes** - พัฒนาประเภทสิ่งของและผู้ใช้เฉพาะ
5. **สร้างระบบจัดการ** - สร้างคลาส `Library`
6. **ทดสอบการพัฒนาของคุณ** - สร้างข้อมูลตัวอย่างและทดสอบฟังก์ชันทั้งหมด
7. **เพิ่มฟีเจอร์โบนัส** - พัฒนาฟีเจอร์เพิ่มเติมหากมีเวลา

## 📝 ตัวอย่างโครงสร้างคลาส

```
LibraryItem (Abstract)
├── Book
├── AudioBook
└── DigitalMagazine

User (Abstract)
├── RegularMember
├── PremiumMember
└── Librarian

Library (Main System)
├── Items Collection
├── Users Collection
├── Transactions History
└── Management Methods

Transaction
├── User Reference
├── Item Reference
├── Dates (borrowed, due, returned)
└── Status
```

## 🎯 เคล็ดลับความสำเร็จ

- **เริ่มง่ายๆ**: เริ่มต้นด้วยคลาสพื้นฐานและค่อยๆ เพิ่มความซับซ้อน
- **คิดเป็นวัตถุ**: สร้างแบบจำลองของเอนทิตีในโลกจริงและความสัมพันธ์ของพวกเขา
- **ทดสอบบ่อยๆ**: สร้าง test cases สำหรับแต่ละฟีเจอร์ขณะที่คุณสร้าง
- **ปรับโครงสร้างใหม่**: อย่ากลัวที่จะปรับโครงสร้างโค้ดของคุณเมื่อคุณเรียนรู้
- **เอกสาร**: ใส่ comment ในโค้ดของคุณและอธิบายการตัดสินใจออกแบบ

## 🔗 แหล่งข้อมูลเพิ่มเติม

- ทบทวนหลักการ OOP ในเอกสารของภาษาที่คุณเลือก
- ศึกษา design patterns ที่อาจเป็นไปได้ (Strategy, Observer, Factory)
- พิจารณา edge cases (จะเกิดอะไรขึ้นเมื่อผู้ใช้พยายามยืมสิ่งของมากกว่าที่อนุญาต?)

---

**ขอให้โชคดีกับโจทย์ท้าทาย OOP ของคุณ! จำไว้ว่า เป้าหมายไม่ใช่แค่ทำให้มันทำงาน แต่เพื่อแสดงให้เห็นถึงโค้ดที่สะอาด, บำรุงรักษาได้, และออกแบบ object-oriented ที่ดี**

---

## 🇺🇸 English Version

## 🎯 Challenge Overview

Welcome to the **Library Management System** OOP Challenge! Your task is to design and implement a comprehensive library management system that demonstrates core Object-Oriented Programming principles.

## 📋 Challenge Description

You are tasked with creating a digital library management system for a modern public library. The system should handle various types of media (books, audiobooks, digital magazines), manage different types of users (regular members, premium members, librarians), and track borrowing activities.

## 🏗️ Core Requirements

### 1. **Encapsulation** 🔒
- Create classes with proper data hiding using private/protected attributes
- Implement getter and setter methods with appropriate validation
- Ensure internal state is protected from unauthorized access

### 2. **Inheritance** 🌳
- Design a class hierarchy for different types of library items
- Create a user hierarchy for different membership types
- Demonstrate proper use of base and derived classes

### 3. **Polymorphism** 🎭
- Implement method overriding for different item types
- Use virtual functions/methods where appropriate
- Demonstrate runtime polymorphism through interface contracts

### 4. **Abstraction** 🎨
- Create abstract base classes or interfaces
- Hide complex implementation details
- Provide clear, simple interfaces for system interaction

## 🎮 System Components

### Media Items
- **Book**: Title, Author, ISBN, Genre, Page Count
- **AudioBook**: Title, Author, ISBN, Genre, Duration, Narrator
- **DigitalMagazine**: Title, Issue Number, Publication Date, Topic

### User Types
- **RegularMember**: Basic borrowing privileges (3 items max, 14-day period)
- **PremiumMember**: Extended privileges (5 items max, 21-day period)
- **Librarian**: Administrative access, can manage inventory

### Core Functionality
1. **Item Management**: Add, remove, search library items
2. **User Management**: Register users, manage memberships
3. **Borrowing System**: Check out, return, renew items
4. **Penalty System**: Calculate overdue fees
5. **Reporting**: Generate borrowing statistics

## ✅ Specific Requirements

### Must Implement:
- [ ] At least 3 different media item classes inheriting from a base `LibraryItem` class
- [ ] At least 3 different user classes inheriting from a base `User` class
- [ ] A `Library` class that manages the entire system
- [ ] A `Transaction` class to track borrowing history
- [ ] Proper exception handling for invalid operations
- [ ] At least one abstract method that must be implemented by derived classes
- [ ] Method overloading or overriding examples
- [ ] Static methods/variables where appropriate

### Bonus Features:
- [ ] Implement a reservation system for checked-out items
- [ ] Add a rating/review system for items
- [ ] Create a notification system for due dates
- [ ] Implement data persistence (save/load from files)
- [ ] Add a simple text-based user interface

## 🛠️ Recommended Programming Languages

Choose one of the following languages based on your preference and learning goals:

### **Python** 🐍
- **Pros**: Clean syntax, excellent for learning OOP concepts
- **Features**: Properties, multiple inheritance, duck typing
- **Difficulty**: Beginner-friendly

### **Java** ☕
- **Pros**: Strong OOP foundation, strict type system
- **Features**: Interfaces, abstract classes, strong encapsulation
- **Difficulty**: Intermediate

### **C#** 🔷
- **Pros**: Modern OOP features, comprehensive standard library
- **Features**: Properties, events, LINQ, generics
- **Difficulty**: Intermediate

### **C++** ⚡
- **Pros**: Performance, memory management control
- **Features**: Multiple inheritance, operator overloading, templates
- **Difficulty**: Advanced

## 📊 Evaluation Criteria

Your solution will be evaluated based on:

1. **Correct OOP Implementation** (40%)
   - Proper use of encapsulation, inheritance, polymorphism, abstraction
   - Clean class design and relationships

2. **Code Quality** (30%)
   - Readable, well-documented code
   - Appropriate naming conventions
   - Error handling

3. **Functionality** (20%)
   - All core requirements implemented
   - System works as expected

4. **Design Patterns** (10%)
   - Use of appropriate design patterns where applicable
   - Extensible and maintainable code structure

## 🚀 Getting Started

1. **Choose your programming language** from the recommended list
2. **Design your class hierarchy** - sketch out the relationships before coding
3. **Start with base classes** - implement `LibraryItem` and `User` first
4. **Add derived classes** - implement specific item and user types
5. **Build the management system** - create the `Library` class
6. **Test your implementation** - create sample data and test all functionality
7. **Add bonus features** - implement additional features if time permits

## 📝 Example Class Structure

```
LibraryItem (Abstract)
├── Book
├── AudioBook
└── DigitalMagazine

User (Abstract)
├── RegularMember
├── PremiumMember
└── Librarian

Library (Main System)
├── Items Collection
├── Users Collection
├── Transactions History
└── Management Methods

Transaction
├── User Reference
├── Item Reference
├── Dates (borrowed, due, returned)
└── Status
```

## 🎯 Success Tips

- **Start Simple**: Begin with basic classes and gradually add complexity
- **Think in Objects**: Model real-world entities and their relationships
- **Test Frequently**: Create test cases for each feature as you build
- **Refactor**: Don't be afraid to restructure your code as you learn
- **Document**: Comment your code and explain your design decisions

## 🔗 Additional Resources

- Review OOP principles in your chosen language's documentation
- Look up design patterns that might be applicable (Strategy, Observer, Factory)
- Consider edge cases (what happens when a user tries to borrow more items than allowed?)

---

**Good luck with your OOP challenge! Remember, the goal is not just to make it work, but to demonstrate clean, maintainable, and well-designed object-oriented code.**

*Last updated: July 6, 2025*
