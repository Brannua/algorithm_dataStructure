// 函数指针实例

#include <iostream>
using namespace std;

void printStuff(float) {
    cout << "This is the print stuff function." << endl;
}

void printMessage(float data) {
    cout << "The data to be listed is " << data << endl;
}

void printFloat(float data) {
    cout << "The data to be printed is " << data << endl;
}

const float PI = 3.14159f;
const float TWO_PI = PI * 2.0f;

int main() {
    void (* functionPointer)(float);
    printStuff(PI);                 // This is the print stuff function.
    functionPointer = printStuff;
    functionPointer(PI);            // This is the print stuff function.
    functionPointer = printMessage;
    functionPointer(TWO_PI);        // The data to be listed is 6.xxx
    functionPointer(13.0);          // The data to be listed is 13.0
    functionPointer = printFloat;
    functionPointer(PI);            // The data to be printed is 3.xxx
    printFloat(PI);                 // The data to be printed is 3.xxx
    return 0;
}
