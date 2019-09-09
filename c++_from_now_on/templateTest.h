#pragma once

#ifndef _TEMPLATETEST_H
#define _TEMPLATETEST_H

#include<iostream>
#include<cstring>
using namespace std;
//����
template <class T>
class Pair
{
public:
	Pair();
	Pair(T a, T b);
	T getMax();
private:
	T first,second;
};
//ʵ��
template <class T>
Pair<T>::Pair()
{
	first = a;
	second = b;
}
template <class T>
Pair<T>::Pair(T a, T b)
{
	first = a;
	second = b;
}
template <class T>
T Pair<T>::getMax()
{
	return first > second ? first : second;
}
//����ģ��
template <typename T> T Max(T num1, T num2)
{
	return (num1 > num2 ? num1 : num2);
}
//����ģ����ػ�
//��������
template<>inline const char* Max<const char*>(const char* a, const char* b)
{
	return (strcmp(a, b) < 0 ? b : a);
}
#endif

