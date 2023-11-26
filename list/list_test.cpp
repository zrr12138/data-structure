//
// Created by cissy on 2023/10/28.
//
#include "gtest/gtest.h"
#include "list.h"
#include <vector>
// Demonstrate some basic assertions.
TEST(ListTest, test1) {
    List l;
    l.push_back(2);
    l.push_front(1);
    l.push_back(3);
    int i = 1;
    for (Node *it = l.begin(); it != l.end(); it = it->Next()) {
        GTEST_ASSERT_EQ(it->data, i++);
    }
    auto it = l.begin();
    it = it->Next();
    GTEST_ASSERT_EQ(l.erase(it), l.begin());
    GTEST_ASSERT_EQ(l.size(), 2);
    it = l.insert(l.rbegin(), 100);
    GTEST_ASSERT_EQ(it->data, 100);
    GTEST_ASSERT_EQ(l.size(), 3);
    std::vector<int> a = {3, 100, 1};
    i = 0;
    for (it = l.rbegin(); it != l.rend(); it = it->Last()) {
        GTEST_ASSERT_EQ(it->data, a[i++]);
    }
}

