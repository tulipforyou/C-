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
	for (int i = 0; i < primeCount; i++)
	{
		cout << setw(5) << A[i];
		if ((i + 1) % 6 == 0)	cout << endl;
	}
	cout << endl;
}

