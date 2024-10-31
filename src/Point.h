#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
    int z;

    friend ostream& operator<<(ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ", " << point.z << ")";
        return os;
    }
};
