//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////左移运算符重载
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p1);
//
//public:
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//	//试图利用成员函数 做<<重载  不符合书写习惯
//	//void operator<<( Person & p) // p.operator<<(cout)    p<<cout
//	//{
//	//
//	//}
//
//private:
//	int m_A;
//	int m_B;
//};
//
////利用全局函数 实现左移运算符重载
//ostream& operator<<(ostream& cout, Person& p1)
//{
//	cout << "m_A = " << p1.m_A << " m_B = " << p1.m_B;
//	return cout;
//}
//
//void test1()
//{
//	Person p1(10, 10);
//	cout << p1 << endl;
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}