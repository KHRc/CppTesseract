using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

void MyPrint(int val)
{
	cout << val << endl;
}

void test01() {
	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ����ݵ�����
	vector<int> v;
	//�������з�����
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
	//v.begin()���ص����������������ָ�������е�һ������
	//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
	//vector<int>::iterator �õ�vector<int>���������ĵ���������
	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();
	//��һ�ֱ�����ʽ��
	while (pBegin != pEnd) {
		cout << *pBegin << endl;
		pBegin++;
	}
	//�ڶ��ֱ�����ʽ��
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;
	//�����ֱ�����ʽ��
	//ʹ��STL�ṩ��׼�����㷨 ͷ�ļ� algorithm
	for_each(v.begin(), v.end(), MyPrint);
}

//2��ʵ����;
//����swap���������ڴ�ռ�
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;

	v.resize(3); //����ָ����С
	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;

	//����swap�����ڴ�
	//����һ����ʱ������ʱ���������Ϊ3��swap������v����ʱ�����ֵ,�����д���ִ����ϣ���ʱ�������٣�v������Ҳ�ͱ�������
	vector<int>(v).swap(v);

	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}