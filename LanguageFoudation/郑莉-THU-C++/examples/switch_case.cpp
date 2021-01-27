#include <iostream>
using namespace std;

// 1   --> '1'
// /1  --> 1:number
// /11 --> 9:number

char input[] = "SSSWILTECH1\1\11W\1WALLMP1";
int main()
{
    char c;
    for (int i = 2; (c = input[i]) != '\0'; i++)
    {
        switch (c)
        {
        case 'a':
            cout << 'i';
            continue;
        case '1':
            break;
        case 1:
            while ((c = input[++i]) != '\1' && c != '\0');
        case 9:
            cout << 'S';
        case 'E':
        case 'L':
            continue;
        default:
            cout << c;
            continue;
        }
        cout << endl;
    }
    return 0;
}
