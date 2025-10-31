#include <iostream>

using namespace std;

class Figure {
    static int count;

public:
    
    static double TriangleArea(double a, double b, double c) {
        double p = (a + b + c)  /  2;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        count++;
        return area;
    }

    
    static double RectArea(double length, double width) {
        count++;
        return length * width;
    }

    static double SquareArea(double side) {
        count++;
        return side * side;
    }

    static double RombusArea(double d1, double d2) {
        count++;
        return 0.5 * d1 * d2;
    }

    static int getCount() {
        return count;
    }
};

int Figure::count = 0;

int main() {

    double tri = Figure::TriangleArea(3, 4, 5);
    cout << "P treug (3, 4, 5): " << tri << endl;

    double rect = Figure::RectArea(4, 6);
    cout << "p Pryamioygol (4 x 6): " << rect << endl;

    double square = Figure::SquareArea(5);
    cout << "p square( 5): " << square << endl;

    double romb = Figure::RombusArea(4, 6);
    cout << "p Romb ( 4 , 6): " << romb << endl;

    cout << "\nall p: " << Figure::getCount() << endl;

    return 0;
}
