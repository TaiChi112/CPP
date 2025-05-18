#include <iostream>

using namespace std;

class Paper
{
    int width, lenght;
    string color;

public:
    Paper(int width, int lenght, string color) : width(width), lenght(lenght), color(color) {}
    void changeColor(string color)
    {
        this->color = color;
    }
    void display()
    {
        cout << "Paper color: " << color << " width: " << width << " lenght: " << lenght << endl;
    }
};

struct Size
{
    int width, lenght;
    Size() : width(0), lenght(0) {}
    Size(int width, int lenght) : width(width), lenght(lenght) {}
};

class Book
{
    string title;
    string author;
    Size size;

public:
    Book(string title, string author, Size size) : title(title), author(author), size(size) {}
    void display()
    {
        cout << "Book title: " << title << " author: " << author << " size: " << size.width * size.lenght << " mm^2" << endl;
    }
};
class Blog
{
    string content;

public:
    Blog(string content) : content(content) {}
    void display()
    {
        cout << content << endl;
    }
};

struct Button
{
    string label;
    string color;
    Size size;
};
class Laptop
{
private:
    string brand;
    Size size;
    int weight;
    string color;
    Button button;

    // Constructor เป็น private เพื่อให้เรียกผ่าน Builder เท่านั้น
    Laptop(string brand, Size size, int weight, string color, Button button)
        : brand(brand), size(size), weight(weight), color(color), button(button) {}

public:
    class Builder
    {
    private:
        string brand;
        Size size;
        int weight = 0;         // Default value
        string color = "Black"; // Default value
        Button button;

    public:
        Builder(string brand, Size size, Button button)
            : brand(brand), size(size), button(button) {}

        Builder &setWeight(int w)
        {
            weight = w;
            return *this;
        }
        Builder &setColor(string c)
        {
            color = c;
            return *this;
        }

        Laptop build() { return Laptop(brand, size, weight, color, button); }
    };
};

int main()
{
    Laptop laptop = Laptop::Builder("Dell", Size(1, 1), Button{"Power", "Black", Size(1, 1)})
                        .setWeight(1500)
                        .setColor("Silver")
                        .build();

    Paper *p = new Paper[2]{
        Paper(10, 20, "Red"),
        Paper(20, 30, "Blue")};

    for (int i = 0; i < 2; ++i)
    {
        p[i].display();
    }
    p[1].changeColor("Green");
    p[1].display();

    Book *b1 = new Book[2]{
        Book("Data structure", "Alice", Size(10, 20)),
        Book("Algorithm", "Bob", Size(20, 30))};
    for (int i = 0; i < 2; ++i)
    {
        b1[i].display();
    }

    Blog *b2 = new Blog[2]{
        Blog("Hi my name is TaiChi today I will show you how to create a simple blog object C++"),
        Blog("And this is the second blog object detaiing about today What am I doing")};
    for (int i = 0; i < 2; ++i)
    {
        b2[i].display();
    }
    delete[] p;
    delete[] b1;
    delete[] b2;
    return 0;
}