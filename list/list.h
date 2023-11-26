//
// Created by cissy on 2023/10/21.
//

#ifndef DATA_STRUCTURE_LIST_H
#define DATA_STRUCTURE_LIST_H

// 节点
class Node {
public:
    int data;
    Node *pNext;
    Node *pLast;
};

// 双向链表
class List {
private:
    Node *pHead;
    Node *pTail;
    int length;
public:
    List(); // 构造函数
    void showList(); // 打印链表
    int getLength(); // 获取链表长度
    void insertData(int index, int data); // 在index处插入数据data
    void initList(int len); // 初始化链表
    void insertList(int index, int data); // 在链表中index处插入数据data【增】
    void deleteList(int index); // 删除链表中index处数据【删】
    void modifyList(int index, int data); // 修改链表中index处数据为data【改】
    int inquireIndex(int index); // 在链表中查询index处所在数据data【查】
    void inquireData(int data); // 在链表中查询数据data所在所有index【查】
};


#endif //DATA_STRUCTURE_LIST_H
