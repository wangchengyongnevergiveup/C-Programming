//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////菱形继承
////动物类
//class Animal
//{
//public:
//	int m_Age; // 年龄
//};
//
////Animal称为虚基类
////羊类
//class Sheep : virtual public Animal {};
////驼类
//class Tuo : virtual public Animal {};
//
////羊驼
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
//	//当发生虚继承后，sheep和tuo类中继承了一个vbptr指针;虚基类指针指向的是一个虚基类表vbtable
//	//虚基类表中记录了偏移量 ，通过偏移量可以找到唯一的一个m_Age
//}
//
//void test2()
//{
//	SheepTuo st;
//	st.m_Age = 10;
//
//	//通过Sheep找到偏移量
//	//*(int *)&st 解引用到了 虚基类表中
//	cout << *((int*)*(int*)&st + 1) << endl;//8
//
//	//通过Tuo 找到偏移量
//	cout << *((int*)*((int*)&st + 1) + 1) << endl;//4
//
//	//通过偏移量访问m_Age
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