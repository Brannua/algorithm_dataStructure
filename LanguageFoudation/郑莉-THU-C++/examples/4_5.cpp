
// 使用联合体保存成绩信息，并且输出

#include <iostream>
using namespace std;

class ExamInfo
{
public:
    ExamInfo(string name, char level) : name(name), mode(LEVEL), level(level) {};
    ExamInfo(string name, bool pass) : name(name), mode(PASS), pass(pass) {};
    ExamInfo(string name, int percent) : name(name), mode(PERCENTAGE), percent(percent) {};
    void show();

private:
    // 课程名
    string name;
    // 成绩类型
    enum            // key
    {
        LEVEL,
        PASS,
        PERCENTAGE,
    } mode;
    // 成绩
    union           // value
    {
        char level;
        bool pass;
        int percent;
    };
};

void ExamInfo::show()
{
    cout << name << ": ";
    switch (mode)
    {
    case LEVEL:
        cout << level;
        break;
    case PASS:
        cout << (pass ? "PASS" : "FAIL");
        break;
    case PERCENTAGE:
        cout << percent;
        break;
    default:
        break;
    }
    cout << endl;
}

int main()
{
    ExamInfo course1("English", 'B');
    ExamInfo course2("Calculus", true);
    ExamInfo course3("C++ Programming", 85);
    course1.show();
    course2.show();
    course3.show();
    return 0;
}
