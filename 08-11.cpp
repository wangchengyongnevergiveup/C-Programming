//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//
////类模板碰到友元函数
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p);
//
//template<class T1, class T2>
//void printPerson3(Person<T1, T2> &p)
//{
//	cout << "类外实现 --- 姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	//1、友元函数类内实现
//	friend void printPerson(Person<T1, T2> &p)
//	{
//		cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
//	}
//
//	//2、友元函数 类外实现
//	friend void printPerson2<>(Person<T1, T2> &p);
//	friend void printPerson3<>(Person<T1, T2> &p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	cout << "类外实现 --- 姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
//}
//
//void test1()
//{
//	Person <string, int> p("Tom", 100);
//	printPerson(p);//姓名： Tom 年龄： 100
//	printPerson2(p);//类外实现 --- 姓名： Tom 年龄： 100
//	printPerson3(p);//类外实现 --- 姓名： Tom 年龄： 100
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}