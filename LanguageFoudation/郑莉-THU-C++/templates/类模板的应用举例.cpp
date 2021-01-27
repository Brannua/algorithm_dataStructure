// 实现任意类型数据存取的类模板 Store

#include <iostream>
using namespace std;

struct Student
{
    int id;     // 学号
    float gpa;  // 平均分
};

template<typename T>    // 类模板，实现对任意数据类型进行存取
class Store {
public:
    Store() : haveValue(false) {};                              // 默认构造函数
    void putElem(const T &x) { item = x; haveValue = true; };   // 存入数据函数
    T & getElem();                                              // 提取数据函数
private:
    T item;             // item 用于存放任意类型的数据
    bool haveValue;     // 标记 item 是否已被放入内容
};

template<typename T>
T& Store<T>::getElem()
{
    if (!haveValue) {
        cout << "No item present!!" << endl;
        exit(1);    // 使程序完全退出，返回到操作系统，参数可用来表示程序终止的原因，可以被操作系统接收
    } else {
        return item;
    }
}

int main()
{
    Store<int> s1, s2;
    s1.putElem(3);
    s2.putElem(-7);
    cout << s1.getElem() << " " << s2.getElem() << endl;

    Store<Student> s3;
    Student g = {1000, 23};
    s3.putElem(g);
    // 注意这里没有重载 << ，所以无法直接输出Student对象
    // 结构体默认情况下，成员访问属性为public
    cout << "The student id is " << s3.getElem().id << endl;

    Store<double> d;
    cout << d.getElem() << endl;

    return 0;
}
