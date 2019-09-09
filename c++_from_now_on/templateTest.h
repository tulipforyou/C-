#pragma once

#ifndef _TEMPLATETEST_H
#define _TEMPLATETEST_H

#include<iostream>
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

#endif
