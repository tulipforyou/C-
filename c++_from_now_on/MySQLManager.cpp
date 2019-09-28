#include "MySQLManager.h"
#include <iostream>
#include <stdio.h>
using namespace std;

// �������ݿ�
bool MySQLManager::Init(ConnectionInfo& info)
{
    // ��ʼ��mysql,����mysql�����ݿ�
    mysql_init(&m_mysql);

	//�������ݿ��ַ���ΪGBK��ֹ��������
	if (0 == mysql_options(&m_mysql, MYSQL_SET_CHARSET_NAME, "gbk"))//�����ַ���
	{
		cout << endl;
	}

    // ����ʧ��
    if (!(mysql_real_connect(&m_mysql, info.host, info.user, info.password, info.database, info.port, info.unix_socket, info.clientflag)))
    {
		cout << "�������ݿ�ʧ��\n\n" << endl;
		return false;
    }
	else
	{
		cout << "�������ݿ�ɹ�\n\n" << endl;
		return true;
	}
    return true;
}

// �ͷ�����
bool MySQLManager::FreeConnect()
{
    //�ͷ���Դ
    mysql_free_result(m_res);
    mysql_close(&m_mysql);

    return false;
}

// ִ��sql���, �������ӡ�ɾ������������
bool MySQLManager::ExecuteSql(const char * sql)
{
    if (mysql_query(&m_mysql, sql))
    {
        // �����log������ֱ����ʾ������̨
        cerr << "ִ��sql���ʧ�ܣ�������ϢΪ�� " << mysql_error(&m_mysql) << endl;
        return false;
    }
    else
    {
        cout << "ִ��sql���ɹ���" << endl;
    }

    return true;
}

// ��ѯ����
MYSQL_RES* MySQLManager::QueryData(const char* sql)
{
    if (mysql_query(&m_mysql, sql))
    {
        // �����log������ֱ����ʾ������̨
        cerr << "��ѯ���ִ��ʧ�ܣ�������ϢΪ�� " << mysql_error(&m_mysql) << endl;
        return nullptr;
    }
    else
    {
        cout << "��ѯ���ִ�гɹ���" << endl;
    }

    // �洢��ѯ���
    m_res = mysql_store_result(&m_mysql);

    return m_res;
}

// ���������
void MySQLManager::PrintQueryRes()
{
    if (nullptr == m_res || NULL == m_res)
    {
        return;
    }

    // ��ȡ����
    // unsigned int rows = mysql_affected_rows(m_mysql);

    // �ֶ�������
    MYSQL_FIELD* field = nullptr;
    //���ֶ�����ά����
    char fieldName[64][32];  

    // ��ȡ�ֶ���
    for (int i = 0; field = mysql_fetch_field(m_res); ++i)
    {
        strcpy_s(fieldName[i], field->name);
    }

    // ��ȡ����
    int columns = mysql_num_fields(m_res);
    for (int i = 0; i < columns; ++i)
    {
        // ʹ��C���Ե�printf��ʽ��������һ��
        printf("%10s\t", fieldName[i]);
    }
    cout << endl;

    MYSQL_ROW row;
    while (row = mysql_fetch_row(m_res))
    {
        for (int i = 0; i < columns; ++i)
        {
            printf("%10s\t", row[i]);
        }
            
        cout << endl;
    }

}