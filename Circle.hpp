//
//  Circle.hpp
//  Shapes Lab
//
//  Created by Arthur on 22/09/25.
//
#ifndef Circle_hpp
#define Circle_hpp
#include <string>
using namespace std;
#include <stdio.h>
#include "Shape.hpp"

class Circle : public Shape{

public:
    
    Circle(double rad) : radius(rad){};
    
    Circle(double rad, string n) : radius(rad), name(n){};
    
    double getArea() const override {
            return 3.14159 * radius * radius;
        }

    double getPerimeter() const override{
        return 2 *3.14159 * radius;
    }
 
    string getName() const override{
        return name;
    }
private:
    string name;
    double radius;
};



#endif /* Circle_hpp */

