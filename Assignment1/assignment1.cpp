//
// Aridj Halima Tair 40250570
// Anthony Mastromonaco 40077240
//
#include <iostream>

#include "DynamicArray.h"
#include "Point.h"
#include "Triangle.h"
using namespace std;

int main() {
    int size;

    cout <<"PART A______________________________________________________________"<<endl;

    cout << "Enter array size: ";
    cin >> size;

    int* array = createArray(size);
    initializeArray(array, size);

    cout << "Array elements:" << endl;
    printArray(array, size);
    deleteArray(array);

    cout << endl;

    
    cout <<"PART B Point______________________________________________________________"<<endl;

    Point point(1, 2, 3);

    cout << "Original Point:" << endl;
    point.display();

    point.translate(4, 'x');
    cout << "After translate(4, 'x'):" << endl;
    point.display();

    point.translate(-1, 'y');
    cout << "After translate(-1, 'y'):" << endl;
    point.display();

    point.translate(2, 'z');
    cout << "After translate(2, 'z'):" << endl;
    point.display();

    int result = point.translate(5, 'a');
    cout << "Invalid translate result: " << result << endl;
    cout << "Point after invalid translate:" << endl;
    point.display();



    cout <<"PART B Triangle______________________________________________________________"<<endl;

    int tx;
    int ty;
    int tz;


    cout << "Create a Triangle" << endl;
    cout << "Type in the X point for the first vertex"<<endl;
    cin >> tx;
    cout << "Type in the Y point for the first vertex" << endl;
    cin >> ty;
    cout << "Type in the Z point for the first vertex" << endl;
    cin >> tz;
    Point pointvertex1(tx, ty, tz);
    cout << "Type in the X point for the second vertex"<<endl;
    cin >> tx;
    cout << "Type in the Y point for the second vertex" << endl;
    cin >> ty;
    cout << "Type in the Z point for the second vertex" << endl;
    cin >> tz;
    Point pointvertex2(tx, ty, tz);
    cout << "Type in the X point for the third vertex"<<endl;
    cin >> tx;
    cout << "Type in the Y point for the third vertex" << endl;
    cin >> ty;
    cout << "Type in the Z point for the third vertex" << endl;
    cin >> tz;
    Point pointvertex3(tx, ty, tz);

    Triangle triangle(pointvertex1, pointvertex2, pointvertex3);

    cout << "The Triangle has been created" << endl;

    int choice;

    do
    {
        std::cout << "\n--- Triangle Menu ---\n";
        std::cout << "1. Display points\n";
        std::cout << "2. Show area\n";
        std::cout << "3. Translate triangle\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";

        std::cin >> choice;

        switch (choice)
        {
            case 1:
                triangle.print();
                break;

            case 2:
                std::cout << "Area: " << triangle.calcArea() << std::endl;
                break;

            case 3: {
                char axis = 0;
                while (true) {
                    cout << "Select an axis x or y or z" << endl;
                    cin >> axis;
                    if (axis == 'x' || axis == 'y' || axis == 'z') {
                        break;
                    }
                    cout << "Invalid axis. Try again" << endl;

                }
                int usertranslate=0;
                cout << "Translate by how much?" << endl;
                cin >> usertranslate;

                triangle.translate(usertranslate, axis);
                cout << "The Triangle has been translated"<<endl;
                break;
            }
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;

            default:
                std::cout << "Invalid choice." << std::endl;
        }

    } while (choice != 4);



    return 0;
}