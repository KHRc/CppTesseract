using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

void MyPrint(int val)
{
	cout << val << endl;
}

void test01() {
	//创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
	vector<int> v;
	//向容器中放数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	//v.begin()返回迭代器，这个迭代器指向容器中第一个数据
	//v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();
	//第一种遍历方式：
	while (pBegin != pEnd) {
		cout << *pBegin << endl;
		pBegin++;
	}
	//第二种遍历方式：
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;
	//第三种遍历方式：
	//使用STL提供标准遍历算法 头文件 algorithm
	for_each(v.begin(), v.end(), MyPrint);
}

//2、实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v的容量为： " << v.capacity() << endl;
	cout << "v的大小为： " << v.size() << endl;

	v.resize(3); //重新指定大小
	cout << "v的容量为： " << v.capacity() << endl;
	cout << "v的大小为： " << v.size() << endl;

	//巧用swap收缩内存
	//创建一个临时对象，临时对象的容量为3，swap交换了v和临时对象的值,当这行代码执行完毕，临时对象被销毁，v的容量也就被收缩了
	vector<int>(v).swap(v);

	cout << "v的容量为： " << v.capacity() << endl;
	cout << "v的大小为： " << v.size() << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}