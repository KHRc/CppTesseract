using namespace std;
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>


//有5名选手:选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分

class Person
{
public:
	Person(string name, int score) :m_Name(name), m_Score(score)
	{

	}

	string m_Name;
	double m_Score;//平均分
};

void CreatePerson(vector<Person> &v)
{
	string nameSeed = "ABCDE";
	for (size_t i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{

	//给5名选手打分
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_Name <<endl;

		deque<double> dScore; //存放评委打分的容器
		for (size_t i = 0; i < 10; i++)
		{
			double score = round((rand() % 401 + 600) / 100.0 * 10) / 10; // 生成随机分数
			dScore.push_back(score);
		}
		cout << it->m_Name <<"原始数据：" << endl;
		for_each(dScore.begin(), dScore.end(), [](double score) { cout << score << " "; });
		cout << endl;

		//排序
		sort(dScore.begin(), dScore.end());
		cout <<  "排序后数据：" << endl;
		for_each(dScore.begin(), dScore.end(), [](double score) { cout << score << " "; });
		cout << endl;
		//去掉最高、低分
		dScore.pop_back();
		dScore.pop_front();

		cout << "去掉最高、低分后数据：" << endl;
		for_each(dScore.begin(), dScore.end(), [](double score) { cout << score << " "; });
		cout << endl;
		//计算平均分
		double sum = 0;
		for (deque<double>::iterator dit = dScore.begin(); dit != dScore.end(); dit++)
		{
			sum += *dit;
		}
		double avg = sum / dScore.size();
		//赋值
		it->m_Score = round(avg * 10) / 10;
		cout << "平均分：" << it->m_Score << endl;
		cout << "--------------------------------" << endl;
	}
}

int main()
{


	//1、创建5名选手
	vector<Person> v;
	CreatePerson(v);

	//2、给5名选手打分
	setScore(v);
	//测试
	for (vector<Person>::iterator it = v.begin();it != v.end(); it++ )
	{
		cout << "姓名：" << it->m_Name << "	" << "平均分：" << it->m_Score << endl;
	}
	system("pause");
	return 0;

}