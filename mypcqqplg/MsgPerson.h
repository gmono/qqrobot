#pragma once
//����Ի��˵Ļ���
#include <string>
#include <vector>
#include <list>
#include <functional>
//����������Ҫ��ʱͶ�� ����ʱ˳���� ���ʹ��list����vector
using namespace std;
class MsgPerson
{
public:
	//ownqqΪ����qq pqqΪ��¼qq
	MsgPerson(string &ownqq,string &pqq);
	list<string> &Message(string &msg); //�̶�����Ϣ��Ӧ���� ���ڱ��ⲿ����
	virtual ~MsgPerson();
protected:
	virtual void MessageEvent(string &msg)=0;//����ʵ�ֵ���Ϣ������
	void Post(string &str);//����Ͷ����Ϣ�ĺ��� �ṩ����������Ͷ����Ϣ
	string ownqq;//�����Ӧ�ĶԻ�qq
	string logqq;//�˺�qq
private:
	list<string> *retmsg = nullptr;//����ÿ�η��ص���Ϣ���� ÿ������Ϣ��ʱ���ָ�뱻���·��� ���಻�ɷ��ʴ�ָ��
};

