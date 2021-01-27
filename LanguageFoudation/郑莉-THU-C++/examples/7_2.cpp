/**
 * Point 类私有继承
 */

// Point.h
#ifndef _POINT_H_
#define _POINT_H_

class Point
{
public:
    void initPoint(float iniX = 0, float iniY = 0) { x = iniX; y = iniY; }
    void move(float offX, float offY) { x += offX; y += offY; }
    float getX() const { return x; }
    float getY() const { return y; }
private:
    float x, y;
};

#endif

// Rectangle.h
#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
// #include "Point.h" // ( 两个类拆成两个头文件，这里一定要引入！！ )

class Rectangle: private Point
{
public:
    // 扩充性 & 代码重用 在下面体现得淋漓尽致
    void initRectangle(float iniX, float iniY, float iniW, float iniH) {
        initPoint(iniX, iniY);
        w = iniW;
        h = iniH;
    }
    float getW() const { return w; }
    float getH() const { return h; }
    // 接口不变，但由于是私有继承，所以对接口的内部实现做了改造
    // 添加 Point:: 起到了防止陷入自调用但无出口的死递归
    float getX() const { return Point::getX(); }
    float getY() const { return Point::getY(); }
    void move(float offX, float offY) { Point::move(offX, offY); }
private:
    float w, h;
};

#endif

#include <iostream>
using std::cout;
using std::endl;

int main() {
    Rectangle rect;
    rect.initRectangle(2, 3, 20, 10);
    rect.move(3, 2);
    cout << "The data of rect (x, y, w, h): " << endl;
    cout << rect.getX() << ", "
        << rect.getY() << ", "
        << rect.getW() << ", "
        << rect.getH() << endl;
    return 0;
}
