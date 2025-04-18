#include<iostream>
using namespace std;

template<typename T>
void mySwap(T& t1, T& t2);
template<typename T>
void mySort(T &arr);
void test1();
void test2();

int main()
{
	//1.����ģ��Ķ����ʹ��
	//test1();
	//2.����ģ��İ���
	test2();
	//3.����ģ����ػ�
	//test3();
	return 0;
}
void test1()
{
	double d1 = 2.3;
	double d2 = 3.4;
	//1.�Զ��Ƶ�(����������һ��)
	//mySwap(d1, d2);
	//2.��ʾָ��
	mySwap<double>(d1, d2);
	cout << "d1: " << d1 << endl;
	cout << "d2: " << d2 << endl;
}

void test2()
{
	char arr[] = "fedcba  ";
	//int arr[] = { 3, 2, 1, 5, 4 };
	mySort(arr);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//���ͱ��-��ģ��
template<class T>
//1.��������
void mySwap(T& t1, T& t2)
{
	T temp = t2;
	t2 = t1;
	t1 = temp;
}

template<class T>
void mySort(T &arr)
{
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				mySwap(arr[j], arr[j + 1]);
			}
		}
	}
}