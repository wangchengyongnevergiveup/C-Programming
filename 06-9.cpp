//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////�̳��е�ͬ����̬��Ա����
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "Base�е�func���� " << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base�е�func(int a)���� " << endl;
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
//		cout << "Son�е�func���� " << endl;
//	}
//
//	static int m_A;
//};
//
//int Son::m_A = 20;
//
//void test1()
//{
//	//1��ͨ���������
//	Son s;
//	cout << "m_A = " << s.m_A << endl;//m_A = 20
//	cout << "Base�е�m_A = " << s.Base::m_A << endl;//Base�е�m_A = 10
//
//	//2��ͨ����������
//	cout << "m_A = " << Son::m_A << endl;//m_A = 20
//	//ͨ�������ķ�ʽ���ʸ����������µ�m_A��̬��Ա����
//	cout << "Base�е�m_A = " << Son::Base::m_A << endl;//Base�е�m_A = 10
//}
//
//void test2()
//{
//	//1��ͨ������
//	Son s;
//	s.func();//Son�е�func����
//	s.Base::func();//Base�е�func����
//
//	//2��ͨ������
//	Son::func();//Son�е�func����
//	//�������ض��常����ͬ����Ա����������ĳ�Ա���������ص����������а汾����Ҫ�����������
//	Son::Base::func(1);//Base�е�func(int a)����
//}
//
//int main() 
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}