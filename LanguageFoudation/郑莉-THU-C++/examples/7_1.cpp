/**
 * Point 类的公有继承
 */

// point.h
#ifndef _POINT_H_
#define _POINT_H_

class Point {
public:
    void initPoint(float x = 0, float y = 0) { this->x = x; this->y = y; }
    float getX() const { return x; }
    float getY() const { return y; }
    void move(float offX, float offY) { x += offX; y += offY; }
private:
    float x, y;
};

#endif

// Rectangle.h
#ifndef _RECTABGLE_H_
#define _RECTABGLE_H_
// #include "point.h" // ( 两个类拆成两个头文件，这里一定要引入！！ )

class Rectangle: public Point {
public:
    void initRectangle(float iniX, float iniY, float iniW, float iniH) {
        // this 隐含指向调用此成员方法的对象实例
        // 以下代码相当于省略了前缀 this->
        initPoint(iniX, iniY); // -------------->  代码重( chong )用！！！
        w = iniW;
        h = iniH;
    }
    float getW() const { return w; }
    float getH() const { return h; }
private:
    float w, h;
};

#endif

#include <iostream>
#include <cmath>
using namespace std;

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
