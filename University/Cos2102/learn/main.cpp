#include <iostream>

using namespace std;

class Box
{
private:
    int width;
    int height;
    int length;
    char name[5];

public:
    Box()
    {
        setWidth(0);
        setHeight(0);
        setLength(0);
    }
    Box(int width, int height, int length) : width(width), height(height), length(length) {}
    Box(int width, int height, int length)
    {
        setWidth(width);
        setHeight(height);
        setLength(length);
    }
    void setWidth(int width) { this->width = width; }
    void setHeight(int height) { this->height = height; }
    void setLength(int length) { this->length = length; }

    void showBox()
    {
        cout << width << " " << height << " " << length << endl;
    }
    void addWidth(Box box)
    {
        int result;
        result = this->width + box.width;
        cout << result << endl;
    }
    Box(int width) : width(width), height(0), length(0)
    {
        setWidth(width);
    }
    Box(char name[5])
    {
        cout << name << endl;
    }
};
int main()
{
    // Box box1(1, 2, 3);
    // Box box2(5, 2, 3);
    // box1.addWidth(box2);

    // box1.showBox();
    // box2.showBox();    
    return 0;
}