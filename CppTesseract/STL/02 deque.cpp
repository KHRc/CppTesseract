using namespace std;  
#include <iostream>  
#include <random>  
#include <deque>  
#include <algorithm>  
#include <unordered_set> // ��Ӵ����Խ��δ�����ʶ�� "unordered_set" ������  

//����˫�˿ɲ��ɾ��������ʱ�vetor��,�м����м�洢����ָ�룬  
//   
//����  Ĭ���������  ��С���� ����  
//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������  
//vector����Ҳ�������� sort��������  

void PrintDeque(int val)  
{  
cout << val << endl;  
}  

void test01()  
{  
   deque<int> d1;  
   random_device rd;  
   mt19937 gen(rd());  
   uniform_int_distribution<> dis(1, 100);  

   unordered_set<int> generatedNumbers; // ���ڴ洢�����ɵ������  

   for (int i = 0; i < 100; i++)  
   {  
       int num;  
       do {  
           num = dis(gen); // ���������  
       } while (generatedNumbers.find(num) != generatedNumbers.end()); // ����Ƿ��Ѵ���  

       generatedNumbers.insert(num); // �������ɵ���������뼯��  

       if (i % 2 == 0)  
           d1.push_front(num);  
       else  
           d1.push_back(num);  
   }  

   cout << "����ǰ:" << endl;  
   for_each(d1.begin(), d1.end(), PrintDeque);  
   sort(d1.begin(), d1.end());  
   cout << "�����:" << endl;  
   for_each(d1.begin(), d1.end(), PrintDeque);  
}  

int main()  
{  
test01();  
return 0;  
}