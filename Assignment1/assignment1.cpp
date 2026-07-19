//
// Created by anthony M on 2026-07-14.
//
#include <iostream>

#include "DynamicArray.h"
#include "Point.h"

int main() {
    int size;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int* array = createArray(size);
    initializeArray(array, size);

    std::cout << "Array elements:" << std::endl;
    printArray(array, size);
    deleteArray(array);

    std::cout << std::endl;

    Point point(1, 2, 3);

    std::cout << "Original Point:" << std::endl;
    point.display();

    point.translate(4, 'x');
    std::cout << "After translate(4, 'x'):" << std::endl;
    point.display();

    point.translate(-1, 'y');
    std::cout << "After translate(-1, 'y'):" << std::endl;
    point.display();

    point.translate(2, 'z');
    std::cout << "After translate(2, 'z'):" << std::endl;
    point.display();

    int result = point.translate(5, 'a');
    std::cout << "Invalid translate result: " << result << std::endl;
    std::cout << "Point after invalid translate:" << std::endl;
    point.display();

    return 0;
}