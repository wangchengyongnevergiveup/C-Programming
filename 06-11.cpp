//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////���μ̳�
////������
//class Animal
//{
//public:
//	int m_Age; // ����
//};
//
////Animal��Ϊ�����
////����
//class Sheep : virtual public Animal {};
////����
//class Tuo : virtual public Animal {};
//
////����
//class SheepTuo : public Sheep, public Tuo
//{
//};
//
//void test1()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 10;
//	st.Tuo::m_Age = 20;
//	cout << "Sheep::m_Age = " << st.Sheep::m_Age << endl;//Sheep::m_Age = 20
//	cout << "Tuo::m_Age = " << st.Tuo::m_Age << endl;//Tuo::m_Age = 20
//	cout << "age = " << st.m_Age << endl;//age = 20
//
//	//��������̳к�sheep��tuo���м̳���һ��vbptrָ��;�����ָ��ָ�����һ��������vbtable
//	//�������м�¼��ƫ���� ��ͨ��ƫ���������ҵ�Ψһ��һ��m_Age
//}
//
//void test2()
//{
//	SheepTuo st;
//	st.m_Age = 10;
//
//	//ͨ��Sheep�ҵ�ƫ����
//	//*(int *)&st �����õ��� ��������
//	cout << *((int*)*(int*)&st + 1) << endl;//8
//
//	//ͨ��Tuo �ҵ�ƫ����
//	cout << *((int*)*((int*)&st + 1) + 1) << endl;//4
//
//	//ͨ��ƫ��������m_Age
//	cout << "m_Age = " << ((Animal*)((char*)&st + *((int*)*(int*)&st + 1)))->m_Age << endl;
//	//m_Age = 10
//	cout << "m_Age = " << *((int*)((char*)&st + *((int*)*(int*)&st + 1))) << endl;
//	//m_Age = 10
//}
//
//int main() 
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}