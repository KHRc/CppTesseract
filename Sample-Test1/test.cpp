#include "pch.h"
#include "../CppTesseract/类模板案例.hpp" // 确保路径正确

TEST(MyArrayTest, ConstructorAndCapacity) {
    MyArray<int> arr(5);
    EXPECT_EQ(arr.getCapacity(), 5);
    EXPECT_EQ(arr.getSize(), 0);
}

TEST(MyArrayTest, PushBackAndSize) {
    MyArray<int> arr(5);
    arr.push_back(10);
    arr.push_back(20);
    EXPECT_EQ(arr.getSize(), 2);
    EXPECT_EQ(arr[0], 10);
    EXPECT_EQ(arr[1], 20);
}

TEST(MyArrayTest, PopBack) {
    MyArray<int> arr(5);
    arr.push_back(10);
    arr.push_back(20);
    arr.pop_back();
    EXPECT_EQ(arr.getSize(), 1);
    EXPECT_EQ(arr[0], 10);
}

TEST(MyArrayTest, CopyConstructor) {
    MyArray<int> arr(5);
    arr.push_back(10);
    arr.push_back(20);
    MyArray<int> arrCopy(arr);
    EXPECT_EQ(arrCopy.getSize(), 2);
    EXPECT_EQ(arrCopy[0], 10);
    EXPECT_EQ(arrCopy[1], 20);
}

TEST(MyArrayTest, AssignmentOperator) {
    MyArray<int> arr(5);
    arr.push_back(10);
    arr.push_back(20);
    MyArray<int> arrAssigned(10);
    arrAssigned = arr;
    EXPECT_EQ(arrAssigned.getSize(), 2);
    EXPECT_EQ(arrAssigned[0], 10);
    EXPECT_EQ(arrAssigned[1], 20);
}