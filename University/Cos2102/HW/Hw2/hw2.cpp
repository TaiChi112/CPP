#include <iostream>
#include "hw2.h"

using namespace std;

int main()
{
    // Point p1, p2(181.0, 252.0, "Point 2");
    // p1.setName("Point 1");
    // p1.setX(112.0);
    // p1.setY(121.0);
    // p1.showPoint();

    // p2.showPoint();

    // cout << "amount object Point : " << p1.getAmountObject() << endl;

    // Rectangle r1, r2(5.0, 10.0),r3;

    // r1.setWidth(10.0);
    // r1.setLength(20.0);

    // r1.showRectangle();

    // r2.showRectangle();

    // r3.showRectangle();

    // cout << "amount object Rectangle : " << r1.getAmountObject() << endl;

    // Person p1, p2("2", "John", "Doe", 25), p3;
    // p1.setId("1");
    // p1.setFirstname("Alice");
    // p1.setLastname("Smith");
    // p1.setAge(30);
    // p1.showPerson();

    // p2.showPerson();

    // p3.showPerson();

    // cout << "amount object Person : " << p1.getAmountObject() << endl;

    Student s1, s2("2", "Alice", "Smith", 30, "123456", "Engineering", "Computer", 3.5), s3;
    s1.setId("1");
    s1.setFirstname("John");
    s1.setLastname("Doe");
    s1.setAge(25);
    s1.setStudentID("987654");
    s1.setFaculty("Science");
    s1.setDepartment("Computer Science");
    s1.setGrade(3.5);
    s1.showStudent();
    cout << "Average grade: " << s1.findGradeAverage(5.0, 5.0, 5.0) << endl;

    s2.showStudent();
    cout << "Average grade: " << s2.findGradeAverage(2.0, 2.0, 2.0) << endl;

    s3.showStudent();
    cout << "Average grade: " << s3.findGradeAverage(15.0, 15.0, 15.0) << endl;
    return 0;
}