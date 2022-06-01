#include <iostream>
#include <cmath>
#include "Rectangle.h"

using namespace std;

namespace lab 
{
    const char* Rectangle::classname() {
        return "Rectangle";
    }

    unsigned int Rectangle::size() {
        return sizeof(Rectangle);
    }

    void Rectangle::initFromDialog() {
        cout << "Enter length and width of the object" << endl;
        cin >> length >> width;
        cout << "Enter mass of the object" << endl;
        cin >> massVar;
    }

    double Rectangle::square() {
        return length * width;
    }

    double Rectangle::perimeter() {
        return 2 * (length + width);
    }

    double Rectangle::mass() const {
        return massVar;
    }

    CVector2D Rectangle::position() {
        return CVector2D{};
    }

    bool Rectangle::operator == (const IPhysObject& ob) const {
        if (ob.mass() == this->mass())
            return true;
        else
            return false;
    }

    bool Rectangle::operator < (const IPhysObject& ob) const {
        if (ob.mass() < this->mass())
            return true;
        else
            return false;
    }

    void Rectangle::draw() {
        cout << "Mass of the object: " << mass() << " Length and width: " << length << ", " << width;
    }
}