//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////继承中的同名成员处理
//class Base
//{
//public:
//	Base()
//	{
//		this->m_A = 10;
//	}
//	void func()
//	{
//		cout << "Base中的func调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base中的func(int)调用" << endl;
//	}
//
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		this->m_A = 20;
//	}
//	void func()
//	{
//		cout << "Son中的func调用" << endl;
//	}
//
//	int m_A;
//};
//
//void test1()
//{
//	Son s1;
//	cout << "s1.m_A = " << s1.m_A << endl;//s1.m_A = 20
//
//	//我们可以利用作用域访问父类中的同名成员
//	cout << "Base中的m_A = " << s1.Base::m_A << endl;//Base中的m_A = 10
//}
//
//void test2()
//{
//	Son s1;
//	s1.func();//Son中的func调用
//	s1.Base::func(10);//Base中的func(int)调用
//	//当子类重新定义了父类中的同名成员函数，子类的成员函数会隐藏掉父类中所有重载版本的同名成员，可以利用作用域显示指定调用
//}
//
//int main() 
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}
