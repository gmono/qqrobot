#include "MsgPerson.h"
#include "mypcqq_dlport_raw.h"
#include <stdio.h>

MsgPerson::MsgPerson(string &ownqq, string &pqq):ownqq(ownqq),logqq(pqq)
{
	static int sum = 0;//��¼�Ի��˵�����

	sum ++ ;
	char *buf = new char[1024];
	sprintf_s(buf, 1024, "MsgPerson:����µĶԻ��ˣ�Ŀǰ�Ի���������%d", sum);
	Api_OutPut(buf);
	delete[] buf;
}

list<string>& MsgPerson::Message(string & msg)
{
	//�˺����������ط���retmsgȻ���������messageevent ���ŷ��ؽ��
	if (this->retmsg) delete this->retmsg;
	this->retmsg = new list<string>();
	//����
	this->MessageEvent(msg);
	//����
	return *(this->retmsg);
	// TODO: �ڴ˴����� return ���
}


MsgPerson::~MsgPerson()
{
	if (this->retmsg) delete this->retmsg;
	//�ͷ�
}

void MsgPerson::Post(string & str)
{
	this->retmsg->push_back(str);
}
