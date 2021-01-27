/**
 * @desc 例 4-3 游泳池改造预算，定义 Circle 类
 * 一圆形游泳池，需要在其周围建一圆形过道，并在其四周围上栅栏，栅栏价格为 35元/m 过道造价为 20元/m 过道宽度为 3m
 * 游泳池半径由键盘输入，编程计算并输出过道和栅栏的造价
 */
#include <iostream>
using namespace std;

const double PI = 3.1415926535;
const int fencePrice = 35; // 栅栏价格为 35元/m
const int roadPrice = 20;  // 过道造价为 20元/m
const int roadWidth = 3; // 过道宽度为 3m

class Circle
{
public:
    Circle(double &iniR);   // 构造函数
    ~Circle(){};            // 空的内联析构函数，其功能和系统自动生成的隐含析构函数相同
    double getCircleLen();  // 计算圆周长
    double getCircleArea(); // 计算圆面积
private:
    double r;               // 圆半径
};

inline Circle::Circle(double &iniR)
{
    r = iniR;
}

inline double Circle::getCircleLen()
{
    return PI * 2 * r;
}

double Circle::getCircleArea()
{
    return PI * r * r;
}

int main()
{
    cout << "Please enter swim pool's r: ";
    double r;
    cin >> r;

    double width = r + roadWidth;

    Circle pool(r);
    Circle poolArea(width);

    cout << "泳池栅栏的造价为: " << poolArea.getCircleLen() * fencePrice << endl;
    cout << "泳池过道的造价为: " << (poolArea.getCircleArea() - pool.getCircleArea()) * roadPrice << endl;
    return 0;
}