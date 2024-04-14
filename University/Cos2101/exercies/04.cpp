#include <iostream>

using namespace std;

struct Employee
{
    string id;
    string fullname;
    int sex;
    int age;
    int salary;
    Employee(){};
    Employee(string id, string fullname, int sex, int age, int salary) : id(id), fullname(fullname), sex(sex), age(age), salary(salary){};
};
struct Product
{
    string id;
    string name;
    int stock;
    float cost;
    float price;
};
struct Operation
{
    void (*operation)(int, int);
};
void add(int a, int b)
{
    cout << " a + b " << a + b << endl;
}
struct Time
{
    int hour;
    int minute;
    int second;
};
struct Point
{
    int coordinates[2];
};
struct Address
{
    string street;
    string city;
    string state;
    string zip;
};
struct Humman
{
    string name;
    int age;
    Address address;
    Humman() {}
    Humman(string name, int age, Address address) : name(name), age(age), address(address) {}
};
struct Rectangle
{
    double lenght;
    double width;
    double area() { return lenght * width; }
    double perimeter() { return 2 * (lenght + width); }
};
struct Test
{
    string name;
    int age;
    int weight;
    int height;
    Test()
    {
        cout << "Hello world! Defalut struct" << endl;
    }
    Test(string name, int age, int weight, int height) : name(name), age(age), weight(weight), height(height) {}
};
struct Goods
{
    string id;
    string name;
    int stock;
    int cost;
    float price;
};
void Input(Goods &goods)
{

    cout << "Enter your goods id : ";
    cin >> goods.id;
    cout << "Enter your goods name : ";
    cin >> goods.name;
    cout << "Enter your goods stock : ";
    cin >> goods.stock;
    cout << "Enter your goods cost : ";
    cin >> goods.cost;
    cout << "Enter your goods price : ";
    cin >> goods.price;
}
void Output(Goods &goods)
{
    cout << "Your goods id : " << goods.id << endl;
    cout << "Your goods name : " << goods.name << endl;
    cout << "Your goods stock : " << goods.stock << endl;
    cout << "Your goods cost : " << goods.cost << endl;
    cout << "Your goods price : " << goods.price << endl;
}
void addTen1(int &num)
{
    num += 10;
}
void addTen2(int num)
{
    num += 10;
}

float areaCircle(float &radius)
{
    return 3.14159 * radius * radius;
}
int main()
{
    float a = 10.0;
    cout << "Area circle : " << areaCircle(a) << endl;
    cout << "Before a equal 10.0 and then Now : " << a << endl;

    int n = 112;
    addTen1(n);
    cout << "Value of n after addTen1 is : " << n << endl;

    int x = 112;
    addTen2(x);
    cout << "Value of n after addTen2 is : " << x << endl;

    Goods goods;
    Input(goods);
    cout << "------------------------------------------------" << endl;
    Output(goods);

    cout << "------------------------------------------------" << endl;

    Employee e;
    e.id = "001";
    e.fullname = "John Doe";
    e.sex = 1;
    e.age = 20;
    e.salary = 10000;

    cout << "Employee ID : " << e.id << endl;
    cout << "fullname : " << e.fullname << endl;
    cout << "sex : " << e.sex << endl;
    cout << "age : " << e.age << endl;
    cout << "salary : " << e.salary << endl;

    cout << "------------------------------------------------" << endl;

    Employee e2("002", "Jane Doe", 0, 21, 20000);
    cout << "Employee ID : " << e2.id << endl;
    cout << "fullname : " << e2.fullname << endl;
    cout << "sex : " << e2.sex << endl;
    cout << "age : " << e2.age << endl;
    cout << "salary : " << e2.salary << endl;

    cout << "------------------------------------------------" << endl;
    Product p;
    p.id = "001";
    p.name = "iPhone 13";
    p.stock = 100;
    p.cost = 1000;
    p.price = 1200;

    cout << "Product ID : " << p.id << endl;
    cout << "name : " << p.name << endl;
    cout << "stock : " << p.stock << endl;
    cout << "cost : " << p.cost << endl;
    cout << "price : " << p.price << endl;

    cout << "---------------------------------------------------" << endl;

    Operation op;
    op.operation = add;
    op.operation(10, 20);

    cout << "----------------------------------------------------" << endl;

    Time t1;
    t1 = {10, 30, 45};
    cout << "Time : " << t1.hour << ":" << t1.minute << ":" << t1.second << endl;

    cout << "----------------------------------------------------" << endl;

    Point p1;
    p1 = {{5, 10}};
    cout << "Coordinates: (" << p1.coordinates[0] << ", " << p1.coordinates[1] << ")" << endl;

    cout << "----------------------------------------------------" << endl;

    Humman humman;
    humman = {"John Doe", 20, {"123 Main Street", "Anytown", "CA", "12345"}};
    cout << "Name: " << humman.name << endl;
    cout << "Age: " << humman.age << endl;
    cout << "Address: " << humman.address.street << ", " << humman.address.city << ", " << humman.address.state << " " << humman.address.zip << endl;

    cout << "----------------------------------------------------" << endl;

    Rectangle r;
    // r = {5, 10};
    r.lenght = 5;
    r.width = 10;
    cout << "Area : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;

    cout << "----------------------------------------------------" << endl;

    Test test0, test1, test2("TaiChi", 20, 165, 54);
    test0.name = "Test0";
    test0.age = 112;
    test0.weight = 122;
    test0.height = 122;
    cout << "Name: " << test0.name << endl;
    cout << "Age: " << test0.age << endl;
    cout << "Weight: " << test0.weight << endl;
    cout << "Height: " << test0.height << endl;

    cout << "----------------------------------------------------" << endl;

    test1 = {"John Doe", 20, 70, 180};
    cout << "Name: " << test1.name << endl;
    cout << "Age: " << test1.age << endl;
    cout << "Weight: " << test1.weight << endl;
    cout << "Height: " << test1.height << endl;

    cout << "----------------------------------------------------" << endl;

    cout << "Name: " << test2.name << endl;
    cout << "Age: " << test2.age << endl;
    cout << "Weight: " << test2.weight << endl;
    cout << "Height: " << test2.height << endl;

    return 0;
}