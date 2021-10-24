#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;

    Point(double x, double y) : x(x), y(y) {}
};

class Vector {
    double x, y;

public:
    Vector(double x, double y) : x(x), y(y) {}
    // if we denote p1 and p2 as points A and B, their radius-vectors would be OA and OB
    Vector(Point p1, Point p2) : x(p2.x - p1.x), y(p2.y - p1.y) {}

    // this function should return the sum of the current vector and another "other" as a new Vector
    Vector sum(const Vector& other) const {
        return Vector(0, 0);
    }

    // this function should return the difference of the current vector and another "other" as a new Vector
    Vector difference(const Vector& other) const {
        return Vector(0, 0);
    }

    // this function should return a boolean value, answering the question whether the current vector and another "other" are collinear
    bool is_colinear(const Vector& other) const {
        return false;
    }

    // this function should return the length of the current vector
    double length() const {
        return 0;
    }

    // this function should return the angle between the current vector and another "other"
    double angle(const Vector& other) const {
        return 0;
    }

    // this is for printing the vector
    friend ostream& operator<<(ostream& os, const Vector& c);
};

// this is for printing the vector
ostream& operator<<(ostream& out, const Vector& v) {
    out << "(" << v.x << ", " << v.y << ")";
    return out;
}

// this function should find the area of the triangle made up of the three points p1, p2, p3
double area(const Point& p1, const Point& p2, const Point& p3) {
    return 0;
}

// this function should find the area of the figure made up of up to 50 points
double area(const Point points[50], int size) {
    return 0;
}


int main() {
    Vector v1 = Vector(Point(0, 0), Point(3, 5));
    Vector v2 = Vector(Point(3, 5), Point(7, 3));
    Point points[5] = { Point(4,4), Point(5,4), Point(6,5), Point(2,9), Point(1,6) };

    cout << v1 << " + " << v2 << " = " << v1.sum(v2) << endl;
    cout << v1 << " - " << v2 << " = " << v1.difference(v2) << endl;

    cout << "Colinear: " << v1.is_colinear(v1) << endl;
    cout << "Length: " << v1.length() << endl;
    cout << "Angle: " << v1.angle(v2) << endl;

    cout << "Area triangle: " << area(Point(1, 2), Point(3, -1), Point(2, 4)) << endl;
    cout << "Area polygon: " << area(points, 5) << endl;

    return 0;
}
