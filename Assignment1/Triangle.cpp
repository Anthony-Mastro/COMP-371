#include "Triangle.h"
#include "Point.h"
#include <cmath>
#include <iostream>
#include <ostream>


Triangle::Triangle()
{
    vertex_1 = nullptr;
    vertex_2 = nullptr;
    vertex_3 = nullptr;
}

Triangle::Triangle(Point p1, Point p2, Point p3) {
    vertex_1 = new Point(p1);
    vertex_2 = new Point(p2);
    vertex_3 = new Point(p3);
}
Triangle::~Triangle() = default;

void Triangle::translate(int d, char axis)
{
    if (vertex_1 != nullptr && vertex_2 != nullptr && vertex_3 != nullptr) {
        vertex_1->translate(d, axis);
        vertex_2->translate(d, axis);
        vertex_3->translate(d, axis);
    }
    else
        std::cout << "ERROR: Triangle cannot be translated." << std::endl;

    }





double Triangle::calcArea()
{
    if (vertex_1 == nullptr || vertex_2 == nullptr || vertex_3 == nullptr) {
        std::cout << "ERROR: Triangle cannot be calculated." << std::endl;
        return -1;
    }
    // Vector AB
    double ax = vertex_2->getX() - vertex_1->getX();
    double ay = vertex_2->getY() - vertex_1->getY();
    double az = vertex_2->getZ() - vertex_1->getZ();

    // Vector AC
    double bx = vertex_3->getX() - vertex_1->getX();
    double by = vertex_3->getY() - vertex_1->getY();
    double bz = vertex_3->getZ() - vertex_1->getZ();

    // Cross product AB x AC
    double cx = ay * bz - az * by;
    double cy = az * bx - ax * bz;
    double cz = ax * by - ay * bx;

    // Magnitude of cross product / 2
    double area = 0.5 * sqrt(cx * cx + cy * cy + cz * cz);

    return area;
}

void Triangle::print() {
    std::cout << "Vertext 1: "; vertex_1->display();
    std::cout << "Vertext 2: ";  vertex_2->display();
    std::cout << "Vertext 3: "; vertex_3->display();

}