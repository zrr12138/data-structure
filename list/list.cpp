//
// Created by cissy on 2023/10/21.
//

#include "list.h"
#include <iostream>

List::List() {
    pHead = nullptr;
    pTail = nullptr;
}


void List::showList() {
    Node *p = pHead->pNext;
    while (p != pTail) {
        std::cout << p->data << " ";
        p = p->pNext;
    }
    std::cout << std::endl;
}

int List::getLength() {
    int cnt = 0;
    Node *p = pHead->pNext;
    while (p != pTail) {
        p = p->pNext;
        cnt++;
    }
    return cnt;
}

void List::insertData(int index, int data) {
    Node *p = pHead->pNext;
    for (int i = 0; i < index - 1; i++) {
        p = p->pNext;
    }
    Node *pNew = new Node();
    pNew->data = data;
    pNew->pNext = p;
    pNew->pLast = p->pLast;
    p->pLast->pNext = pNew;
    p->pLast = pNew;
}

void List::initList(int len) {
    if (len < 0) {
        std::cout << "The length of initList is illeagal." << std::endl;
        return;
    }
//    pHead = new Node();
//    pHead->pLast = nullptr;
//    pHead->pNext = nullptr;
//    pTail = pHead;
    pHead = new Node();
    pTail = new Node();
    pHead->pLast = nullptr;
    pHead->pNext = pTail;
    pTail->pLast = pHead;
    pTail->pNext = nullptr;
    for (int i = 0; i < len; i++) {
//        Node *pNew = new Node();
        std::cout << "Enter the No." << i + 1 << " node's data:";
        int data;
        std::cin >> data;
        // 尾插法
//        pNew->pNext = nullptr;
//        pNew->pLast = pTail;
//        pTail->pNext = pNew;
//        pTail=pNew;
        //——更新四个连接点
//        pNew->pNext = pTail;
//        pNew->pLast = pTail->pLast;
//        pTail->pLast->pNext = pNew;
//        pTail->pLast = pNew;
        insertData(i + 1, data);
    }
}

void List::insertList(int index, int data) {
    int len = getLength();
    if (index <= 0 || index > len) {
        std::cout << "The index of insertList is illegal." << std::endl;
        return;
    }
    insertData(index, data);
}

void List::deleteList(int index) {
    int len = getLength();
    if (index <= 0 || index > len) {
        std::cout << "The index of deletetList is illegal." << std::endl;
        return;
    }
    Node *p = pHead->pNext;
    for (int i = 0; i < index - 1; i++) {
        p = p->pNext;
    }
    p->pLast->pNext = p->pNext;
    p->pNext->pLast = p->pLast;
    delete p;
}

void List::modifyList(int index, int data) {
    int len = getLength();
    if (index <= 0 || index > len) {
        std::cout << "The index of modifyList is illegal." << std::endl;
        return;
    }
    Node *p = pHead->pNext;
    for (int i = 0; i < index - 1; i++) {
        p = p->pNext;
    }
    p->data = data;
}

int List::inquireIndex(int index) {
    int len = getLength();
    if (index <= 0 || index > len) {
        std::cout << "The index of inquireIndex is illegal." << std::endl;
        return 404;
    }
    Node *p = pHead->pNext;
    for (int i = 0; i < index - 1; i++) {
        p = p->pNext;
    }
    return p->data;
}

void List::inquireData(int data) {
    int cnt = 0, index = 0;
    Node *p = pHead->pNext;
    while (p != pTail) {
        if (p->data == data) {
            std::cout << index + 1 << " ";
            cnt++;
        }
        p = p->pNext;
        index++;
    }
    if (cnt) {
        std::cout << std::endl;
    } else {
        std::cout << "There is no " << data << " in the list." << std::endl;
    }
}
