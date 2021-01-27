// 例 4-7 用结构体表示学生的基本信息
#include <iostream>
using namespace std;

struct Student
{
    int num;     // 学号
    string name; // 姓名，字符串对象，将在第 6 章详细介绍
    char sex;    // 性别
    int age;     // 年龄
};

int main()
{
    Student foo = {66666, "lpj", 'M', 21};
    cout << foo.num << endl;
    cout << foo.name << endl;
    cout << foo.sex << endl;
    cout << foo.age << endl;
    return 0;
}
