/*
����ʱ�䣺2019.9.4
�����ˣ��ﳯ��
����Ŀ�ģ�����C++ѧϰ�Ĳ�������
�汾��1.0
���л�����VS2019
*/
#include<iostream>
#include<math.h>
#include<string>
#include"first_cpp.h"
#include"random.h"
#include"timeSch.h"
#include"jicheng.h"
#include"rongQi.h"
#include"templateTest.h"
#include"exceptionTest.h"
#include"algorithmTest.h"
#include"fileTest.h"
#include<sstream>
#include "MySQLManager.h"
using namespace std;

char beep = 7;  //����

void annual();
void achievement();
void sort1(int array[],int n);
int fbnq(int n);
void copystr(char* str1, char* str2);

/*
�����鳤�ȵ�ģ��
*/
template<class T>
int getLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}
//����ģ����ػ�

int main()
{
	start();
	//annual();
	//achievement();

	//ð������Ĳ��Գ���
	/*int a[] = { 0,1,2,1,1,5,56,4645,2,2654,-591};
	sort1(a, getLen(a));
	for (int i = 0; i < getLen(a); i++)
	{
		cout << a[i] << " ";
	}
	cout<<endl;*/

	/*int array[5] = { 0,1,2,3,4 };
	int* p = array;  // �ȼ���int *p=&array[0];
	cout << *p << endl;*/

	//copystrָ��ʵ���ַ������Ʋ��Բ���
	/*char *a = "sdfgfefghk,mndssdfgggbn vfdbgnbdbdjg" ;
	char b[100];
	copystr(a, b);
	cout << b << endl;*/

	//����ָ����Բ���
	/*int(*p)(int);  //ָ��һ����һ�����β�������������ָ��
	p = fbnq;      //ָ����fbnq
	cout << (*p)(20) << endl;*/

	/*Vector vt;
	vt.print_2_to_n();
	List ls;
	ls.listOperation();
	Map m;
	m.mapOperation();*/

	//ģ����Գ���
	/*Pair<int> pi1(24, 560);
	cout << pi1.getMax() << endl;
	Pair<float> pi2(2.4, 5.60);
	cout << pi2.getMax() << endl;
	Pair<char> pi3('g', 'h');
	cout << pi3.getMax() << endl;*/
	
	/*cout << Max(56, 89) << endl;
	const char* a = "dsgff";
	const char* b = "dsghngf";
	cout << Max(a, b) << endl;*/

	/*algorithmTest at;
	vector<int> v1(10);
	at.operation(v1);*/

	/*fileTest ft;
	ft.openFileAndOperation("sch.txt");*/

	//myExceptionTest();
	//trendsMeory();
	//test();

	/*vector<int> v;
	vector<int> ::iterator iter;
	v.reserve(20);
	for (int i = 0; i < 20; i++)
	{
		v.push_back(i);
	}
	cout << v.size() << endl;

	cout << "1:" << endl;
	for (iter=v.begin(); iter!=v.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	v[5] = v[9] = v[15] = 99;
	cout << "2:" << endl;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	v.erase(remove(v.begin(), v.end(), 99), v.end());
	cout << "3:" << endl;
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	cout << v.size() << endl;*/
	


	end();  
	return 0;
}


void annual()
{
	double rate;
	int year;
	double money;
	double monthPay;
	double totalPay;
	cout << "���������ʣ�" << endl;
	cin >> rate;
	cout << "������������" << endl;
	cin >> year;
	cout << "�������ܶ" << endl;
	cin >> money;
	monthPay = (money * rate) / (1 - 1 / pow(1+rate,year*12));
	totalPay = monthPay * 12 * year;
	cout << "�¹����ܹ�Ϊ��" << monthPay << "   " << totalPay << endl;
}

void achievement()
{
	int count = 1;
	double achieve,sumAchieve=0;
	while (count != 6)
	{
		cout << "������� "<<count<<" �ſγ̵ĳɼ�:  ";
		cin >> achieve;
		sumAchieve = sumAchieve + achieve;
		count++;
	}
	cout << "���ųɼ�ƽ����Ϊ��" << sumAchieve / 5 << endl;
}
/*
ð������
*/
void sort1(int array[],int n)
{
	int num = n;
	for (int j = 0; j < n-1; j++)			//  n��������N-1��
	{
		for (int i = 0; i < num-1; i++)		//  num-1 ��ֹ����Խ�磬��Ϊ�����и�i+1    ����һ��д���ǰ�num-1дΪ n-j������Ҫnum������
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		num--;
	}
}
/*
쳲��������еݹ�ʵ����ֵ
*/
int fbnq(int n)
{
	int result;
	if (n > 2)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
		result = fbnq(n - 1) + fbnq(n - 2);
	}
	else
		result = 1;
	return result;
}
/*
�ַ������ƺ�����ָ��ʵ��
��һ������ΪԴ�ַ�������һ��Ϊ����Դ
*/
void copystr(char* str1, char* str2)
{
	while (*str1 != '\0')
		* str2++ = *str1++;
	*str2 = '\0';
}
