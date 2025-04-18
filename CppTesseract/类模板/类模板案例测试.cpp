#include "类模板案例.hpp"
#include <string>

void test01() 
{
	MyArray<int> arr(5);
	MyArray<int> arr2(arr); // 测试拷贝构造函数
	MyArray<int > arr3(100);
	arr3 = arr; // 测试赋值运算符重载
	//arr = { 1,2,3,4,5,6 };
	//MyArray<string> arr2(5);

}
void test02()
{
    // 测试构造函数
    MyArray<int> arr(5);
    cout << "数组容量: " << arr.getCapacity() << endl;
    cout << "当前元素个数: " << arr.getSize() << endl;

    // 测试尾插法
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    cout << "尾插后当前元素个数: " << arr.getSize() << endl;

    // 测试下标运算符
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // 测试尾删法
    arr.pop_back();
    cout << "尾删后当前元素个数: " << arr.getSize() << endl;

    // 测试拷贝构造函数
    MyArray<int> arr2(arr);
    cout << "拷贝构造后arr2的元素: ";
    for (int i = 0; i < arr2.getSize(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // 测试赋值运算符重载
    MyArray<int> arr3(10);
    arr3 = arr;
    cout << "赋值后arr3的元素: ";
    for (int i = 0; i < arr3.getSize(); i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{
	 //test01();    
	 test02();
	// test03();
	// test04(); 
	//test05();
	 system("pause");
	return 0;
}