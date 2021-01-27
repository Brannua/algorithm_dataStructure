// 例题 5-1

#include <iostream>
using namespace std;

int i;  // 在全局命名空间中的全局变量
namespace Ns {
    int j;  // 在 Ns 命名空间中的全局变量
}

int main()
{
    i = 5;
    Ns::j = 6;
    {
        using namespace Ns;

        int i;
        i = 7;
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
    }
    cout << "i = " << i << endl;
    return 0;
}
