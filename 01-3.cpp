//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include "01-3game1.h"
//#include "01-3game2.h"
//
////namespace�����ռ�
////1�������ռ���;��������Ƴ�ͻ
//void test01()
//{
//	KingGlory::goAtk();//������ҫ����ʵ��
//	LOL::goAtk();//LOL����ʵ��
//}
//
////2�������ռ��� ���Էű������������ṹ�塢��...
//namespace A
//{
//	int m_A;
//	void func();
//	struct Person
//	{};
//	class Animal
//	{};
//}
//
////3�������ռ� ����Ҫ������ȫ����������
//void test02()
//{
//	//namespace B{}; �������������ֲ�������
//}
//
////4�������ռ����Ƕ�������ռ�
//namespace B
//{
//	int m_A = 10;
//	namespace C
//	{
//		int m_A = 20;
//	}
//}
//void test03()
//{
//	cout << "B�ռ��µ�m_A = " << B::m_A << endl;//10
//	cout << "C�ռ��µ�m_A = " << B::C::m_A << endl;//20
//}
//
////5�������ռ��ǿ��ŵģ�������ʱ�������ռ�����µĳ�Ա
//namespace B
//{
//	int m_B = 100;
//}
//void test04()
//{
//	cout << "B�ռ��µ�m_A = " << B::m_A << endl;//10
//	cout << "B�ռ��µ�m_B = " << B::m_B << endl;//100
//}
//
////6�������ռ������������
//namespace
//{
//	int m_C = 1000;
//	int m_D = 2000;
//	//��д�������ռ�������ģ��൱��д��  static int m_C = 1000; static int m_D = 2000;
//}
//
//void test05()
//{
//	cout << "m_C = " << m_C << endl;//1000
//	cout << "m_D = " << ::m_D << endl;//2000
//}
//
////7�������ռ���������
//namespace veryLongName
//{
//	int m_E = 10000;
//	void func()
//	{
//		cout << "aaa" << endl;
//	}
//}
//
//void test06()
//{
//	namespace veryShortName = veryLongName;
//	cout << veryShortName::m_E << endl;//10000
//	cout << veryLongName::m_E << endl;//10000
//
//}
//
//int main()
//{
//	test01();
//	//test03();
//	//test04();
//	//test05();
//	//test06();
//	system("pause");
//	return 0;
//}