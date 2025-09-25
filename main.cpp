
#include <iostream>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "RightTriangle.hpp"
#include "IsoscelesRightTriangle.hpp"
#include <vector>
#include <cassert>
using namespace std;

void printAreaToScreen(Shape *s){
    cout << "Name of the Shape: " << s->getName()<< endl;
    cout << "Area of the Shape: " << s->getArea() << endl;
    cout << endl;
}



int main(int argc, const char * argv[]) {
    double rad{1.5};
    Circle c = Circle(rad, "Circle Cob");
    Rectangle r{1.5, 2.0, "Rectangle Rob"};
    Square s {2.5, "Square Sob"};
    RightTriangle rt {2.5, 4.5 ,"Right Triangle Tob "};
    IsoscelesRightTriangle irt{4.2, "Isosceles Right Triangle Iob"};
    
    assert(c.getArea() - 3.14159 * rad*rad== 0 );
    assert(c.getPerimeter() == 2 *3.14159 * rad);
    assert(r.getArea() == 1.5 * 2.0);
    assert(r.getPerimeter() == 2*1.5+2*2.0);
    assert(s.getArea() == 2.5*2.5);
    assert(s.getPerimeter() == 2.5*4);
    assert(rt.getArea() == 2.5*4.5*0.5);
    assert(rt.getPerimeter() - (2.5 +4.5 +5.14781507) <= 0.0001);
    assert(irt.getArea() == 4.2*4.2*0.5);
    assert(irt.getPerimeter() - (4.2+4.2+5.939696962)<= 0.0001);
    cout << endl;
    
    vector<Shape*> Shapes;
    
    Shapes.push_back(&c);
    Shapes.push_back(&r);
    Shapes.push_back(&s);
    Shapes.push_back(&rt);
    Shapes.push_back(&irt);
    
    for(const auto & shape : Shapes){
        printAreaToScreen(shape);
    }
    return EXIT_SUCCESS;
}
