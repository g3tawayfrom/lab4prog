#include <iostream>
#include <cmath>
#include "Trapezoid.h"

using namespace std;

namespace lab
{
    const char* Trapezoid::classname() {
        return "Trapezoid";
    }

    unsigned int Trapezoid::size() {
        return sizeof(Trapezoid);
    }

    void Trapezoid::initFromDialog() {
        cout << "Enter lengths and width of the object" << endl;
        cin >> length1 >> length2 >> width;
        cout << "Enter mass of the object" << endl;
        cin >> massVar;
    }

    double Trapezoid::square() {
        return sqrt(((length1 + length2 + 2 * width) / 2 - length1) * ((length1 + length2 + 2 * width) / 2 - length2)
            * ((length1 + length2 + 2 * width) / 2 - width) * ((length1 + length2 + 2 * width) / 2 - width));
    }

    double Trapezoid::perimeter() {
        return length1 + length2 + 2 * width;
    }

    double Trapezoid::mass() const {
        return massVar;
    }

    CVector2D Trapezoid::position() {
        return CVector2D{};
    }

    bool Trapezoid::operator == (const IPhysObject& ob) const {
        if (ob.mass() == this->mass())
            return true;
        else
            return false;
    }

    bool Trapezoid::operator < (const IPhysObject& ob) const {
        if (ob.mass() < this->mass())
            return true;
        else
            return false;
    }

    void Trapezoid::draw() {
        cout << "Mass of the object: " << mass() << " Lengths and width: " << length1 << ", " << length2 << ", " << width;
    }
}