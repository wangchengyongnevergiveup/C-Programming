//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////��ģ���еĳ�Ա��������ʱ��
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show ����" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show ����" << endl;
//	}
//};
//
////��ģ���еĳ�Ա����������һ��ʼ�����ģ����������н׶�ȷ����T���������Ͳ�ȥ����
//template<class T>
//class MyClass
//{
//public:
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//
//	T obj;
//};
//
//void test1()
//{
//	MyClass <Person1> p1;
//	p1.func1();//Person1 show ����
//	//p1.func2();//"showPerson2": ���� "Person1" �ĳ�Ա	
//	
//	MyClass <Person2> p2;
//	//p2.func1();//"showPerson1": ���� "Person2" �ĳ�Ա
//	p2.func2();//Person2 show ����
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}