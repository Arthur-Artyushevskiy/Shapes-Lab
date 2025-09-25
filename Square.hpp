//
//  Square.hpp
//  Shapes Lab
//
//  Created by Arthur on 22/09/25.
//
# ifndef Square_hpp
# define Square_hpp
using namespace std;
#include <stdio.h>
#include "Rectangle.hpp"
#include <string>

class Square : public Rectangle{
public:
    Square (double side) : Rectangle(side, side){}
    Square (double side, string n) : Rectangle(side, side, n){}

};
#endif // Square_hpp
