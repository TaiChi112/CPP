#include <iostream>
#include "prototype.h"

PencilSharpener::PencilSharpener() : color(0), price(0.0) {}
PencilSharpener::PencilSharpener(int c, double p) : color((c >= 1 && c <= 5 ? c : 1)), price((p > 0 ? p : 0)) {}
PencilSharpener::~PencilSharpener() {}
void PencilSharpener::set(int c, double p)
{
    (color = (c >= 1 && c <= 5 ? c : 1));
    (price = p > 0 ? p : 0);
}
void PencilSharpener::setColor(int c) { (color = (c >= 1 && c <= 5 ? c : 1)); }
void PencilSharpener::setPrice(double p) { (price = p > 0 ? p : 0); }
int PencilSharpener::getColor() { return color; }
double PencilSharpener::getPrice() { return price; }
void PencilSharpener::show() { std::cout << "PencilSharpener: color=" << color << ", price=" << price << std::endl; }

EletricSharpener::EletricSharpener() : type(0) {}