//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include <string>
//
////类模板做函数参数
//template<class T1, class T2> //类模板中可以有默认参数
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1、指定传入类型
//void doWork(Person <string, int> &p)
//{
//	p.showPerson();
//}
//void test1()
//{
//	Person <string, int>p("孙悟空", 999);
//	doWork(p);//姓名： 孙悟空 年龄： 999
//}
//
////2、参数模板化
//template<class T1, class T2>
//void doWork2(Person <T1, T2> &p)
//{
//	cout << "T1数据类型： " << typeid(T1).name() << endl;
//	//class std::basic_string
//	cout << "T2数据类型： " << typeid(T2).name() << endl;
//	//int
//	p.showPerson();
//}
//void test2()
//{
//	Person<string, int>p("猪八戒", 998);
//	doWork2(p);//姓名： 猪八戒 年龄： 998
//}
//
////3、整个类模板化
//template<class T>
//void doWork3(T& p)
//{
//	cout << "T的数据类型： " << typeid(T).name() << endl;
//	//class Person
//	p.showPerson();
//}
//void test3()
//{
//	Person<string, int>p("唐僧", 10000);
//	doWork3(p);//姓名： 唐僧 年龄： 10000
//}
//int main() 
//{
//	test1();
//	test2();
//	test3();
//	system("pause");
//	return 0;
//}