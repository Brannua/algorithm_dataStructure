#include <iostream>
using namespace std;

class Foo {
public:
  friend void demo(const Foo& a);
private:
  int foo = 1;
};

void demo(const Foo& a) {
  cout << a.foo << endl;
}

int main(){
  Foo foo;
  demo(foo);
  return 0;
}
