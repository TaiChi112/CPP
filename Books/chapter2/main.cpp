#include <iostream>

using namespace std;
class Point
{
    static int count;
    string name;
    double x, y;

public:
    Point();
    Point(string, double, double);
    ~Point();
    void set(string, double, double);
    int getX();
    int getY();
    void show();
    static int getCount();
};
class Rectangle
{
    int width, length;
    static int count;

public:
    Rectangle();
    Rectangle(int, int);
    ~Rectangle();
    void set(int, int);
    int getWidth();
    int getLength();
    int areaReatangle(int, int);
    int borderReatangle(int, int);
    void show();
    static int getCount();
};
class Person
{
    static int count;
    int id;
    string firstname;
    string lastname;
    string date;

public:
    Person();
    Person(int, string, string, string);
    ~Person();
    void set(int, string, string, string);
    int getId();
    string getFirstname();
    string getLastname();
    string getDate();
    void show();
    static int getCount();
};
class Student
{
    int id;
    string firstname;
    string lastname;
    string date;
    int studentId;
    string faculty;
    string branch;
    double averageGrade;
    int amountOfCourses;

public:
    Student();
    Student(int, string, string, string, int, string, string, double, int);
    ~Student();
    void set(int, string, string, string, int, string, string, double, int);
    int getStudentId();
    string getFaculty();
    string getBranch();
    double getAverageGrade();
    void CalculateAverageGrade();
    void show();
};
int main()
{
    // string name;
    // double x, y;
    // cout << endl;
    // cout << "Enter Point name : ";
    // cin >> name;
    // cout << "Enter x coordinate : ";
    // cin >> x;
    // cout << "Enter y coordinate : ";
    // cin >> y;
    // cout << endl;
    // Point p1, p2(name, x, y);
    // p1.show();
    // p2.show();
    // cout << endl;
    // cout << "amount object : " << Point::getCount() << endl;
    // cout << endl;

    // int width, length;
    // cout << "Enter width : ";
    // cin >> width;
    // cout << "Enter length : ";
    // cin >> length;
    // cout << endl;
    // Rectangle r1, r2(width, length);
    // r1.show();
    // cout << endl;
    // r2.show();
    // cout << endl;
    // cout << "amount object : " << Rectangle::getCount() << endl;
    // cout << endl;

    int id;
    string firstname, lastname, date;
    cout << "Enter ID : ";
    cin >> id;
    cout << "Enter first name : ";
    cin >> firstname;
    cout << "Enter last name : ";
    cin >> lastname;
    cout << "Enter date : ";
    cin >> date;
    Person p3, p4(id, firstname, lastname, date);
    cout << endl;
    p3.show();
    cout << endl;
    p4.show();
    cout << endl;
    cout << "amount object : " << Person::getCount() << endl;
    cout << endl;

    int studentId;
    string faculty, branch;
    double averageGrade(0.00), amountOfCourses;
    cout << "Enter Student ID : ";
    cin >> studentId;
    cout << "Enter faculty : ";
    cin >> faculty;
    cout << "Enter branch : ";
    cin >> branch;
    cout << "Enter amount of courses : ";
    cin >> amountOfCourses;
    Student s1, s2(id, firstname, lastname, date, studentId, faculty, branch, averageGrade, amountOfCourses);
    s2.CalculateAverageGrade();
    cout << endl;
    s1.show();
    cout << endl;
    s2.show();
    return 0;
}
Point::Point() : name("undefined"), x(0.0), y(0.0) { ++Point::count; }
Point::Point(string n, double xx, double yy) : name(n), x(xx), y(yy)
{
    set(name, x, y);
    ++Point::count;
}
Point::~Point() { cout << "destructuring Point : " << name << "\n"; }
int Point::count = 0;
int Point::getCount() { return count; }
void Point::set(string n, double xx, double yy)
{
    this->name = n;
    this->x = xx;
    this->y = yy;
}
int Point::getX() { return x; }
int Point::getY() { return y; }
void Point::show()
{
    cout << "Point : " << name << " is at (" << getX() << ", " << getY() << ")\n";
}
Rectangle::Rectangle() : width(0), length(0)
{
    ++Rectangle::count;
    set(width, length);
}
Rectangle::Rectangle(int w, int l) : width(w), length(l)
{
    ++Rectangle::count;
    set(width, length);
}
Rectangle::~Rectangle() { cout << "destructuring Rectangle\n"; }
void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}
int Rectangle::getWidth() { return width; }
int Rectangle::getLength() { return length; }
int Rectangle::areaReatangle(int w, int l) { return w * l; }
int Rectangle::borderReatangle(int w, int l) { return 2 * (w + l); }
void Rectangle::show()
{
    cout << "Rectangle : (" << width << ", " << length << ")\n";
    cout << "Area : " << areaReatangle(width, length) << endl;
    cout << "Border : " << borderReatangle(width, length) << endl;
}
int Rectangle::count = 0;
int Rectangle::getCount() { return count; }
Person::Person() : id(0), firstname("undefined"), lastname("undefined"), date("undefined")
{
    set(id, firstname, lastname, date);
    ++Person::count;
};
Person::Person(int id, string firstname, string lastname, string date) : id(id), firstname(firstname), lastname(lastname), date(date)
{
    set(id, firstname, lastname, date);
    ++Person::count;
};
Person::~Person() { cout << "destructuring Person : " << firstname << endl; }
void Person::set(int id, string firstname, string lastname, string date)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
    this->date = date;
}
int Person::getId() { return id; }
string Person::getFirstname() { return firstname; }
string Person::getLastname() { return lastname; }
string Person::getDate() { return date; }
void Person::show()
{
    cout << "ID : " << id << endl;
    cout << "Firstname : " << firstname << endl;
    cout << "Lastname : " << lastname << endl;
    cout << "Date : " << date << endl;
}
int Person::count = 0;
int Person::getCount() { return count; }

