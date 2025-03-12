#include <iostream>

using namespace std;

class Paper
{
    int width, height;
    string color;

public:
    Paper(int width, int height, string color) : width(width), height(height), color(color) {}
    void changeColor(string color)
    {
        this->color = color;
    }
    void display()
    {
        cout << "Paper color: " << color << " width: " << width << " height: " << height << endl;
    }
};
struct Size
{
    int width, height;
    Size() : width(0), height(0) {}
    Size(int width, int height) : width(width), height(height) {}
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
        cout << "Book title: " << title << " author: " << author << " size: " << size.width * size.height << " mm^2" << endl;
    }
};
class Block{
    public:
        
};
int main()
{
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
    return 0;
}