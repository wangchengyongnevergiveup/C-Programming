//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include <string>
//
////��ģ������������
//template<class T1, class T2> //��ģ���п�����Ĭ�ϲ���
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1��ָ����������
//void doWork(Person <string, int> &p)
//{
//	p.showPerson();
//}
//void test1()
//{
//	Person <string, int>p("�����", 999);
//	doWork(p);//������ ����� ���䣺 999
//}
//
////2������ģ�廯
//template<class T1, class T2>
//void doWork2(Person <T1, T2> &p)
//{
//	cout << "T1�������ͣ� " << typeid(T1).name() << endl;
//	//class std::basic_string
//	cout << "T2�������ͣ� " << typeid(T2).name() << endl;
//	//int
//	p.showPerson();
//}
//void test2()
//{
//	Person<string, int>p("��˽�", 998);
//	doWork2(p);//������ ��˽� ���䣺 998
//}
//
////3��������ģ�廯
//template<class T>
//void doWork3(T& p)
//{
//	cout << "T���������ͣ� " << typeid(T).name() << endl;
//	//class Person
//	p.showPerson();
//}
//void test3()
//{
//	Person<string, int>p("��ɮ", 10000);
//	doWork3(p);//������ ��ɮ ���䣺 10000
//}
//int main() 
//{
//	test1();
//	test2();
//	test3();
//	system("pause");
//	return 0;
//}