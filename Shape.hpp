//
//  Shape.hpp
//  Shapes Lab
//
//  Created by Arthur on 22/09/25.
//

#ifndef Shape_hpp
#define Shape_hpp
#include <string>
using namespace std;
#include <stdio.h>

class Shape{
public:
    
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual string getName() const = 0;
};



#endif /* Shape_hpp */
