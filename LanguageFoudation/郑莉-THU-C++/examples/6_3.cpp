// 对象数组应用举例

#include <iostream>
using namespace std;

class Point {
public:
    Point();
    Point(int iniX, int iniY);
    ~Point();
    void move(int newX, int newY);
    int getX() const { return x; };
    int getY() const { return y; };
private:
    int x, y;
};

Point::Point() {
    x = y = 0;
    cout << "Default constructor called." << endl;
}

Point::Point(int iniX, int iniY) : x(iniX), y(iniY) {
    cout << "Constructor called." << endl;    
}

Point::~Point() {
    cout << "Destructor called." << endl;
}

void Point::move(int newX, int newY) {
    x = newX;
    y = newY;
    cout << "Moving the point to {" << newX << ", " << newY << "}" << endl;
}

int main() {
    cout << "Enter the main..." << endl;
    Point a[2];
    for (int i = 0; i < 2; i++) {
        a[i].move(i + 10, i + 20);
    }
    cout << "Exit the main..." << endl;
    return 0;
}
