//
// Created by cissy on 2023/10/21.
//
#include <iostream>
#include "list.h"

int main() {
    List myList;
    myList.initList(3);
    myList.showList();
    myList.insertList(1, 9);
    myList.showList();
    myList.deleteList(2);
    myList.showList();
    myList.modifyList(3, 888);
    myList.showList();
    std::cout << myList.inquireIndex(3) << std::endl;
    myList.inquireData(888);
    std::cout << myList.getLength() << std::endl;
    return 0;
}