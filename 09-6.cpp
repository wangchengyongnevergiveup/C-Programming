//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////��д�Լ����쳣��
//class MyOutOfRangeException :public exception
//{
//public:
//	MyOutOfRangeException(const char* str)
//	{
//		//const char * ������ʽ����ת��Ϊ string  ��֮������
//		this->m_errorInfo = str;
//	}
//
//	MyOutOfRangeException(string str)
//	{
//		this->m_errorInfo = str;
//	}
//
//	/*_NODISCARD virtual char const* what() const
//	{
//		return _Data._What ? _Data._What : "Unknown exception";
//	}*/
//	virtual const char* what() const
//	{
//		//��string תΪ const char * 
//		return m_errorInfo.c_str();
//	}
//
//	string m_errorInfo;
//};
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			throw MyOutOfRangeException(string("���������0��150֮��"));
//		}
//		else
//		{
//			this->m_Age = age;
//		}
//	}
//	int m_Age;
//};
//
//void test1()
//{
//	try
//	{
//		Person p(1000);
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}