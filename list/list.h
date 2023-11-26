//
// Created by cissy on 2023/10/21.
//

#ifndef DATA_STRUCTURE_LIST_H
#define DATA_STRUCTURE_LIST_H
#include <cstdint>

// 节点
class Node {
public:
    int data;
    Node *pNext;
    Node *pLast;
    Node* Next();
    Node* Last();
};

// 双向链表
class List {
private:
    Node *pHead;
    Node *pTail;
    size_t length;
public:
    List(); // 构造函数
    List(int n);
    void push_back(int value);
    void push_front(int value);
    Node* insert(Node* pos,int value);// insert element before pos , return the pointer to new element
    Node* erase(Node *pos);
    Node* begin();
    Node* rbegin();
    Node* end();
    Node* rend();
    size_t size();
};


#endif //DATA_STRUCTURE_LIST_H
// 设计一套好的api是很难的事情，所以要参考别人的api设计，STL