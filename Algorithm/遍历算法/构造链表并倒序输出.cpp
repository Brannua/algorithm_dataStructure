#include <iostream>
using namespace std;

// 构造链表的节点
class Node {
public:
    Node(int num)
    {
        this->data = num;
        this->next = 0;
    }
    friend class Link;
private:
    int data;
    Node * next;
};

// 构造链表
class Link {
public:
    Link() { head = 0; }
    void push(int num)
    {
        Node * newNode = new Node(num);
        newNode->next = head;
        head = newNode;
    }
    int pop()
    {
        if (head) {
            int num = head->data;
            head = head->next;
            return num;
        }
        return 0;
    }
private:
    Node * head;
};

int main()
{
    int c[10] = {23, 34, 56, 87, 67, 876, 42, 657, 55, 66};
    Link s;
    for (int i = 0; i < 10; i++)
    {
        s.push(c[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << s.pop() << ", ";
    }
    cout << endl;
    return 0;
}
