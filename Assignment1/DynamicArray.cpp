#include "DynamicArray.h"

#include <iostream>

int* createArray(int size) {
    if (size <= 0) {
        return nullptr;
    }

    return new int[size];
}

void initializeArray(int* array, int size) {
    if (array == nullptr || size <= 0) {
        return;
    }

    for (int i = 0; i < size; ++i) {
        array[i] = i;
    }
}

void printArray(int* array, int size) {
    if (array == nullptr || size <= 0) {
        std::cout << std::endl;
        return;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << array[i];
        if (i < size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

void deleteArray(int* array) {
    delete[] array;
}