#ifndef HW2_H
#define HW2_H

#include <iostream>
using namespace std;

class Point
{
    double x;
    double y;
    string name;
    static int amountObject;

public:
    Point();
    Point(double, double, string);
    ~Point();
    void setX(double);
    void setY(double);
    void setName(string);
    double getX();
    double getY();
    string getName();
    void showPoint();
    int getAmountObject();
};
Point::Point()
{
    amountObject++;
    setX(0.0);
    setY(0.0);
    setName("Undefined");
    cout << "Default constructor" << endl;
}
Point::Point(double x, double y, string name)
{
    amountObject++;
    setX(x);
    setY(y);
    setName(name);
}
Point::~Point()
{
    amountObject--;
    cout << "Destructor Point" << endl;
}
void Point::setX(double x)
{
    this->x = x;
}
void Point::setY(double y)
{
    this->y = y;
}
void Point::setName(string name)
{
    this->name = name;
}
double Point::getX()
{
    return x;
}
double Point::getY()
{
    return y;
}
string Point::getName()
{
    return name;
}
void Point::showPoint()
{
    cout << "Point name: " << getName() << endl;
    cout << "Point x: " << getX() << endl;
    cout << "Point y: " << getY() << endl;
}
int Point::amountObject = 0;
int Point::getAmountObject()
{
    return amountObject;
}
class Rectangle
{
    double width;
    double length;
    static int amountObject;

public:
    Rectangle();
    Rectangle(double, double);
    ~Rectangle();
    void setWidth(double);
    void setLength(double);
    double getWidth();
    double getLength();
    double getArea();
    double getPerimeter();
    void showRectangle();
    int getAmountObject();
};
Rectangle::Rectangle()
{
    amountObject++;
    setWidth(0.0);
    setLength(0.0);
    cout << "Default constructor Rectangle" << endl;
}
Rectangle::Rectangle(double width, double length)
{
    amountObject++;
    setWidth(width);
    setLength(length);
}
Rectangle::~Rectangle()
{
    amountObject--;
    cout << "Destructor Rectangle" << endl;
}
void Rectangle::setWidth(double width)
{
    this->width = width;
}
void Rectangle::setLength(double length)
{
    this->length = length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getArea()
{
    return width * length;
}
double Rectangle::getPerimeter()
{
    return 2 * (width + length);
}
void Rectangle::showRectangle()
{
    cout << "Rectangle width: " << getWidth() << endl;
    cout << "Rectangle length: " << getLength() << endl;
    cout << "Rectangle area: " << getArea() << endl;
    cout << "Rectangle perimeter: " << getPerimeter() << endl;
}
int Rectangle::amountObject = 0;
int Rectangle::getAmountObject()
{
    return amountObject;
}

class Person
{
    string id;
    string firstname;
    string lastname;
    int age;
    static int amountObject;

public:
    Person();
    Person(string, string, string, int);
    ~Person();
    void setId(string);
    void setFirstname(string);
    void setLastname(string);
    void setAge(int);
    string getId();
    string getFirstname();
    string getLastname();
    int getAge();
    int findAge(int);
    void showPerson();
    int getAmountObject();
};
Person::Person()
{
    amountObject++;
    setId("Undefined");
    setFirstname("Undefined");
    setLastname("Undefined");
    setAge(0);
    cout << "Default constructor Person" << endl;
}
Person::Person(string id, string firstname, string lastname, int age)
{
    amountObject++;
    setId(id);
    setFirstname(firstname);
    setLastname(lastname);
    setAge(age);
}
Person::~Person()
{
    amountObject--;
    cout << "Destructor Person" << endl;
}
void Person::setId(string id)
{
    this->id = id;
}
void Person::setFirstname(string firstname)
{
    this->firstname = firstname;
}
void Person::setLastname(string lastname)
{
    this->lastname = lastname;
}
void Person::setAge(int age)
{
    this->age = age;
}
string Person::getId()
{
    return id;
}
string Person::getFirstname()
{
    return firstname;
}
string Person::getLastname()
{
    return lastname;
}
int Person::getAge()
{
    return age;
}
void Person::showPerson()
{
    cout << "Person id: " << getId() << endl;
    cout << "Person firstname: " << getFirstname() << endl;
    cout << "Person lastname: " << getLastname() << endl;
    cout << "Person age: " << getAge() << endl;
}
int Person::findAge(int age)
{
    return 2567 - age;
}
int Person::amountObject = 0;
int Person::getAmountObject()
{
    return amountObject;
}
class Student
{
    string id;
    string firstname;
    string lastname;
    int age;
    string studentID;
    string faculty;
    string Department;
    double grade;

public:
    Student();
    Student(string, string, string, int, string, string, string, double);
    ~Student();
    void setId(string);
    void setFirstname(string);
    void setLastname(string);
    void setAge(int);
    void setStudentID(string);
    void setFaculty(string);
    void setDepartment(string);
    void setGrade(double);
    string getId();
    string getFirstname();
    string getLastname();
    int getAge();
    string getStudentID();
    string getFaculty();
    string getDepartment();
    double getGrade();
    void showStudent();
    double findGradeAverage(double, double, double);
};
Student::Student()
{
    setId("Undefined");
    setFirstname("Undefined");
    setLastname("Undefined");
    setAge(0);
    setStudentID("Undefined");
    setFaculty("Undefined");
    setDepartment("Undefined");
    setGrade(0.0);
    cout << "Default constructor Student" << endl;
}
Student::Student(string id, string firstname, string lastname, int age, string studentID, string faculty, string Department, double grade)
{
    setId(id);
    setFirstname(firstname);
    setLastname(lastname);
    setAge(age);
    setStudentID(studentID);
    setFaculty(faculty);
    setDepartment(Department);
    setGrade(grade);
}
Student::~Student()
{
    cout << "Destructor Student" << endl;
}
void Student::setId(string id)
{
    this->id = id;
}
void Student::setFirstname(string firstname)
{
    this->firstname = firstname;
}
void Student::setLastname(string lastname)
{
    this->lastname = lastname;
}
void Student::setAge(int age)
{
    this->age = age;
}
void Student::setStudentID(string studentID)
{
    this->studentID = studentID;
}
void Student::setFaculty(string faculty)
{
    this->faculty = faculty;
}
void Student::setDepartment(string Department)
{
    this->Department = Department;
}
void Student::setGrade(double grade)
{
    this->grade = grade;
}
string Student::getId()
{
    return id;
}
string Student::getFirstname()
{
    return firstname;
}
string Student::getLastname()
{
    return lastname;
}
int Student::getAge()
{
    return age;
}
string Student::getStudentID()
{
    return studentID;
}
string Student::getFaculty()
{
    return faculty;
}
string Student::getDepartment()
{
    return Department;
}
double Student::getGrade()
{
    return grade;
}
void Student::showStudent()
{
    cout << "Student id: " << getId() << endl;
    cout << "Student firstname: " << getFirstname() << endl;
    cout << "Student lastname: " << getLastname() << endl;
    cout << "Student age: " << getAge() << endl;
    cout << "Student studentID: " << getStudentID() << endl;
    cout << "Student faculty: " << getFaculty() << endl;
    cout << "Student Department: " << getDepartment() << endl;
    cout << "Student grade: " << getGrade() << endl;
}
double Student::findGradeAverage(double grade1, double grade2, double grade3)
{
    return (grade1 + grade2 + grade3) / 3;
}
#endif // HW2_H