//��˾������Ƹ��10��Ա��(ABCDEFGHI)��10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//Ա����Ϣ�� : ���� �������; ���ŷ�Ϊ:�߻����������з�
//�����10��Ա�����䲿�ź͹���
//ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
//�ֲ�����ʾԱ����Ϣ

//�߻� 1 ���� 2 �з� 3

using namespace std;
#include<iostream>
#include<map>
#include<string>
#include <ctime> 

class Employee
{
public:
	Employee(string name, int wages) :E_name(name), E_wages(wages)
	{
	}

	string E_name;
	int E_wages;
};

void test()
{
	multimap<int,Employee> m;
	string name_seed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		string name = "Ա��";
		name += name_seed[i];
		Employee e(name, rand() % 5001 + 6000);
		m.insert(make_pair(int(rand() % 3 + 1), e));
	}
	cout << "Ա���������£�" << endl;
	cout << "�߻� ��1�� ��������" << m.count(1) << endl;
	//std::pair<std::multimap<int, Employee>::iterator, std::multimap<int, Employee>::iterator>find_pos = m.equal_range(1);
	auto range = m.equal_range(1);
	if (m.count(1) != 0)
	{
		for (auto it=range.first;it!=range.second;it++)
		{
			cout << "Ա��������" << it->second.E_name << "	" << "���ʣ�" << it->second.E_wages << endl;
		}
		
	}
	cout << "--------------------------------" <<  endl;
	cout << "���� ��2�� ��������" << m.count(2) << endl;
	range = m.equal_range(2);
	if (m.count(2) != 0)
	{
		for (auto it = range.first; it != range.second; it++)
		{
			cout << "Ա��������" << it->second.E_name << "	" << "���ʣ�" << it->second.E_wages << endl;
		}
	}
	cout << "--------------------------------" << endl;
	cout << "�з� ��3�� ��������" << m.count(3) << endl;
	range = m.equal_range(3);
	if (m.count(3) != 0)
	{
		for (auto it = range.first; it != range.second; it++)
		{
			cout << "Ա��������" << it->second.E_name << "	" << "���ʣ�" << it->second.E_wages << endl;
		}
	}


}

int main()
{
	// ʹ�õ�ǰʱ���������������
	srand(static_cast<unsigned int>(time(nullptr)));

	test();
	return 0;
}
