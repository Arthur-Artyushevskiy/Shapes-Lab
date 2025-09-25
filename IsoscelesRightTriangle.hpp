//
//  IsoscelesRightTriangle.hpp
//  Shapes Lab
//
//  Created by Arthur on 22/09/25.
//
#ifndef IsoscelesRightTriangle_hpp
#define IsoscelesRightTriangle_hpp
#include <stdio.h>
#include "RightTriangle.hpp"
#include <string>
using namespace std;
class IsoscelesRightTriangle : public RightTriangle{
public:
    IsoscelesRightTriangle(double side) : RightTriangle(side, side){}
    
    IsoscelesRightTriangle(double side, string n) : RightTriangle(side, side, n){}
 

};


#endif // IsoscelesRightTriangle_hpp
