//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////�̳��еĹ��������
//class Base1
//{
//public:
//	Base1()
//	{
//		cout << "Base1�Ĺ��캯������" << endl;
//
//	}
//	~Base1()
//	{
//		cout << "Base1��������������" << endl;
//	}
//};
//
//class Other
//{
//public:
//	Other()
//	{
//		cout << "Other�Ĺ��캯������" << endl;
//	}
//	~Other()
//	{
//		cout << "Other��������������" << endl;
//	}
//};
//
//class Son1 :public Base1
//{
//public:
//	Son1()
//	{
//		cout << "Son1�Ĺ��캯������" << endl;
//	}
//	~Son1()
//	{
//		cout << "Son1��������������" << endl;
//	}
//	Other other;
//};
//
//void test1()
//{
//	Son1 s; //�ȵ��ø��๹�죬�ٵ���������Ա���죬 �ٵ��������� ��������˳���빹���෴
//}
//
//class Base2
//{
//public:
//	Base2(int a)
//	{
//		this->m_A = a;
//		cout << "Base2���вι��캯������" << endl;
//	}
//	int m_A;
//};
//
//class Son2 :public Base2
//{
//public:
//	Son2(int a = 1000) :Base2(a)  //���ó�ʼ���б��﷨��ʾ���ø����е��������캯��
//	{
//		cout << "Son2�Ĺ��캯������" << endl;
//	}
//};
//
//void test2()
//{
//	Son2 s;
//	cout << s.m_A << endl;
//}
//
////������ ���졢�������������� ��operator=  �ǲ��ᱻ����̳���ȥ��
//
//int main() 
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}