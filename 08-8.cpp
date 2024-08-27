//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////类模板碰到继承的问题以及解决
//template<class T>
//class Base
//{
//public:
//	T m_A;
//};
//
////必须要指定出父类中的T数据类型，才能给子类分配内存
//class Son :public Base<int>
//{
//
//};
//
//template<class T>
//class Base2
//{
//public:
//	T m_A;
//};
//
//template<class T1, class T2>
//class Son2 :public Base2<T2>
//{
//public:
//	Son2()
//	{
//		cout << typeid(T1).name() << endl;//int
//		cout << typeid(T2).name() << endl;//doubl
//	}
//
//	T1 m_B;
//};
//
//void test1()
//{
//	Son2 <int, double> s;
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}