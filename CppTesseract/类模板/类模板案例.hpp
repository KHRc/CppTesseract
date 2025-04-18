//��������:  ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//* ���Զ��������������Լ��Զ����������͵����ݽ��д洢
//* �������е����ݴ洢������
//* ���캯���п��Դ������������
//* �ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
//* �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//* ����ͨ���±�ķ�ʽ���������е�Ԫ��
//* ���Ի�ȡ�����е�ǰԪ�ظ��������������
#pragma once
using namespace std;	
#include <iostream>

template <class Data>
class MyArray
{
public:
	// �вι��캯��
	MyArray(int capacity) : m_capacity(capacity), m_size(0) { pAddress = new Data[m_capacity]; };
	// �������캯��
	MyArray(const MyArray<Data>& arr) : m_capacity(arr.m_capacity), m_size(arr.m_size) 
	{
		pAddress = new Data[m_capacity]; // �ڶ�����������
		for (int i = 0; i < m_size; i++)
		{
			pAddress[i] = arr.pAddress[i]; // ���
		}
	}
	// ��������
	~MyArray() 
	{
		if (this->pAddress!=NULL)
		{
			delete[] pAddress;
			this->pAddress = NULL;
		}
		cout << "������������" << endl;
	} 
	// ��ֵ���������
	MyArray& operator=(const MyArray<Data>& arr);
	// �±����������
	Data& operator[](int index) { return pAddress[index]; }
	// β�巨
	void push_back(const Data& data);
	// βɾ��
	void pop_back();
	// ��ȡ��ǰԪ�ظ���
	int getSize() const { return m_size; };
	// ��ȡ��������
	int getCapacity() const { return m_capacity; };


private:
	Data* pAddress; // ����ָ��
	int m_capacity; // ��������
	int m_size; // ��ǰԪ�ظ���
};



template <class Data>
MyArray<Data>& MyArray<Data>::operator=(const MyArray<Data>& arr)
{
	if (this != &arr) // ��ֹ�Ը�ֵ
	{
		delete[] pAddress; // �ͷ�ԭ���ڴ�
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		pAddress = new Data[m_capacity]; // �ڶ�����������
		for (int i = 0; i < m_size; i++)
		{
			pAddress[i] = arr.pAddress[i]; // ���
		}
	}
	return *this;
}

template <class Data>
void MyArray<Data>::push_back(const Data& data)
{
	if (m_size == m_capacity)
	{ 
		cout << "����������" << endl;
	}
	else
	{
		pAddress[m_size++] = data; // β�巨
	}
}

template <class Data>
void MyArray<Data>::pop_back()
{
	if (m_size == 0)
	{
		cout << "����Ϊ�գ�" << endl;
	}
	m_size--;
}