Student::Student() : id(0), firstname("undefined"), lastname("undefined"), date("undefined"), studentId(0), faculty("undefined"), branch("undefined"), averageGrade(0.0), amountOfCourses(0) { set(id, firstname, lastname, date, studentId, faculty, branch, averageGrade, amountOfCourses); };
Student::Student(int id, string firstname, string lastname, string date, int studentId, string faculty, string branch, double averageGrade, int amountOfCourses) : id(id), firstname(firstname), lastname(lastname), date(date), studentId(studentId), faculty(faculty), branch(branch), averageGrade(averageGrade), amountOfCourses(amountOfCourses) { set(id, firstname, lastname, date, studentId, faculty, branch, averageGrade, amountOfCourses); };
Student::~Student() { cout << "destructuring Student : " << firstname << endl; }
void Student::set(int id, string firstname, string lastname, string date, int studentId, string faculty, string branch, double averageGrade, int amountOfCourses)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
    this->date = date;
    this->studentId = studentId;
    this->faculty = faculty;
    this->branch = branch;
    this->averageGrade = averageGrade;
    this->amountOfCourses = amountOfCourses;
}
int Student::getStudentId() { return studentId; }
string Student::getFaculty() { return faculty; }
string Student::getBranch() { return branch; }
double Student::getAverageGrade() { return averageGrade; }

void Student::show()
{
    cout << "id: " << id << endl;
    cout << "firstname: " << firstname << endl;
    cout << "lastname: " << lastname << endl;
    cout << "date: " << date << endl;
    cout << "Student id: " << studentId << endl;
    cout << "Faculty: " << faculty << endl;
    cout << "Branch: " << branch << endl;
    cout << "Average Grade: " << averageGrade << endl;
    cout << "--------------" << endl;
}
void Student::CalculateAverageGrade()
{
    if (amountOfCourses <= 0)
    {
        cout << "Invalid number of courses.\n";
        return;
    }
    double summation(0.0), grade(0.0);
    for (int i = 0; i < amountOfCourses; i++)
    {
        cout << "Enter grade for course " << i + 1 << " : ";
        cin >> grade;
        if (grade < 0.0 || grade > 4.0)
        {
            cout << "Invalid grade! Please Enter a value between 0.0 and 4.0\n";
            i--;
            continue;
        }
        summation += grade;
    }
    averageGrade = summation / amountOfCourses;
}