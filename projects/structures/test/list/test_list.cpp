#include <gtest/gtest.h>

#include "double_linked_list.hpp"

TEST(DoublyLinkedListTest, DefaultConstructor) {
    PSkorynin::DoublyLinkedList<int> list;
    EXPECT_EQ(list.size(), 0);
}

TEST(DoublyLinkedListTest, PushFront) {
    PSkorynin::DoublyLinkedList<int> list;
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    EXPECT_EQ(list.size(), 3);
}

TEST(DoublyLinkedListTest, PushBack) {
    PSkorynin::DoublyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    EXPECT_EQ(list.size(), 3);
}

TEST(DoublyLinkedListTest, HasItem) {
    PSkorynin::DoublyLinkedList<int> list;
    list.push_back("a");
    list.push_back("b");
    list.push_front("c");
    EXPECT_TRUE(list.has_item("b"));
    EXPECT_FALSE(list.has_item("d"));
}

TEST(DoublyLinkedListTest, RemoveFirst) {
    PSkorynin::DoublyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(1);
    list.remove_first(1);
    EXPECT_EQ(list.size(), 2);
    EXPECT_TRUE(list.has_item(1));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
