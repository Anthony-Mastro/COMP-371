#include "Point.h"

#include <iostream>

Point::Point() : x(0), y(0), z(0) {
}

Point::Point(int x, int y, int z) : x(x), y(y), z(z) {
}

Point::~Point() = default;

int Point::translate(int d, char axis) {
    if (axis == 'x') {
        x += d;
        return 0;
    }

    if (axis == 'y') {
        y += d;
        return 0;
    }

    if (axis == 'z') {
        z += d;
        return 0;
    }

    return -1;
}

void Point::display() const {
    std::cout << x << " " << y << " " << z << std::endl;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

int Point::getZ() const {
    return z;
}