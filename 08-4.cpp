//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include <string>
//
////模板局限性
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////显示两个变量对比函数
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	return false;
//}
//
////模板并不是真实的通用，
////对于自定义数据类型，可以使用具体化技术，实现对自定义数据类型特殊使用
//template<> bool myCompare(Person& a, Person& b)
//{
//	if (a.m_Name == b.m_Name && a.m_Age == b.m_Age)
//	{
//		return true;
//	}
//	return false;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 10;
//	bool ret = myCompare(a, b);
//	if (ret )
//	{
//		cout << "a == b" << endl;//a == b
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//
//	Person p1("Tom", 19);
//	Person p2("Tom", 20);
//	bool ret1 = myCompare(p1, p2);
//	if (ret1)
//	{
//		cout << "p1 == p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;//p1 != p2
//	}
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}