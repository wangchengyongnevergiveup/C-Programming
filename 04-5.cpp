//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////thisָ���ʹ��
//class Person
//{
//public:
//	Person(int age)
//	{
//		//��;1 ��������Ƴ�ͻ
//		this->age = age;
//	}
//
//	//thisָ�� ��ʽ����ÿ����Ա������
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
//		return *this; //*this ���Ǳ���
//	}
//
//	int age;
//};
//
//void test1()
//{
//	//thisָ��:ָ�򱻵��õĳ�Ա���������Ķ���
//	Person p1(10);
//	cout << "p1������Ϊ�� " << p1.age << endl;//p1������Ϊ�� 10
//
//	Person p2(10);
//	bool ret = p1.compareAge(p2);
//	if (ret)
//	{
//		cout << "p1��p2�������" << endl;//p1��p2�������
//	}
//
//	p1.personAddPerson(p2).personAddPerson(p2).personAddPerson(p2); //��ʽ���
//	//personAddPerson����Person ����Ϊ20 ÿ�η��ض��Ὺ���¿ռ临�ƽ��
//	//p1.personAddPerson(p2)�������p1`  p1`.personAddPerson(p2)�����p1``
//	cout << "p1������Ϊ�� " << p1.age << endl;//p1������Ϊ�� 40
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