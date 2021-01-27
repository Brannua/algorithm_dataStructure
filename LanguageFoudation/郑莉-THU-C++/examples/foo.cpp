#include <iostream>
using namespace std;

struct Base1
{
    int x;
};

struct Base2
{
    float y;
};

struct Derived : Base1, Base2 {};

int main()
{
    Derived * ptr = new Derived;
    ptr->x = 1;
    ptr->y = 2.0f;

    Base2 * ptr2 = static_cast<Base2*>(ptr);
    cout << ptr->y << " " << ptr2->y << endl;

    Base2 * ptr3 = ptr;
    cout << ptr->y << " " << ptr3->y << endl;

    void * pv = ptr;
    Base2 * ptr4 = static_cast<Base2*>(pv);
    cout << ptr->y << " " << ptr4->y << endl;

    delete ptr;

    return 0;
}
