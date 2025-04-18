#include<iostream>
using namespace std;

//��ģ��ĳ�Ա����ֻ���ڵ���ʱ�Żᴴ��������Ӱ�����
template <class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age);
	NameType name;
	AgeType age;
};
template <class NameType, class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age)
	:name(name), age(age)
{
	cout << "Name: " << name << ", Age: " << age << endl;
}

void test1()
{
	Person<string, int> p1("Tom", 20);
	Person<string, double> p2("Jerry", 20.5);
	Person<int, int> p3(123, 20);
	Person<int, double> p4(123, 20.5);
	Person<double, double> p5(123.45, 20.5);
}

//��̳С���ָ����ģ�������
class Man :public Person<string, int> {};
//��̳С����������ģ��̳�
template <class NameType, class AgeType, class OccupationType>
class Employee : public Person<NameType, AgeType> 
{
public:
	Employee(NameType name, AgeType age, OccupationType occupation);
	void displayInfo() const; // ��������

	OccupationType occupation;
};

// ���๹�캯��ʵ��
template <class NameType, class AgeType, class OccupationType>
Employee<NameType, AgeType, OccupationType>::Employee(
	NameType name, AgeType age, OccupationType occ
) : Person<NameType, AgeType>(name, age), occupation(occ) 
{
	cout << "Occupation: " << typeid(OccupationType).name() << endl;
	cout << "AgeType: " << typeid(AgeType).name() << endl;
	cout << "NameType: " << typeid(NameType).name() << endl;
}

template <class NameType, class AgeType, class OccupationType>
void Employee<NameType, AgeType, OccupationType>::displayInfo() const {
	cout << "Employee Info: " << this->name << ", "
		<< this->age << ", " << occupation << endl;
}

int main() {
	Employee<string, int, string> emp("Alice", 30, "Engineer");
	emp.displayInfo();
	return 0;
}