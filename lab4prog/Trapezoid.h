#pragma once

#include "BaseCForm.h"

namespace lab {
    class Trapezoid : public BaseCForm{
    private:
        double length1 = 0, length2 = 0, width = 0;
        double massVar = 0;
    public:
        Trapezoid() {};

        Trapezoid(double massVar, double length1, double length2, double width)
        {
            this->massVar = massVar;
            this->length1 = length1;
            this->length2 = length2;
            this->width = width;
        };

        const char* classname() override;

        unsigned int size() override;

        void initFromDialog() override;

        double square() override;

        double perimeter() override;

        double mass() const override;

        CVector2D position() override;

        bool operator == (const IPhysObject& ob) const override;

        bool operator < (const IPhysObject& ob) const override;

        void draw() override;
    };
}