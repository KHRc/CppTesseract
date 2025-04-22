using namespace std;  
#include <iostream>  
#include <random>  
#include <deque>  
#include <algorithm>  
#include <unordered_set> // 添加此行以解决未定义标识符 "unordered_set" 的问题  

//区别：双端可插可删，随机访问比vetor慢,中继器中间存储的是指针，  
//   
//排序  默认排序规则  从小到大 升序  
//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序  
//vector容器也可以利用 sort进行排序  

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

   unordered_set<int> generatedNumbers; // 用于存储已生成的随机数  

   for (int i = 0; i < 100; i++)  
   {  
       int num;  
       do {  
           num = dis(gen); // 生成随机数  
       } while (generatedNumbers.find(num) != generatedNumbers.end()); // 检查是否已存在  

       generatedNumbers.insert(num); // 将新生成的随机数加入集合  

       if (i % 2 == 0)  
           d1.push_front(num);  
       else  
           d1.push_back(num);  
   }  

   cout << "排序前:" << endl;  
   for_each(d1.begin(), d1.end(), PrintDeque);  
   sort(d1.begin(), d1.end());  
   cout << "排序后:" << endl;  
   for_each(d1.begin(), d1.end(), PrintDeque);  
}  

int main()  
{  
test01();  
return 0;  
}