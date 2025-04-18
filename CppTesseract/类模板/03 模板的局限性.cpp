#include <iostream>
using namespace std;

//模板的局限性
//模板并不是万能的，有些特定数据类型，需要用具体化的方式做特殊实现
class MyClass
{
public:
	MyClass(string name, int age);
	string name;
	int age;
};

MyClass::MyClass(string name, int age) :name(name), age(age)
{
	cout << "MyClass的构造函数被调用" << endl;
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

//模板的特化
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
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}

void test2()
{
	MyClass a("Tom", 20);
	MyClass b("Jerry", 30);
	if (myCompare(a, b))
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}
int main()
{
	test1();
	return 0;
}