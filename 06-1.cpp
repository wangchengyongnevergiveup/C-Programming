//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////关系运算符重载
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	bool operator!=(Person& p)
//	{
//		return !(this->m_Name == p.m_Name && this->m_Age == p.m_Age);
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test1()
//{
//	//int a = 10;
//	//int b = 20;
//	//if (a == b)
//	//{
//	//	cout << "a == b " << endl;
//	//}
//	//else
//	//{
//	//	cout << "a != b " << endl;
//	//}
//
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	if (p1 == p2)
//	{
//		cout << "p1 == p2 " << endl;
//	}
//	else
//	{
//		cout << "p1 != p2 " << endl;
//	}
//
//	Person p3("Tom", 18);
//	Person p4("jack", 19);
//	if (p3 != p4)
//	{
//		cout << "p3 != p4 " << endl;
//	}
//	else
//	{
//		cout << "p3 == p4 " << endl;
//	}
//
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}