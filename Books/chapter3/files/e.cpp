#include <iostream>

using namespace std;

class Book
{
    string title;
    float price;

public:
    Book() : title(""), price(0) {}
    Book(string t, float p) : title(t), price(p) {}
    void display()
    {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};
class MyIntArray
{
    int x;
    int *p;

public:
    MyIntArray() : x(0), p(NULL) {}
    MyIntArray(int x)
    {
        set(x);
    }
    ~MyIntArray()
    {
        delete[] p;
        cout << "delete pointer *p" << endl;
    }
    void set(int x)
    {
        this->x = x;
        p = new int[x];
    }
    void setA()
    {
        cout << "Input value : " << endl;
        for (int i = 0; i < x; i++)
        {
            cout << "p[" << i << "] = ";
            cin >> p[i];
        }
    }
    void showA()
    {
        cout << "Show value : " << endl;
        for (int i = 0; i < x; i++)
        {
            cout << "p[" << i << "] = " << p[i] << endl;
        }
    }
};
int main()
{
    MyIntArray a2(3);
    a2.setA();
    a2.showA();

    // int num;
    // cout << "Enter number of books : ";
    // cin >> num;
    // Book *books = new Book[num];
    // for (int i = 0; i < num; i++)
    // {
    //     string title;
    //     float price;
    //     cout << "Enter title of book " << i + 1 << " : ";
    //     cin >> title;
    //     cout << "Enter price of book " << i + 1 << " : ";
    //     cin >> price;
    //     books[i] = Book(title, price);
    // }
    // cout << "\nBook detail:\n";
    // for (int i = 0; i < num; i++)
    // {

    //     books[i].display();
    // }
    // delete[] books;

    return 0;
}