#include "MessageCore.h"
#include <map>
#include "TestPerson.h"
#include "mypcqq_dlport_raw.h"
using namespace std;


typedef map<string, MsgPerson *> PersonMap;//�Ի��˱�
map<string, PersonMap *> pmap; //�˺ű�
//��Ϣ��Ӧģ��
template<class PersonType>
void TMessageFunc(string msg, int msgtype,string logqq, string fromqq, SendMsg &sendfun)
{
	//�����˺�
	auto ptr = pmap.find(logqq);//���Ե�¼qq��û�з����
	PersonMap *persons = nullptr;
	if (ptr == pmap.end())
	{
		persons = new PersonMap();
		pmap[logqq] = persons;
	}
	else persons = ptr->second;
	//����Ի�
	auto pptr = persons->find(fromqq);
	MsgPerson *person = nullptr;
	if (pptr == persons->end())
	{
		person = new PersonType(fromqq,logqq);
		(*persons)[fromqq] = person;
	}
	else person = pptr->second;
	//����
	list<string> &msglist = person->Message(msg);
	for (string str : msglist)
	{
		sendfun(fromqq, str);
	}
}



//ʵ�ʵ��ú���
void MessageFunc(string msg, int msgtype, string logqq, string fromqq, SendMsg sendfun)
{
	TMessageFunc<TestPerson>(msg, msgtype, logqq, fromqq,sendfun);
}