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
	cout << "��ʽ1���(forѭ�����)��" << endl;
	for (int i = 0; i < primeCount; i++)
	{
		cout << setw(5) << A[i];
		if ((i + 1) % 6 == 0)	cout << endl;
	}
	cout << endl;
	cout << "��ʽ2���(���������)��" << endl;
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

void Map::mapOperation()
{
	map<string, string>mapStu;
	cout << "3�ַ�ʽʵ�����ݲ��룺" << endl;
	cout << "first:" << endl;
	mapStu.insert(pair<string, string>("000", "�ﳯ��"));
	mapStu.insert(pair<string, string>("111", "Ф��"));
	mapStu.insert(pair<string, string>("222", "����ӱ"));
	mapStu.insert(pair<string, string>("333", "������"));
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "second:" << endl;
	mapStu.insert(map<string, string>::value_type("444", "�ﳯ��"));
	mapStu.insert(map<string, string>::value_type("555", "Ф��"));
	mapStu.insert(map<string, string>::value_type("666", "����ӱ"));
	mapStu.insert(map<string, string>::value_type("777", "������"));
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "third:" << endl;
	mapStu["888"]= "�ﳯ��";
	mapStu["999"]= "Ф��";
	mapStu["101010"]= "����ӱ";
	mapStu["111111"]= "������";
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "���ڽ���ӳ�����������......" << endl;
	cout << "�޸Ĳ�����" << endl;
	mapStu["777"] = "��ɵ��";
	cout << "�޸�777Ϊ��" << endl;
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "ɾ��������" << endl;
	mapStu.erase("666");
	cout << "ɾ��666��Ϊ��" << endl;
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "���Ҳ�����" << endl;
	string numStu;
	cout << "������Ҫ���ҵ�ѧ�ţ�" << endl;
	cin >> numStu;
	map<string, string>::iterator name;
	name = mapStu.find(numStu);
	cout << "���ҽ��Ϊ��" << endl;
	if (name != mapStu.end())
	{
		cout << "���ҳɹ��� ";
		cout << name->second << endl;
	}
	else
		cout << "����ʧ�ܣ�" << endl;
	cout << endl;
	cout << "���жϵĲ��������" << endl;
	pair<map<string, string>::iterator, bool> insert_pair;
	insert_pair = mapStu.insert(map<string, string>::value_type("478", "�Ϲ���"));
	if (!insert_pair.second) cout << "����ʧ�ܣ�" << endl;
	else
	{
		cout << "������Ϊ��" << endl;
		for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
			cout << stringMap->first << " " << stringMap->second << '\t';
	}
	cout << endl;
}

