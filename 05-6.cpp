//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//
////赋值运算符重载
////编译器默认给一个类4个函数:默认构造  析构  拷贝构造 (值拷贝） operator= (值拷贝)
//class Person
//{
//public:
//	Person( const char* name, int age)
//	{
//		this->m_Name = new char[strlen(name) + 1];
//		strcpy(this->m_Name, name);
//		this->m_Age = age;
//	}
//
//	//重载 =
//	Person& operator=(const Person& p)
//	{
//		//先判断原来堆区释放有内容，如果有先释放
//		if (this->m_Name != NULL)
//		{
//			delete[] this->m_Name;
//			this->m_Name = NULL;
//		}
//
//		this->m_Name = new char[strlen(p.m_Name) + 1];
//		strcpy(this->m_Name, p.m_Name);
//		this->m_Age = p.m_Age;
//		return *this;
//	}
//
//	//拷贝构造
//	Person(const Person& p)
//	{
//		this->m_Name = new char[strlen(p.m_Name) + 1];
//		strcpy(this->m_Name, p.m_Name);
//		this->m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		if (this->m_Name != NULL)
//		{
//			delete[] this->m_Name;
//			this->m_Name = NULL;
//		}
//	}
//
//	char* m_Name;
//	int m_Age;
//};
//
//void test1()
//{
//	Person p1("Tom", 10);
//	Person p2("Jerry", 19);
//	p2 = p1;
//
//	Person p3("", 0);
//	p3 = p2 = p1;
//
//	Person p4 = p3;
//	cout << "p1姓名： " << p1.m_Name << "  p1年龄： " << p1.m_Age << endl;
//	//p1姓名： Tom  p1年龄： 10
//	cout << "p2姓名： " << p2.m_Name << "  p2年龄： " << p2.m_Age << endl;
//	//p2姓名： Tom  p2年龄： 10
//	cout << "p3姓名： " << p3.m_Name << "  p3年龄： " << p3.m_Age << endl;
//	//p3姓名： Tom  p3年龄： 10
//}
//
//int main() 
//{
//	test1();
//
//	//返回 Person&
//	/*int a = 10;
//	int b = 20;
//	int c;
//	c = a = b;
//	cout << "a = " << a << " b = " << b << " c = " << c << endl;*/
//
//	system("pause");
//	return 0;
//}