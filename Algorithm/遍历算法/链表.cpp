#include <iostream>
using namespace std;

class Node {
public:
    Node(int num) {
        data = num;
        nextNode = NULL;
    }
    void print() {
        cout << data << endl;
    }
    Node * next() {
        return this->nextNode;
    }
    friend class Link;
private:
    int data;
    Node * nextNode;
};

class Link {
public:
    Link() {
        head = NULL;
    }
    Node * push(Node * newNode) {
        newNode->nextNode = head;
        head = newNode;
        return head;
    }
    void print() {
        Node * ptr = head;
        while (ptr != NULL)
        {
            ptr->print();
            ptr = ptr->next();
        }
    }
private:
    Node * head;
};

int main() {
    Node a(1), b(2), c(3);
    Link link;
    link.push(&a);
    link.push(&b);
    link.push(&c);
    link.print();
    return 0;
}
