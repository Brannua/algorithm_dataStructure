// https://pintia.cn/problem-sets/994805342720868352/problems/994805429018673152

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2; getline(cin, s1); getline(cin, s2);

    int hashTable[200];

    for (int i = 0, len = s2.length(); i < len; i ++) {
        hashTable[s2[i]] = 1;
    }
    for (int j = 0, len = s1.length(); j < len; j ++) {
        if (hashTable[s1[j]] == 1) {
            continue;
        }
        cout << s1[j];
    }
    cout << endl;

    return 0;
}
