#pragma once

// ����ͨ��ͷ�ļ�
#include <WinSock.h>

// ����mysqlͷ�ļ�(�ȽϺõ������ǰ��ļ��п�������Ŀ¼��Ҳ������vcĿ¼��������)
#include "include/mysql.h"

#include <Windows.h>

// �������������Ҳ�����ڹ���--������������
#pragma comment(lib, "wsock32.lib")
#pragma comment(lib, "libmysql.lib")

// �������ݿ��һЩ��Ҫ��Ϣ
struct ConnectionInfo
{
	const char* host;            // ������ַ
	const char* user;            // �û���
	const char* password;        // ����
	const char* database;        // ���ݿ���
	unsigned int port;            // �˿ں�
	const char* unix_socket;    // unix���ӱ�ʶ
	unsigned long clientflag;    // �ͻ������ӱ�־

	// ���캯��������һЩĬ��ֵ
	ConnectionInfo() :
		host("127.0.0.1"),
		port(3306),
		unix_socket(NULL),
		clientflag(0)
	{

	}
};

class MySQLManager
{
public:

	// �������ݿ�
	bool Init(ConnectionInfo& info);

	// �ͷ�����
	bool FreeConnect();

	// ��������
	// bool InsertData(const char* sql);

	// ɾ������
	// bool DeleteData(const char* sql);

	// ��������
	// bool UpdateData(const char* sql);

	// ִ��sql���, �������ӡ�ɾ������������
	bool ExecuteSql(const char* sql);

	// ��ѯ����
	MYSQL_RES* QueryData(const char* sql);

	// ��ӡ�����
	void PrintQueryRes();

private:
	MYSQL m_mysql;                // mysql����
	MYSQL_RES* m_res;            // ��ѯ�����

};