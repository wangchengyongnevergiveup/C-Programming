//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////��̳�
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
////��̳�
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
//	//����̳е�������������ͬ����Ա����Ҫ������������
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
