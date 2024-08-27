//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////this指针的使用
//class Person
//{
//public:
//	Person(int age)
//	{
//		//用途1 ：解决名称冲突
//		this->age = age;
//	}
//
//	//this指针 隐式加在每个成员函数中
//	bool compareAge(Person& p)
//	{
//		if (this->age == p.age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	Person& personAddPerson(Person& p)
//	{
//		this->age += p.age;
//		return *this; //*this 就是本体
//	}
//
//	int age;
//};
//
//void test1()
//{
//	//this指针:指向被调用的成员函数所属的对象
//	Person p1(10);
//	cout << "p1的年龄为： " << p1.age << endl;//p1的年龄为： 10
//
//	Person p2(10);
//	bool ret = p1.compareAge(p2);
//	if (ret)
//	{
//		cout << "p1与p2年龄相等" << endl;//p1与p2年龄相等
//	}
//
//	p1.personAddPerson(p2).personAddPerson(p2).personAddPerson(p2); //链式编程
//	//personAddPerson返回Person 则结果为20 每次返回都会开辟新空间复制结果
//	//p1.personAddPerson(p2)结果存在p1`  p1`.personAddPerson(p2)会存在p1``
//	cout << "p1的年龄为： " << p1.age << endl;//p1的年龄为： 40
//
//}
//
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}