#include <iostream>
using namespace std;

class Calculator {
public:
    void run();     // 启动计算器程序
    void clear();   // 清空操作数栈
private:
    Stack<double> s;        // 操作数栈
    void enter(double num); // 压栈
    void compute(char op);  // 执行由操作符 op 指定的运算
    bool getTwoOperands(double & opnd1, double & opnd2);
};

void Calculator::run()
{
    string str;
    while(cin >> str, str != "q")
    {
        switch(str[0])
        {
            case 'c':
                s.clear();
                break;
            case '-':   // 需要判断是减号还是负号
                if (str.szie() > 1)
                {
                    enter(stringToDouble(str));
                }
                else
                {
                    compute(str[0]);
                }
            case '+':
            case '*':
            case '/':
            case '^':
                compute(str[0]);
                break;
            default:
                enter(stringToDouble(str));
                break;
        }
    }
}

void Calculator::clear()
{
    s.clear();
}

void Calculator::enter(double num)
{
    s.push(num);
}

void Calculator::compute(char op)
{
    double operand1, operand2;
    bool result = getTwoOperands(operand1, operand2);

    if (result)
    {
        switch(op)
        {
            case '+':
                s.push(operand1 + operand2);
                break;
            case '-':
                s.push(operand1 - operand2);
                break;
            case '*':
                s.push(operand1 * operand2);
                break;
            case '/':
                if (opreand1 == 0)
                {
                    cerr << "Divided by 0!" << endl;
                    s.clear();  // 除数为 0 时清空操作数栈
                }
                else
                {
                    s.push(operand2 / operand1);
                }
                break;
            case '^':
                s.push(pow(operand1, operand2));
            default:
                cerr << "Unrecognized operator!" << endl;
                break;
        }
        cout << "=" << s.peek() << " "; // 输出本次运算结果
    }
    else
    {
        s.clear();  // 操作数不够，清空栈
    }
}

// 工具函数：将字符串转换为实数
inline double stringToDouble(const string & str)
{
    istringstream stream(str);
    double result;
    stream >> result;
    return result;
}

int main()
{
    Calculator c;
    c.run();
    return 0;
}
