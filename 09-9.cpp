//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <fstream> //�ļ���
//#include <string>
//
////�ļ���д
//void test1()
//{
//	//д�ļ�  o --  ���    
//	ofstream  ofs("./test.txt", ios::out | ios::trunc);
//	//ofs.open("./test.txt", ios::out | ios::trunc);  ���ô򿪷�ʽ �Լ�·��
//	if (!ofs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	ofs << "�����������" << endl;
//	ofs << "���䣺999" << endl;
//	ofs << "�Ա���" << endl;
//	//�ر��ļ�
//	ofs.close();
//}
//
//void test2()
//{
//	//���ļ�   i  -- ����
//	ifstream  ifs;
//	ifs.open("./test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//��һ�ַ�ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ��ַ�ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�����ַ�ʽ
//	//string buf;
//	//while ( getline(ifs,buf) )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�����ַ�ʽ
//	char  c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	ifs.close();
//}
//
//int main() 
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}