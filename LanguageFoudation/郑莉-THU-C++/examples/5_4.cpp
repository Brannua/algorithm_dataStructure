
// 例 5-4 具有静态数据成员的 Point 类

#include <iostream>
using namespace std;

class Point
{
public:
    Point(int newX = 0, int newY = 0) : x(newX), y(newY)
    {
        count++;
    };
    Point(Point &p) : x(p.x), y(p.y)
    {
        count++;
    };
    ~Point()
    {
        count--;
    }
    void showCount()
    {
        cout << count << endl;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
private:
    int x, y;
    static int count;
};

int Point::count = 0;

int main()
{
    Point a(4, 5);
    cout << "Point A: " << a.getX() << ", " << a.getY() << endl; // 4   5
    a.showCount(); // 1
    Point b(a);
    cout << "Point B: " << b.getX() << ", " << b.getY() << endl; // 4   5
    b.showCount(); // 2
    return 0;
}
