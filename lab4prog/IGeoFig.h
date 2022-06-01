#pragma once

namespace lab {
    class IGeoFig {
    public:
        virtual double square() = 0;
        virtual double perimeter() = 0;
    };
}