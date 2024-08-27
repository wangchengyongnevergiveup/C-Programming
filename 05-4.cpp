//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////递增运算符重载
//class MyInter
//{
//	friend ostream& operator<<(ostream& cout, const MyInter& myInt);
//public:
//	MyInter()
//	{
//		m_Num = 0;
//	}
//
//	//前置++重载
//	MyInter& operator++()
//	{
//		this->m_Num++;
//		return *this;
//	}
//
//	//后置++重载
//	MyInter operator++(int)
//	{
//		//先记录初始状态
//		MyInter temp = *this;
//		this->m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////myInt2++返回的是一个临时对象，
////而临时对象无法绑定到非常量引用，因此会产生没有匹配的<<运算符的错误。
////解决办法是将operator<<的参数修改为常量引用。
////这样，临时对象就可以绑定到常量引用
//ostream& operator<<(ostream& cout, const MyInter& myInt)
//{
//	cout << myInt.m_Num;
//	return cout;
//}
//
//void test1()
//{
//	MyInter myInt;
//	cout << ++(++myInt) << endl;//2
//	cout << myInt << endl;//2
//
//	MyInter myInt2;
//	cout << myInt2++ << endl;//0
//	cout << myInt2 << endl;//1
//}
//
//int main() 
//{
//	test1();
//
//	//前置要返回本体 MyInter&
//	//int a = 0;
//	//cout << ++(++a) << endl;
//	//cout << a << endl;
//
//	//后置不允许(b++)++这样操作 返回的是值
//	//int b = 0;
//	//cout << (b++)++ << endl;
//
//	system("pause");
//	return 0;
//}