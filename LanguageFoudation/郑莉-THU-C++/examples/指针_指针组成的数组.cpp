#include <iostream>
using namespace std;

int main() {
  // char name[] = "mohd";
  // char name2[5] = "mohd";
  // char * name4[5] = "mohd";	// error, 这是指针构成的数组
  

  // char * name3 = "mohd";	// warning
  // const char * foo = "mohd";
  // cout << *foo << endl;
  // cout << foo << endl;
  
  const char * name5[3] = { "abc", "def", "igh" };
  for (int i = 0; i < 3; i ++) {
    cout << name5[i] << endl;
  }

  return 0;
}
