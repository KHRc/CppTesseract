#include <iostream>
using namespace std;

//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯�ķ�ʽ������ʵ��
class MyClass
{
public:
	MyClass(string name, int age);
	string name;
	int age;
};

MyClass::MyClass(string name, int age) :name(name), age(age)
{
	cout << "MyClass�Ĺ��캯��������" << endl;
}

template<typename T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return 1;
	}
	else
		return 0;
}

//ģ����ػ�
template<>
bool myCompare(MyClass& p1, MyClass& p2)
{
	if (p1.name == p2.name && p1.age == p2.age)
	{
		return 1;
	}
	else
		return 0;
}

void test1()
{
	int a = 10;
	int b = 20;
	if (myCompare(a, b))
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}

void test2()
{
	MyClass a("Tom", 20);
	MyClass b("Jerry", 30);
	if (myCompare(a, b))
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}
int main()
{
	test1();
	return 0;
}