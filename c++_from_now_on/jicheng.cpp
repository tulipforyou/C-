#include"jicheng.h"

firstClass::firstClass()
{
	width = length = 0;
}

void firstClass::setWidth(double x)
{
	width = x;
}

void firstClass::setLength(double y)
{
	length = y;
}


double firstClass::getWidth()
{
	return width;
}

double firstClass::getLength()
{
	return length;
}

secondClass::secondClass()
{
	hight = 0;
}

void secondClass::setHight(double z)
{
	hight = z;
}

double secondClass::getHight()
{
	return hight;
}

void secondClass::area()
{
	cout << "������ͼ�����Ϊ " << setprecision(4)<< width * length * hight << " !" << endl;
}
