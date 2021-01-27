#include <iostream>
using namespace std;

class Shape
{
public:
    Shape(){};
    ~Shape(){};
    virtual float getArea() = 0;
    virtual float getPerim() = 0;
};

class Circle : public Shape
{
public:
    Circle(float radius) : radius(radius) {}
    ~Circle() {}
    float getArea() { return 3.14 * radius * radius; }
    float getPerim() { return 6.28 * radius; }

private:
    float radius;
};

class Rectangle : public Shape
{
public:
    Rectangle(float len, float wid) : width(wid), length(len) {}
    ~Rectangle() {}
    float getArea() { return length * width; }
    float getPerim() { return 2 * (length + width); }

private:
    float width;
    float length;
};

int main()
{
    Shape *ptr;
    ptr = new Circle(5);
    cout << ptr->getArea() << endl;
    cout << ptr->getPerim() << endl;
    delete ptr;

    ptr = new Rectangle(4, 6);
    cout << ptr->getArea() << endl;
    cout << ptr->getPerim() << endl;
    delete ptr;

    return 0;
}
