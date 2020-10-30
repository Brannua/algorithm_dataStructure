
/**
 * 返回字符串 t 在字符串 s 中出现的最左边的位置
 * 如果在 s 中没有与 t 匹配的子串，就返回 -1
 */

#include <iostream>
using namespace std;

int index(char *s, char *t)
{
    int index = 0; // 初始化假设字符串 t 在字符串 s 中出现的最左边的位置为 0

    while (s[index] != '\0')
    {
        int j = index, k = 0;
        while (t[k] != '\0' && s[j] == t[k])
        {
            j++;
            k++;
        }
        if (t[k] == '\0')
        { // 说明字符串匹配成功
            return index;
        }
        else
        {
            index++; // 假设字符串 t 在字符串 s 中出现的最左边的位置加 1
        }
    }

    // 串 s 遍历完了还没返回，说明没匹配成功，返回 -1
    return -1;
}

int main()
{
    char str1[20], str2[20];
    cout << "输入一个英语单词: ";
    cin >> str1;
    cout << "输入另一个英语单词: ";
    cin >> str2;
    int n = index(str1, str2);
    if (n > 0)
    {
        cout << str2 << "在" << str1 << "中左起第" << n + 1 << "个位置。" << endl;
    }
    else
    {
        cout << str2 << "不在" << str1 << "中。" << endl;
    }

    return 0;
}
