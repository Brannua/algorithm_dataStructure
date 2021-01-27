#pragma once
#include <cassert>

template<typename T, int size = 50>
class Queue {
public:
    Queue(): front(0), rear(0), count(0) {};
    // 测试队列状态
    int getLength() const;  // 求队列元素个数
    bool isEmpty() const;   // 判断队列空否
    bool isFull() const;    // 判断队列满否

    void insert(const T & item);    // 入队
    T remove();                     // 出队
    void clear();                   // 清空队列
    const T & getFront() const;     // 访问队首元素
private:
    T list[size];           // 队列元素数组
    int front, rear, count; // 队头指针，队尾指针，元素个数
};

template<typename T, int size>
int Queue<T, size>::getLength() const
{
    return count;
}

template<typename T, int size>
bool Queue<T, size>::isEmpty() const
{
    return count == 0;
}

template<typename T, int size>
bool Queue<T, size>::isFull() const
{
    count == size;
}

template<typename T, int size>
void Queue<T, size>::insert(const T & item)
{
    assert(count != size);
    list[rear] = item;
    count ++;
    rear = (rear + 1) % size;   // 队尾指针 +1，取余运算实现循环队列    
}

template<typename T, int size>
T Queue<T, size>::remove()
{
    assert(count != 0);
    int temp = front;
    front = (front + 1) % size; // 实现循环队列
    count --;
    return list[temp];
}

template<typename T, int size>
void Queue<T>::clear()
{
    head = 0;
    rear = 0;
    count = 0;
}

template<typename T, int size>
const T & getFront() const
{
    return list[front];
}
