//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////多继承
//class Base1
//{
//public:
//	Base1()
//	{
//		this->m_A = 10;
//	}
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		this->m_A = 20;
//	}
//	int m_A;
//};
//
////多继承
//class Son : public Base1, public Base2
//{
//public:
//
//	int m_C;
//	int m_D;
//};
//
//void test1()
//{
//	cout << "sizeof Son = " << sizeof(Son) << endl;//16
//
//	Son s;
//	//当多继承的两个父类中有同名成员，需要加作用域区分
//	cout << s.Base1::m_A << endl;//10
//	cout << s.Base2::m_A << endl;//20
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}
