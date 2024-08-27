//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////空指针访问成员函数
//class Person
//{
//public:
//	void showClass()
//	{
//		cout << "class Name is Person" << endl;
//	}
//
//	void showAge()
//	{
//		//m_Age = 0;
//		//cout << "age = " << this->m_Age << endl;
//
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " << this->m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//void test1()
//{
//	Person* p = NULL;
//	//如果成员函数中没有用到this指针，可以用空指针调用成员函数
//	p->showClass();
//	//如果成员函数中用到了this，那么这个this需要加判断，防止代码down掉
//	p->showAge();
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}