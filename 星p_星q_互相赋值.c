#include <stdio.h>

int main() {
    int * p;
    int * q;
    int a = 4;
    int b = 5;
    p = &a;
    q = &b;
    *p = *q;
    printf("%d, %d", a, b);
    return 0;
}
