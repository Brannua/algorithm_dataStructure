#include <iostream>
using namespace std;

class Point {
public:
    Point(unsigned x, unsigned y) : x(x), y(y) {}
    void print() { cout << "Point(" << x << ", " << y << ")" << endl; }

    friend Point operator+ (Point& foo, int nOffset) {
        return Point(foo.x + nOffset, foo.y + nOffset);
    }
    friend Point operator+ (int nOffset, Point& foo) {
        return Point(foo.x + nOffset, foo.y + nOffset);
    }
private:
    unsigned x;
    unsigned y;
};

int main() {
    Point pt(10, 10);
    pt.print();

    pt = pt+5;
    pt.print();

    pt = 10 + pt;
    pt.print();
    return 0;
}