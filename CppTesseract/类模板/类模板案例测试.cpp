#include "��ģ�尸��.hpp"
#include <string>

void test01() 
{
	MyArray<int> arr(5);
	MyArray<int> arr2(arr); // ���Կ������캯��
	MyArray<int > arr3(100);
	arr3 = arr; // ���Ը�ֵ���������
	//arr = { 1,2,3,4,5,6 };
	//MyArray<string> arr2(5);

}
void test02()
{
    // ���Թ��캯��
    MyArray<int> arr(5);
    cout << "��������: " << arr.getCapacity() << endl;
    cout << "��ǰԪ�ظ���: " << arr.getSize() << endl;

    // ����β�巨
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    cout << "β���ǰԪ�ظ���: " << arr.getSize() << endl;

    // �����±������
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // ����βɾ��
    arr.pop_back();
    cout << "βɾ��ǰԪ�ظ���: " << arr.getSize() << endl;

    // ���Կ������캯��
    MyArray<int> arr2(arr);
    cout << "���������arr2��Ԫ��: ";
    for (int i = 0; i < arr2.getSize(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // ���Ը�ֵ���������
    MyArray<int> arr3(10);
    arr3 = arr;
    cout << "��ֵ��arr3��Ԫ��: ";
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