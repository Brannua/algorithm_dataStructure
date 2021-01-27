#include <iostream>
using namespace std;

/**
 * 4-12 定义一个数据类型 datatype 类，能处理包含字符型，整型，浮点型三种类型的数据，给出其构造函数
 */
class datatype
{
public:
    datatype(char cc);
    datatype(int ii);
    datatype(float ff);
    void show();
private:
    enum
    {
        CHAR,
        INT,
        FLOAT
    } type;
    char ccc;
    int iii;
    float fff;
};

datatype::datatype(char cc)
{
    type = CHAR;
    ccc = cc;
}
datatype::datatype(int ii)
{
    type = INT;
    iii = ii;
}
datatype::datatype(float ff)
{
    type = FLOAT;
    fff = ff;
}
void datatype::show()
{
    switch (type)
    {
    case CHAR:
        cout << ccc << endl;
        break;
    case INT:
        cout << iii << endl;
        break;
    case FLOAT:
        cout << fff << endl;
        break;
    default:
        break;
    }
}

int main()
{
    datatype foo('c');
    datatype foo2(1);
    datatype foo3(2.4f);

    foo.show();
    foo2.show();
    foo3.show();
    return 0;
}
