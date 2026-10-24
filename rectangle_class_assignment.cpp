#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    void set_Width(double w)
     { width = w; 
    }
    void setLength(double l) { 
        length = l; 
    }

    double getWidth() 
    {
         return width; 
        }
    double getLength() { 
        return length; 
    }

    double area() { return width * length; }
    double perimeter() { return 2 * (width + length); }
};

int main() {
    Rectangle r1;
    r1.set_Width(5);
    r1.setLength(3);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    Rectangle r2;
    r2.set_Width(10);
    r2.setLength(4);

    cout << "\nRectangle 2" << endl;
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Length: " << r2.getLength() << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    // Change dimensions of r1
    r1.set_Width(7);
    cout << "\nRectangle 1 after changing width to 7" << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    return 0;

    
}