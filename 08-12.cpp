//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include "08-12myArray.hpp"
//#include <string>
//
////类模板应用 – 数组类封装
//class Person
//{
//public:
//	Person() {};
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void myPrintInt(MyArray <int> &myIntArr)
//{
//
//	for (int i = 0; i < myIntArr.getSize(); i++)
//	{
//		cout <<" " << myIntArr[i];
//	}
//	cout << endl;
//}
//void test1()
//{
//	MyArray <int> myIntArr(100);
//	for (int i = 0; i < 10; i++)
//	{
//		myIntArr.pushBack(i + 1);
//	}
//	myPrintInt(myIntArr);
//}
//
//void myPrintPerson(MyArray<Person> &myPersonArr)
//{
//	for (int i = 0; i < myPersonArr.getSize(); i++)
//	{
//		cout << "姓名： " << myPersonArr[i].m_Name << " 年龄：" << myPersonArr[i].m_Age << endl;
//	}
//}
//void test2()
//{
//	MyArray<Person> myPersonArr(100);
//	Person p1("孙悟空", 1000);
//	Person p2("猪八戒", 800);
//	Person p3("唐僧", 500);
//	Person p4("沙悟净", 300);
//	Person p5("白龙马", 10000);
//	myPersonArr.pushBack(p1);
//	myPersonArr.pushBack(p2);
//	myPersonArr.pushBack(p3);
//	myPersonArr.pushBack(p4);
//	myPersonArr.pushBack(p5);
//
//	myPrintPerson(myPersonArr);
//	cout << "数组容量： " << myPersonArr.getCapacity() << endl;//100
//	cout << "数组大小： " << myPersonArr.getSize() << endl;//5
//}
//
//int main() 
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}