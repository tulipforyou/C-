#include"rongQi.h"

void Vector::print_2_to_n()
{
	vector<int> A(10);
	int primeCount = 0, i;
	cout << "������һ��>=2��������Ϊ����ֵ��" << endl;
	cin >> i;
	if (i < 2)
	{
		cout << "��������̫С�����������룺" << endl;
		cin >> i;
	}
	A[primeCount++] = 2;
	for (int j = 3; j < i; j++) 
	{
		if (primeCount == A.size())	A.resize(primeCount + 10);
		if (j % 2 == 0)	continue;
		int k = 3;
		while (k <= j / 2 && j % k != 0)	k += 2;
		if (k > j / 2	)A[primeCount++] = j;
	}
	//���������ʽ��ע�ⲻ֮ͬ��
	cout << "��ʽ1�����" << endl;
	for (int i = 0; i < primeCount; i++)
	{
		cout << setw(5) << A[i];
		if ((i + 1) % 6 == 0)	cout << endl;
	}
	cout << endl;
	cout << "��ʽ2�����" << endl;
	for (vector<int>::iterator intVector = A.begin(); intVector != A.end(); intVector++)
		cout << *intVector << '\t';
	cout << endl;
}

void List::listOperation()
{
	list<int> B;
	int listSize,num,n;
	cout << "�����봴���б��С��" << endl;
	cin >> listSize;
	cout << "������" << listSize << "��������" << endl;
	for (int i = 0; i < listSize; i++)
	{
		cin >> num;
		B.push_front(num);
	}
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
	cout << "��������Ҫɾ����Ԫ�أ�" << endl;
	cin >> n;
	B.remove(n);
	cout << "ɾ������б�Ϊ��" << endl;
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
	cout << "���ڽ����б�����......" << endl;
	B.sort();
	cout << "������Ϊ��" << endl;
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
	cout << "���ڽ����б�ߵ�......" << endl;
	B.reverse();
	cout << "�ߵ����Ϊ��" << endl;
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
}
