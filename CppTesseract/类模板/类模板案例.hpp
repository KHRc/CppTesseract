//案例描述:  实现一个通用的数组类，要求如下：
//* 可以对内置数据类型以及自定义数据类型的数据进行存储
//* 将数组中的数据存储到堆区
//* 构造函数中可以传入数组的容量
//* 提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
//* 提供尾插法和尾删法对数组中的数据进行增加和删除
//* 可以通过下标的方式访问数组中的元素
//* 可以获取数组中当前元素个数和数组的容量
#pragma once
using namespace std;	
#include <iostream>

template <class Data>
class MyArray
{
public:
	// 有参构造函数
	MyArray(int capacity) : m_capacity(capacity), m_size(0) { pAddress = new Data[m_capacity]; };
	// 拷贝构造函数
	MyArray(const MyArray<Data>& arr) : m_capacity(arr.m_capacity), m_size(arr.m_size) 
	{
		pAddress = new Data[m_capacity]; // 在堆区开辟数组
		for (int i = 0; i < m_size; i++)
		{
			pAddress[i] = arr.pAddress[i]; // 深拷贝
		}
	}
	// 析构函数
	~MyArray() 
	{
		if (this->pAddress!=NULL)
		{
			delete[] pAddress;
			this->pAddress = NULL;
		}
		cout << "析构函数调用" << endl;
	} 
	// 赋值运算符重载
	MyArray& operator=(const MyArray<Data>& arr);
	// 下标运算符重载
	Data& operator[](int index) { return pAddress[index]; }
	// 尾插法
	void push_back(const Data& data);
	// 尾删法
	void pop_back();
	// 获取当前元素个数
	int getSize() const { return m_size; };
	// 获取数组容量
	int getCapacity() const { return m_capacity; };


private:
	Data* pAddress; // 数据指针
	int m_capacity; // 数组容量
	int m_size; // 当前元素个数
};



template <class Data>
MyArray<Data>& MyArray<Data>::operator=(const MyArray<Data>& arr)
{
	if (this != &arr) // 防止自赋值
	{
		delete[] pAddress; // 释放原有内存
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		pAddress = new Data[m_capacity]; // 在堆区开辟数组
		for (int i = 0; i < m_size; i++)
		{
			pAddress[i] = arr.pAddress[i]; // 深拷贝
		}
	}
	return *this;
}

template <class Data>
void MyArray<Data>::push_back(const Data& data)
{
	if (m_size == m_capacity)
	{ 
		cout << "数组已满！" << endl;
	}
	else
	{
		pAddress[m_size++] = data; // 尾插法
	}
}

template <class Data>
void MyArray<Data>::pop_back()
{
	if (m_size == 0)
	{
		cout << "数组为空！" << endl;
	}
	m_size--;
}