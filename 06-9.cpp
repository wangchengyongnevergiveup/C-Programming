//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////继承中的同名静态成员处理
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "Base中的func调用 " << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base中的func(int a)调用 " << endl;
//	}
//
//	static int m_A;
//};
//
//int Base::m_A = 10;
//
//class Son :public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son中的func调用 " << endl;
//	}
//
//	static int m_A;
//};
//
//int Son::m_A = 20;
//
//void test1()
//{
//	//1、通过对象访问
//	Son s;
//	cout << "m_A = " << s.m_A << endl;//m_A = 20
//	cout << "Base中的m_A = " << s.Base::m_A << endl;//Base中的m_A = 10
//
//	//2、通过类名访问
//	cout << "m_A = " << Son::m_A << endl;//m_A = 20
//	//通过类名的方式访问父类作用域下的m_A静态成员变量
//	cout << "Base中的m_A = " << Son::Base::m_A << endl;//Base中的m_A = 10
//}
//
//void test2()
//{
//	//1、通过对象
//	Son s;
//	s.func();//Son中的func调用
//	s.Base::func();//Base中的func调用
//
//	//2、通过类名
//	Son::func();//Son中的func调用
//	//当子类重定义父类中同名成员函数，子类的成员函数会隐藏掉父类中所有版本，需要加作用域调用
//	Son::Base::func(1);//Base中的func(int a)调用
//}
//
//int main() 
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}