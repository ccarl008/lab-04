#include <iostream>
#include "../header/rectangle.hpp"
 
using namespace std;
 
int main()
{
    Rectangle rect1, rect2, rect3;
    rect1.set_width(3);
    rect1.set_height(4);
 
    rect2.set_width(4);
    rect2.set_height(2);

    rect3 = Rectangle(4,2);
 
    cout << "Rectangle 1 area: " << rect1.area() << endl;
    cout << "Rectangle 2 area: " << rect2.area() << endl;
    cout << "Rectangle 3 area: " << rect3.area() << endl;
    
    cout << "Rectangle 1 perimeter: " << rect1.perimeter() << endl;
    cout << "Rectangle 2 perimeter: " << rect2.perimeter() << endl;
    cout << "Rectangle 3 perimeter: " << rect3.perimeter() << endl;

    return 0;
}
