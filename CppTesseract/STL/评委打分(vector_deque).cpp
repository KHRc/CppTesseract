using namespace std;
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>


//��5��ѡ��:ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����

class Person
{
public:
	Person(string name, int score) :m_Name(name), m_Score(score)
	{

	}

	string m_Name;
	double m_Score;//ƽ����
};

void CreatePerson(vector<Person> &v)
{
	string nameSeed = "ABCDE";
	for (size_t i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{

	//��5��ѡ�ִ��
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name <<endl;

		deque<double> dScore; //�����ί��ֵ�����
		for (size_t i = 0; i < 10; i++)
		{
			double score = round((rand() % 401 + 600) / 100.0 * 10) / 10; // �����������
			dScore.push_back(score);
		}
		cout << it->m_Name <<"ԭʼ���ݣ�" << endl;
		for_each(dScore.begin(), dScore.end(), [](double score) { cout << score << " "; });
		cout << endl;

		//����
		sort(dScore.begin(), dScore.end());
		cout <<  "��������ݣ�" << endl;
		for_each(dScore.begin(), dScore.end(), [](double score) { cout << score << " "; });
		cout << endl;
		//ȥ����ߡ��ͷ�
		dScore.pop_back();
		dScore.pop_front();

		cout << "ȥ����ߡ��ͷֺ����ݣ�" << endl;
		for_each(dScore.begin(), dScore.end(), [](double score) { cout << score << " "; });
		cout << endl;
		//����ƽ����
		double sum = 0;
		for (deque<double>::iterator dit = dScore.begin(); dit != dScore.end(); dit++)
		{
			sum += *dit;
		}
		double avg = sum / dScore.size();
		//��ֵ
		it->m_Score = round(avg * 10) / 10;
		cout << "ƽ���֣�" << it->m_Score << endl;
		cout << "--------------------------------" << endl;
	}
}

int main()
{


	//1������5��ѡ��
	vector<Person> v;
	CreatePerson(v);

	//2����5��ѡ�ִ��
	setScore(v);
	//����
	for (vector<Person>::iterator it = v.begin();it != v.end(); it++ )
	{
		cout << "������" << it->m_Name << "	" << "ƽ���֣�" << it->m_Score << endl;
	}
	system("pause");
	return 0;

}