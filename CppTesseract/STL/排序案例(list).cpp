//��������:��Person�Զ����������ͽ�������Person�����������������䡢���
//������� : ������������������������ͬ������߽��н���

using namespace std;
#include<List>
#include<iostream>
#include<algorithm>
#include <ctime> 
class Person
{
public:
	Person(string name, int age, int height) :
		p_Name(name), p_Age(age), p_Height(height)
	{
	}

	string p_Name;
	int p_Age;
	int p_Height;
};


void CreateList(list<Person>& L)
{
	srand(static_cast<unsigned int>(time(0)));
	string NameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ͬѧ";
		name += NameSeed[i];
		Person p1(name, rand() % 6 + 13, rand() % 25 + 155);
		cout << "����:" << p1.p_Name << "	����:" << p1.p_Age << "	���:" << p1.p_Height << endl;
		L.push_back(p1);
	}
}

int main()
{
	list<Person> L1;
	CreateList(L1);
	L1.sort([](Person p1, Person p2) {
		if (p1.p_Age != p2.p_Age)
		{
			return p1.p_Age < p2.p_Age;
		}
		else
		{
			return p1.p_Height > p2.p_Height;
		}
		});
	cout << "�����" << endl;
	for (list<Person>::iterator it = L1.begin();it != L1.end(); it++)
	{
		cout << "����:" << it->p_Name << "	����:" << it->p_Age << "	���:" << it->p_Height << endl;
	}

	return 0;
}