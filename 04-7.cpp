//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////�������ͳ�����
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->m_Age = age;
//	}
//
//	//������:���γ�Ա�����е� thisָ�룬��ָ��ָ���ֵ�������޸�
//	void showPerson() const
//	{
//		//m_Age = 100;
//		m_A = 100;
//
//		//const thisָ��ı��ʣ� const Person * const this 
//		//this = NULL; ָ���ָ�򲻿����޸ģ���ָ��ָ���ֵ ���Ը�
//		cout << "person age = " << this->m_Age << endl;
//	}
//
//	void func()
//	{
//		m_Age = 100;
//		cout << "func����" << endl;
//	}
//
//	int m_Age;
//	mutable int m_A; //�������л򳣶�����Щ����������Ȼ���޸ģ�����ؼ��� mutable
//};
//
//void test1()
//{
//	//������
//	const Person p1(10);
//	//p1.m_Age = 10;
//	p1.m_A = 10;
//
//	p1.showPerson();
//	//p1.func(); //������ ֻ�ܵ��ó�����
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}