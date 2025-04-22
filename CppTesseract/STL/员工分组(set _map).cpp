//公司今天招聘了10个员工(ABCDEFGHI)，10名员工进入公司之后，需要指派员工在那个部门工作
//员工信息有 : 姓名 工资组成; 部门分为:策划、美术、研发
//随机给10名员工分配部门和工资
//通过multimap进行信息的插入 key(部门编号) value(员工)
//分部门显示员工信息

//策划 1 美术 2 研发 3

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
		string name = "员工";
		name += name_seed[i];
		Employee e(name, rand() % 5001 + 6000);
		m.insert(make_pair(int(rand() % 3 + 1), e));
	}
	cout << "员工分配如下：" << endl;
	cout << "策划 （1） 总人数：" << m.count(1) << endl;
	//std::pair<std::multimap<int, Employee>::iterator, std::multimap<int, Employee>::iterator>find_pos = m.equal_range(1);
	auto range = m.equal_range(1);
	if (m.count(1) != 0)
	{
		for (auto it=range.first;it!=range.second;it++)
		{
			cout << "员工姓名：" << it->second.E_name << "	" << "工资：" << it->second.E_wages << endl;
		}
		
	}
	cout << "--------------------------------" <<  endl;
	cout << "美术 （2） 总人数：" << m.count(2) << endl;
	range = m.equal_range(2);
	if (m.count(2) != 0)
	{
		for (auto it = range.first; it != range.second; it++)
		{
			cout << "员工姓名：" << it->second.E_name << "	" << "工资：" << it->second.E_wages << endl;
		}
	}
	cout << "--------------------------------" << endl;
	cout << "研发 （3） 总人数：" << m.count(3) << endl;
	range = m.equal_range(3);
	if (m.count(3) != 0)
	{
		for (auto it = range.first; it != range.second; it++)
		{
			cout << "员工姓名：" << it->second.E_name << "	" << "工资：" << it->second.E_wages << endl;
		}
	}


}

int main()
{
	// 使用当前时间设置随机数种子
	srand(static_cast<unsigned int>(time(nullptr)));

	test();
	return 0;
}
