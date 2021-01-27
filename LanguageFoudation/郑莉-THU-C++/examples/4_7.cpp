#include <iostream>
using namespace std;

/**
 * @desc 已有点类 Point 定义，定义一个矩形类，有左下角，右上角两个点，面积，周长属性
 * @desc 面积，周长由左下角和右上角两个点决定
 * @desc 成员函数有：构造函数 && 返回矩形的面积 && 返回周长
 * Tips: 用类的组合实现
 */
class Point
{
public:
    Point(int xx, int yy)
    {
        x = xx;
        y = yy;
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
};

class Rectan
{
public:
    Rectan(Point &p1, Point &p2) : ple(p1), pr(p2)
    {
        float width = ple.getX() - pr.getX();
        float height = ple.getY() - pr.getY();
        area = width * height;
        len = (width + height) * 2;
        len = len < 0 ? (-len) : len;
    };
    Rectan(Rectan &re) : ple(re.ple), pr(re.pr), area(re.area), len(re.len){};
    float getArea();
    float getLen();

private:
    Point ple, pr;
    float area, len;
};

float Rectan::getArea()
{
    return area;
}

float Rectan::getLen()
{
    return len;
}

int main()
{
    int x, y;
    cout << "请输入矩形的左下角点坐标 ple 的 x, y 坐标: ";
    cin >> x >> y;
    Point myp1(x, y);
    cout << "请输入矩形的右上角点坐标 pr 的 x, y 坐标: ";
    cin >> x >> y;
    Point myp2(x, y);

    Rectan rect1(myp1, myp2);
    Rectan rect2(rect1);

    cout << rect1.getArea() << "  " << rect1.getLen() << endl;
    cout << rect2.getArea() << "  " << rect2.getLen() << endl;
    return 0;
}
