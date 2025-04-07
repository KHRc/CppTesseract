//第三章：标准数据库
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
//	//3.2标准库string类型 using std::string
//	//3.2.1 初始化
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
//	//读取未知数string
//	//string word;
//	//while (cin >> word)
//	//{
//	//	cout << word << endl;
//	//	
//	//}
//
//	//3.2.3 读取整行文本
//	//string line;
//	//while (std::getline(cin, line))
//	//	cout << line << endl;
//	//std中string有方法： empty(),size(),s1+s2
//
//	//string::size_type  :用做string的下标
//	//string str("some string");
//	//for (string::size_type ix = 0; ix != str.size(); ++ix)//string类型中int->比较保险
//	//	str[ix] = '@';
//	//cout << str << endl; 
//
//	//3.2.4 string类型返回大小写
//	//tolower->小写 toupper->大写
//	//string s("HELLO WORLD!");
//	//for (string::size_type index = 0; index != s.size(); ++index)
//	//	s[index] = tolower(s[index]);
//	//cout << s << endl;
//	// 
//	//ES_3_2_4 e1;
//	//e1.ES_3_7();
//	
//	//3.3 std中的vector类型
//
//	//3.3.1 vector 定义和初始化
//	
//	//vector<int> ivec1 = {1};
//	//vector<int> ivec2(ivec1);
//	//vector<int> ivec4(10, -1);
//
//	//vector<_3_3> ivec5 = { _3_3(), _3_3(),_3_3()};//自定义类 的容器
//
//	//3.3.2 vector 对象的操作
//	
//	//ivec1 = {};
//	//ivec1.empty();
//	//ivec1.size();
//	//ivec1.push_back(0);//插入元素（有且唯一）
//
//	//for (vector<int>::size_type ix = 0; ix < 10;)
//	//{
//	//	ivec1.push_back(ix + 1);
//	//	cout << ivec1[++ix];
//	//}
//		
//	//3.4 迭代器 为了统一化，替代容器中下标的数据类型-》遍历（对所有容器皆适合）
//
//	//vector<int> ivec(10, -1);
//	//vector<int>::iterator iter;
//	//vector<_3_3>::iterator iter2;
//	
//	//3.4.1begin和end操作
//	//iter = ivec.begin();//若不为空，指向容器的首元素
//	//iter = ivec.end();//超出末端迭代器-》末端元素的下一位  PS:若原容器为空-》end与begin是一样的
//
//	//iter2 = ivec5.begin();
//	//iter2 = ivec5.end();
//	 
//	//vector<_3_3>::iterator mid1 = ivec5.begin() + ivec5.size() / 2;
//
//	//3.5 标准库 bitset  处理二进制位的有序集
//	//3.5.1. bitset 对象的定义和初始化
//	
//	//在定义 bitset 时，要明确 bitset 含有多少位，须在尖括号内给出它的长度值
//	bitset <50>a;
//	unsigned long b;
//	bitset <50>c(b);
//	
//	return 0; 
//}