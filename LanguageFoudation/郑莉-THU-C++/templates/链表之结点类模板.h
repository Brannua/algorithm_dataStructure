
#pragma once

// 定义结点类模板
template<typename T>
class Node {
public:
    Node(const T & data, Node<T> * next = 0);   // 构造函数
    void insertAfter(Node<T> * p);              // 在本结点之后插入一个同类型的节点
    Node<T> * deleteAfter();                    // 删除本结点的后继结点，并返回其地址
    Node<T> * nextNode();                       // 获取后继结点的地址
    const Node<T> * nextNode() const;           // 获取后继结点的地址
    
private:
    Node<T> * next; // 指向后继结点的指针
    T data;         // 节点数据域中的数据
};

template<typename T>
Node<T>::Node(const T & data, Node<T> * next/* =0 */): data(data), next(next) {}

template<typename T>
Node<T> * Node<T>::nextNode()
{
    return next;
}

template<typename T>
const Node<T> * Node<T>::nextNode() const
{
    return next;
}

template<typename T>
void Node<T>::insertAfter(Node<T> * p)
{
    p->next = next;
    next = p; 
}

template<typename T>
Node<T> * Node<T>::deleteAfter()
{
    Node<T> * tempPtr = next;   // 将欲删除的结点地址保存起来
    if (next == 0)
    {
        return 0;
    }
    next = tempPtr->next;
    return tempPtr;             // 将删除的结点的地址返回给用户，由用户决定这个结点的生杀大权
}
