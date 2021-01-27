#include <iostream>
using namespace std;

int main() {
  int arr[] = { 1, 2, 3 };
  const int n = sizeof(arr) / sizeof(int);
  cout << n << endl;
  return 0;
}

