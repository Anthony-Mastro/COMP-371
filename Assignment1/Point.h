#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;
    int z;

public:
    Point();
    Point(int x, int y, int z);
    ~Point();

    int translate(int d, char axis);
    void display() const;

    int getX() const;
    int getY() const;
    int getZ() const;
};

#endif