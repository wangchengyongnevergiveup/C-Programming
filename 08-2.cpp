//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////char��int���������������
//template <class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////����:ͨ��һ��ͨ��������ʵ�ֶ�char��int�������������˳��Ӵ�С�� �㷨ѡ������
//template< class  T > // typename �� class һ��
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//
//		//�ж�:�����max�Ϳ�ʼ�϶���i�Ƿ�һ�£������ͬ��������
//		if (i != max)
//		{
//			mySwap(arr[i], arr[max]);
//		}
//	}
//}
//
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << " " << arr[i];
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	char charArray[] = "helloworld";
//	int len = strlen(charArray);
//	mySort(charArray, len);
//	printArray(charArray, len);
//
//	int intArray[] = { 5, 7, 1, 4, 2, 3 };
//	len = sizeof(intArray) / sizeof(int);
//	mySort(intArray, len);
//	printArray(intArray, len);
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}