// vector 是一个类模板
// vector 创建的动态数组都是 vector 类模板的对象

#include <iostream>
#include <vector>
using namespace std;

double average(const vector<double> &arr) {
    double sum = 0;
    for (unsigned int i = 0; i < arr.size(); i ++) {
        sum += arr[i];
    }
    return sum / arr.size();
}

int main() {
    unsigned int n;
    cout << "n = ";
    cin >> n;
    cout << "Please input " << n << " real numbers:" << endl;

    vector<double> arr(n);
    for (unsigned int i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    cout << "Average=" << average(arr) << endl;

    return 0;
}
