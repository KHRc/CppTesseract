//�����£���׼���ݿ�
#include<iostream>
#include<string>
#include<vector>
#include<bitset>

using namespace std;

class ES_3_2_4
{
public:
	ES_3_2_4();
	~ES_3_2_4();
	void ES_3_7() 
	{
		string s1("Hello world!");
		string s2("are you ok?");
		if (s1.size() == s2.size())
		{
			cout << "their sizes is same!" << endl;
		}
		else
		{
			cout << "their sizes is not same!" << endl;
			string temp(" ");
			s1.size() < s2.size() ? temp = "s2" : temp = "s1";
			cout << "s1 size:" << s1.size() << endl;
			cout << "s2 size:" << s2.size() << endl;
			cout << "the largest size is " << temp << endl;
		}
	};
private:

};
class _3_3
{
public:
	_3_3()
	{
		a = 10;
		b = 'a';
		c = "fcs";
	};
	

private:
	int a;
	char b;
	string c;
	int arr[5];

};


//int main()
//{
//	//3.2��׼��string���� using std::string
//	//3.2.1 ��ʼ��
//	//string s1 = "a";
//	//string s2(s1);
//	//string s3("value");
//	//string s4(10, 'c');
//	//cout << s2 << endl;
//	//cout << s3 << endl;
//	//cout << s4 << endl;
//
//	//cin >> s3;//" Hello world!"
//	//cout << s3 << endl;
//
//	//��ȡδ֪��string
//	//string word;
//	//while (cin >> word)
//	//{
//	//	cout << word << endl;
//	//	
//	//}
//
//	//3.2.3 ��ȡ�����ı�
//	//string line;
//	//while (std::getline(cin, line))
//	//	cout << line << endl;
//	//std��string�з����� empty(),size(),s1+s2
//
//	//string::size_type  :����string���±�
//	//string str("some string");
//	//for (string::size_type ix = 0; ix != str.size(); ++ix)//string������int->�Ƚϱ���
//	//	str[ix] = '@';
//	//cout << str << endl; 
//
//	//3.2.4 string���ͷ��ش�Сд
//	//tolower->Сд toupper->��д
//	//string s("HELLO WORLD!");
//	//for (string::size_type index = 0; index != s.size(); ++index)
//	//	s[index] = tolower(s[index]);
//	//cout << s << endl;
//	// 
//	//ES_3_2_4 e1;
//	//e1.ES_3_7();
//	
//	//3.3 std�е�vector����
//
//	//3.3.1 vector ����ͳ�ʼ��
//	
//	//vector<int> ivec1 = {1};
//	//vector<int> ivec2(ivec1);
//	//vector<int> ivec4(10, -1);
//
//	//vector<_3_3> ivec5 = { _3_3(), _3_3(),_3_3()};//�Զ����� ������
//
//	//3.3.2 vector ����Ĳ���
//	
//	//ivec1 = {};
//	//ivec1.empty();
//	//ivec1.size();
//	//ivec1.push_back(0);//����Ԫ�أ�����Ψһ��
//
//	//for (vector<int>::size_type ix = 0; ix < 10;)
//	//{
//	//	ivec1.push_back(ix + 1);
//	//	cout << ivec1[++ix];
//	//}
//		
//	//3.4 ������ Ϊ��ͳһ��������������±����������-���������������������ʺϣ�
//
//	//vector<int> ivec(10, -1);
//	//vector<int>::iterator iter;
//	//vector<_3_3>::iterator iter2;
//	
//	//3.4.1begin��end����
//	//iter = ivec.begin();//����Ϊ�գ�ָ����������Ԫ��
//	//iter = ivec.end();//����ĩ�˵�����-��ĩ��Ԫ�ص���һλ  PS:��ԭ����Ϊ��-��end��begin��һ����
//
//	//iter2 = ivec5.begin();
//	//iter2 = ivec5.end();
//	 
//	//vector<_3_3>::iterator mid1 = ivec5.begin() + ivec5.size() / 2;
//
//	//3.5 ��׼�� bitset  ���������λ������
//	//3.5.1. bitset ����Ķ���ͳ�ʼ��
//	
//	//�ڶ��� bitset ʱ��Ҫ��ȷ bitset ���ж���λ�����ڼ������ڸ������ĳ���ֵ
//	bitset <50>a;
//	unsigned long b;
//	bitset <50>c(b);
//	
//	return 0; 
//}