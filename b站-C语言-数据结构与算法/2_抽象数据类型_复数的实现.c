
// 与 C++ 不同，C 语言并没有引用的概念

#include <stdio.h>

typedef struct { 
    float realPart;    // 实部
    float imagePart;   // 虚部
} Complex;             // 定义复数抽象类型

void assign(Complex * A, float real, float image);    // 赋值
void add(Complex * C, Complex * A, Complex * B);      // A + B

void assign(Complex * A, float real, float image) { 
    A->realPart = real; 
    A->imagePart = image; 
} 
void add(Complex * C, Complex * A, Complex * B) { 
    C->realPart = A->realPart + B->realPart; 
    C->imagePart = A->imagePart + B->imagePart; 
} 

int main() 
{ 
    Complex A, B, C; 
    assign(&A, 1.0, 2.0); 
    assign(&B, 2.0, 3.0);  
    add(&C, &A, &B); 
    printf("C.realPart: %f, C.imagePart: %f", C.realPart, C.imagePart);
    return 0;   
}
