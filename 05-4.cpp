//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////�������������
//class MyInter
//{
//	friend ostream& operator<<(ostream& cout, const MyInter& myInt);
//public:
//	MyInter()
//	{
//		m_Num = 0;
//	}
//
//	//ǰ��++����
//	MyInter& operator++()
//	{
//		this->m_Num++;
//		return *this;
//	}
//
//	//����++����
//	MyInter operator++(int)
//	{
//		//�ȼ�¼��ʼ״̬
//		MyInter temp = *this;
//		this->m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////myInt2++���ص���һ����ʱ����
////����ʱ�����޷��󶨵��ǳ������ã���˻����û��ƥ���<<������Ĵ���
////����취�ǽ�operator<<�Ĳ����޸�Ϊ�������á�
////��������ʱ����Ϳ��԰󶨵���������
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
//	//ǰ��Ҫ���ر��� MyInter&
//	//int a = 0;
//	//cout << ++(++a) << endl;
//	//cout << a << endl;
//
//	//���ò�����(b++)++�������� ���ص���ֵ
//	//int b = 0;
//	//cout << (b++)++ << endl;
//
//	system("pause");
//	return 0;
//}