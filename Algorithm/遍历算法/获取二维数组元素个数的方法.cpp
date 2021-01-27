#include <iostream>
using namespace std;

int main()
{
    int arr[5][6];
    int total = sizeof(arr) / sizeof(int);
    int colNum = sizeof(arr[0]) / sizeof(int);
    int rowNum = total / colNum;
    cout << total << endl;
    cout << colNum << endl;
    cout << rowNum << endl;
    return 0;
}