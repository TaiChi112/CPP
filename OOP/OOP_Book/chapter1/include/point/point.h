#include <string>
#ifndef POINT_H
#define POINT_H

class Point
{
    float x, y;
    std::string name;
    static int amount_points;

public:
    Point();
    Point(float x, float y, std::string name);
    ~Point();
    float getX();
    float getY();
    std::string getName();
    void set_point(float x, float y, std::string name);
    void show();
    static int getAmountPoints() {
        return amount_points;
    }
};

#endif