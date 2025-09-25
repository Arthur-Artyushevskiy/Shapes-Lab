//
//  Rectangle.hpp
//  Shapes Lab
//
//  Created by Arthur on 22/09/25.
//
#ifndef Rectangle_hpp
#define Rectangle_hpp
#include <string>
using namespace std;
#include <stdio.h>
#include "Shape.hpp"

class Rectangle : public Shape{
public:
    Rectangle(double w, double l) : width(w), length(l){}
    
    Rectangle(double w, double l, string n) : width(w), length(l), name(n){}
    
    double getArea() const override{
        return width * length;
    }
    double getPerimeter() const override{
        return 2*width + 2*length;
    }
    
    string getName() const override{
        return name;
    }
private:
    string name;
    double width;
    double length;
};


#endif /* Rectangle_hpp */
