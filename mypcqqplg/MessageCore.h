#pragma once
//��Ϣ�������ļ� ���ڽ�����ӻ��ҵ�ports.cpp�����
#include <string>
#include <functional>
using namespace std;
typedef function<void(string &, string &)> SendMsg;//�����ֱ�Ϊ Ҫ�ظ���qq Ҫ�ظ�����Ϣ 
//���ڴ���һ����Ϣ
//�����msgtype Ϊ>���� С�� ��������ʱ�Ự
void MessageFunc(string msg, int msgtype,string logqq, string fromqq,SendMsg sendfun);
//Ŀǰֻ������һ������ ���ڴ���һ����Ϣ