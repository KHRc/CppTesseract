//案例描述:将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//排序规则 : 按照年龄进行升序，如果年龄相同按照身高进行降序

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
		string name = "同学";
		name += NameSeed[i];
		Person p1(name, rand() % 6 + 13, rand() % 25 + 155);
		cout << "姓名:" << p1.p_Name << "	年龄:" << p1.p_Age << "	身高:" << p1.p_Height << endl;
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
	cout << "排序后：" << endl;
	for (list<Person>::iterator it = L1.begin();it != L1.end(); it++)
	{
		cout << "姓名:" << it->p_Name << "	年龄:" << it->p_Age << "	身高:" << it->p_Height << endl;
	}

	return 0;
}