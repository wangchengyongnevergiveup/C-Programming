//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////类模板中的成员函数创建时机
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show 调用" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show 调用" << endl;
//	}
//};
//
////类模板中的成员函数并不是一开始创建的，而是在运行阶段确定出T的数据类型才去创建
//template<class T>
//class MyClass
//{
//public:
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//
//	T obj;
//};
//
//void test1()
//{
//	MyClass <Person1> p1;
//	p1.func1();//Person1 show 调用
//	//p1.func2();//"showPerson2": 不是 "Person1" 的成员	
//	
//	MyClass <Person2> p2;
//	//p2.func1();//"showPerson1": 不是 "Person2" 的成员
//	p2.func2();//Person2 show 调用
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}