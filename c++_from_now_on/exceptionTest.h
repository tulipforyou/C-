#pragma once
#ifndef _EXCEPTIONTEST_H
#define _EXCEPTIONTEST_H

#include<iostream>
#include<exception>
using namespace std;

//�Զ����쳣
class myException :public exception
{
public:
	const char* what() const throw ()
	{
		return "myException caught!";
	}
};
void myExceptionTest();
//��̬�ڴ�
void trendsMeory();

#endif