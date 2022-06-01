#pragma once

#include "BaseCForm.h"

namespace lab {
    class Rectangle : public BaseCForm{
    private:
        double length, width;
        double massVar;
    public:
        Rectangle() {};

        Rectangle(double massVar, double length, double width) 
        {
            this->massVar = massVar;
            this->length = length;
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
