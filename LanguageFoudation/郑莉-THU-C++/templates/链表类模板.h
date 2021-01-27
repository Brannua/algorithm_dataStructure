#pragma once

template<typename T>
class LinkedList {
public:
    LinkedList();                       // 构造函数
    LinkedList(const LinkedList<T> & L);// 拷贝构造函数
    ~LinkedList();                      // 析构函数

    int getSize() const;                // 返回链表中元素的个数
    bool isEmpty() const;               // 链表是否为空

    void reset(int pos = 0);            // 初始化游标的位置
    int currentPosition(void) const;    // 返回游标当前的位置
    void next();                        // 使游标移动到下一个位置
    bool endOfList() const;             // 游标是否到达链表尾

    void inserFront(const T & item);    // 在表头插入结点
    void insertRear(const T & item);    // 在表尾添加结点
    void insertAt(const T & item);      // 在当前结点之前插入结点
    void insertAfter(const T & item);   // 在当前结点之后插入结点
    void deleteCurrent();               // 删除当前结点
    T deleteFront();                    // 删除头结点

    T & data();                         // 返回对当前结点成员数据的引用
    const T & data() const;             // 返回对当前结点成员数据的常引用
    void clear();                       // 清空链表

private:
    // 数据成员
    Node<T> * front, * rear;            // 表头和表尾指针是有用信息
    Node<T> * prevPtr, * currPtr;       // 记录当前遍历位置的指针
    int size;                           // 链表中的元素个数
    int position;                       // 当前元素在表中的位置序号

    // 函数成员
    // 生成新结点，数据域为 item，指针域为 ptrNext
    Node<T> * newNode(const T & item, Node<T> * ptrNext = NULL);
    void freeNode(Node<T> * p);         // 释放结点
    void copy(const LinkedList<T> & L); // 将链表 L 复制到当前链表（假设当前链表为空，被拷贝构造函数和operator=调用）
};
