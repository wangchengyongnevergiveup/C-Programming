//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//
////����ģʽ - ��ӡ������
//class Printer
//{
//public:
//	static Printer* getInstance()
//	{
//		return printer;
//	}
//	void printText(string text)
//	{
//		m_Count++;
//		cout << text << endl;
//	}
//
//	int m_Count;
//
//private:
//	Printer()
//	{
//		m_Count = 0;
//		//cout << "��ӡ���������" << endl; 
//	};
//	Printer(const Printer& p) {};
//
//	static Printer* printer;
//};
//
//Printer* Printer::printer = new Printer;
//
//void test1()
//{
//	Printer* p1 = Printer::getInstance();
//	p1->printText("��ְ֤��");
//	p1->printText("��ְ֤��");
//	p1->printText("��н����");
//	p1->printText("��������");
//	cout << "��ӡ��ʹ�ô����� " << p1->m_Count << endl;
//
//	Printer* p2 = Printer::getInstance();
//	p2->printText("��������");
//	cout << "��ӡ��ʹ�ô����� " << p1->m_Count << endl;
//}
//
//int main() 
//{
//	//��ӡ�����������main��������֮ǰ��˵����̬��Ա��������׶ξͷ������ڴ�
//	//cout << "main��������" << endl;
//
//	test1();
//	system("pause");
//	return 0;
//}
//
//
