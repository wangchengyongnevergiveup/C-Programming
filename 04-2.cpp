//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////����ģʽ-��ϯ�స��
////��ϯ��
//class ChairMan
//{
//public:
//	static ChairMan* getInstacne()
//	{
//		return singleMan;
//	}
//
//private:
//	//�����캯��˽�л��������Դ����������
//	ChairMan() {};
//	ChairMan(const ChairMan&) {};
//
//private:
//	//����ϯָ��˽�л��������ṩֻ���ӿ�
//	static  ChairMan* singleMan; //��������  �����ʼ��
//};
//
//ChairMan* ChairMan::singleMan = new ChairMan;
//
//void test1()
//{
//	//���캯��˽�л�����ϯָ��˽�л�,�����Դ����������
//	//ChairMan c1;
//	//ChairMan c2;
//	//ChairMan * c3 = new ChairMan;
//	//ChairMan * c1 = ChairMan::singleMan;
//	//ChairMan * c2 = ChairMan::singleMan;
//
//	ChairMan* c1 = ChairMan::getInstacne();
//	ChairMan* c2 = ChairMan::getInstacne();
//	if (c1 == c2)
//	{
//		cout << "c1 = c2" << endl;//c1 = c2
//	}
//	else
//	{
//		cout << "c1 != c2" << endl;
//	}
//
//	//��������δ˽�л�ʱ�����д���ΪC1 != C3 �����ϵ���
//	//ChairMan * c3 = new ChairMan(*c1);
//	//if (c1 == c3)
//	//{
//	//	cout << "c1 = c3" << endl;
//	//}
//	//else
//	//{
//	//	cout << "c1 != c3" << endl;
//	//}
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}