/**
 * 例 5-7 常成员函数举例
 * Tips: 常成员函数是常对象唯一一种实现对外接口的方法
 */

#include <iostream>
using namespace std;

class R
{
public:
    R(int newR1, int newR2) : r1(newR1), r2(newR2) {};
    void print();
    void print() const;
private:
    int r1, r2;
};

void R::print()
{
    cout << r1 << " : " << r2 << endl;
}

void R::print() const
{
    cout << r1 << " : " << r2 << " 常对象调用的常成员函数 " << endl;
}

int main()
{
    R a(5, 4);
    a.print();

    const R b(20, 52);
    b.print();

    return 0;
}
