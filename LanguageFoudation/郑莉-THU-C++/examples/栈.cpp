#include <iostream>
#include <cassert>
using namespace std;

template<typename T, int size = 50> // size 是栈的大小
class Stack {
public:
    Stack();                        // 构造函数，用于初始化栈
    void push(const T & item);      // 压栈
    T pop();                        // 弹栈
    void clear();                   // 清空栈
    const T & peek() const;         // 访问栈顶元素
    bool isEmpty() const;           // 测试是否栈空
    bool isFull() const;            // 测试是否栈满
private:
    T list[size];   // 数组，用于存放栈的元素
    int top;        // 栈顶位置（数组下标）
};

template<typename T, int size>
Stack<T>::Stack() : top(-1) {}

template<typename T, int size>
void Stack<T>::push(const T & item)
{
    assert(!isFull());  // 栈满则报错
    list[++top] = item; // 将新元素压入栈顶
}

template<typename T, int size>
T Stack<T>::pop()
{
    assert(!isEmpty());
    return list[top--];
}

template<typename T, int size>
void Stack<T>::clear()
{
    top = -1;
}

template<typename T, int size>
const T & Stack<T>::peek() const
{
    assert(!isEmpty());
    return list[top];
}

template<typename T, int size>
bool Stack<T>::isEmpty() const
{
    return top == -1;
}

template<typename T, int size>
bool Stack<T>::isFull() const
{
    return top == size - 1;
}

int main()
{
    return 0;
}
