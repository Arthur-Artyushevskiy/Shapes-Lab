//
//  RightTriangle.hpp
//  Shapes Lab
//
//  Created by Arthur on 22/09/25.
//
#ifndef RightTriangle_hpp
#define RightTriangle_hpp
#include <cmath>
#include <stdio.h>
#include "Shape.hpp"
#include <string>

using namespace std;
class RightTriangle : public Shape{
public:
    RightTriangle(double h, double l) : height(h), length(l){}
    
    RightTriangle(double h, double l, string n) : height(h), length(l), name(n){}
    
    double getArea() const override{
        return 0.5*height*length;
    }
    
    double getPerimeter() const override{
        return height+ length + getHypotenuse();
    }
    
    double getHypotenuse() const{
        return sqrt(pow(height, 2) + pow(length, 2));
        
    }
    string getName() const override{
        return name;
    }

private:
    string name;
    double height;
    double length;
};


#endif // RightTriangle_hpp
