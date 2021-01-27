#include <iostream>
#include <cassert>
using namespace std;

class Point
{
public:
    Point() : x(0), y(0)
    {
        cout << "Default Constructor called." << endl;
    }
    Point(int x, int y) : x(x), y(y)
    {
        cout << "Constructor called." << endl;
    }
    ~Point()
    {
        cout << "Destructor called." << endl;
    }
    int getX() const
    {
        return x;
    }
    int getY() const
    {
        return y;
    }
    void move(int newX, int newY)
    {
        x = newX;
        y = newY;
    }

private:
    int x, y;
};

class ArrayOfPoints
{
public:
    ArrayOfPoints(int size) : size(size)
    {
        points = new Point[size];
    }
    ~ArrayOfPoints()
    {
        cout << "Deleting..." << endl;
        delete[] points;
    }
    Point &element(int index)
    {
        assert(index >= 0 && index < size);
        return points[index];
    }
    Point &operator[](int index)
    {
        assert(index >= 0 && index < size);
        return points[index];
    }
private:
    int size;
    Point *points;
};

int main()
{
    int count;
    cin >> count;
    ArrayOfPoints points(count);
    // points.element(0) 这种访问数组元素的方式显得啰嗦，如果希望能像普通数组 points[i] 的方式访问数组元素，则需要对下标操作符 [] 进行重载
    // points.element(0).move(5, 0);
    // points.element(1).move(15, 20);
    points[0].move(5, 0);
    points[1].move(15, 20);
    return 0;
}
