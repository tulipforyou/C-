#pragma once
#ifndef _ALGORITHMTEST_H
#define _ALGORITHMTEST_H
#include"iostream"
#include"algorithm"
using namespace std;

class algorithmTest
{
public:
	template <typename T>
	void show(T &vc);
	template <typename T>
	void operation(T& vc);
};

#endif

template<typename T>
void algorithmTest::show(T &vc)//�������
{
	if (vc.empty() == 1)	cout << "û��Ԫ�أ�" << endl;
	else
	{
		T::iterator i1 = vc.begin();
		for (; i1 != vc.end(); i1++)	cout << *i1 << " ";
		cout << endl;
	}
}

template<typename T>
void algorithmTest::operation(T& vc)
{
	cout << "�㷨ʹ�ã�" << endl;
	fill(vc.begin(), vc.end(), 's');
	cout << "�������" << endl;
	show(vc);

	cout << "�Ƴ���������ֵ��" << endl;
	remove(vc.begin(), vc.end() - 5, 's');
	cout << "�Ƴ������" << endl;
	show(vc);

	cout << "�滻��������ֵ��" << endl;
	replace(vc.begin(), vc.end() - 5, 's','k');
	cout << "�滻�����" << endl;
	show(vc);
}

