#include "random.h"

const int MAX = 100;

/*
����������������ֵΪMAX����Χ��[0,MAX-1]
*/
int random()
{
	srand((unsigned)time(NULL)); //�����Ե�ǰʱ��Ϊ��ʼ���������
	return rand() % MAX;
}