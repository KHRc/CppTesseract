#include<iostream>
#include<string>
using namespace std;

//int main()
//{
//	//2.3.1直接初始与复制初始化
//
//	//int b(50);
//	//int c = 50;
//	//cout << b << "\n";
//	//cout << c << "\n";
//
//	//2.3.2 多个初始化式
//
//	//std::string s1(10, 'A');//'AAAAAAAAAA'
//	//cout << s1 << "\n";
//
//	//double salary = 9999.99, wage(salary + 0.01);
//	//cout << wage << "\n";
//
//	//int interval,
//	//	month = 8, day = 7, year = 1965;
//
//	//std::string s2("C++Primer,4th"),
//	//	publish = "A—w";
//	//cout << s2 << "\n";
//	//cout << publish << "\n";
//
//
//	//2.4 const 修饰符	作用：适合防止修改的定值
//	//extern const int d ;
//
//	//2.5.1 引用
//	
//	//double dval = 3.14;
//	//const int& ri = dval;
//
//	//const int& val3 = 1;
//	//int rval2 = 1.01;
//	//rval2=val3;
//	//
//	//int i, & ri = i;
//	//i = 5;
//	//ri = 10;  // i ri 用的同一地址
//	//std::cout << i << "    " << ri << std::endl;
//
//	//2.6 名字 typedef
//	//typedef int week;
//	//week w1 = 7;
//
//	//2.7 枚举enum
//	//enum open_mod { input, output, append };//默认从0开始，后面变量依次加1，且每个变量类型唯一
//	//enum open_mod { input_1 = 1, output_1, append_1 };//设置从1开始
//	//enum open_mod {
//	//	input_1 = 1, output_1,
//	//	append_1 = 2, append_3
//	//};
//
//	//2.8 struct
//	//typedef 
//	//	struct Sales_item{
//	//private:
//	//	std::string isbn;
//	//}*Sales;
//
//	//Sales_item i;
//	//Sales p;
//}