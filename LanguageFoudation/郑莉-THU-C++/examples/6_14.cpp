// 通过指针访问类的静态数据成员

#include <iostream>
using namespace std;

class Point {
public:
    Point(int iniX, int iniY) : x(iniX), y(iniY) {
        count ++;
    }
    Point(const Point &p) : x(p.x), y(p.y) {
        count ++;
    }
    ~Point() { count --; }
    int getX() const { return x; }
    int getY() const { return y; }
    static int count;
private:
    int x, y;
};

int Point::count = 0;



int main() {
    int * ptr = &Point::count;
    Point a(4, 5);
    cout << "Point A: " << a.getX() << ", " << a.getY() << endl;
    cout << "Object count=" << *ptr << endl;

    Point b(a);
    cout << "Point B: " << b.getX() << ", " << b.getY() << endl;
    cout << "Object count=" << *ptr << endl;

    return 0;
}
