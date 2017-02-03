#include "MessageCore.h"
#include <map>
#include "TestPerson.h"
#include "mypcqq_dlport_raw.h"
using namespace std;


typedef map<string, MsgPerson *> PersonMap;//对话人表
map<string, PersonMap *> pmap; //账号表
//消息响应模板
template<class PersonType>
void TMessageFunc(string msg, int msgtype,string logqq, string fromqq, SendMsg &sendfun)
{
	//分离账号
	auto ptr = pmap.find(logqq);//测试登录qq有没有分配表
	PersonMap *persons = nullptr;
	if (ptr == pmap.end())
	{
		persons = new PersonMap();
		pmap[logqq] = persons;
	}
	else persons = ptr->second;
	//分离对话
	auto pptr = persons->find(fromqq);
	MsgPerson *person = nullptr;
	if (pptr == persons->end())
	{
		person = new PersonType(fromqq,logqq);
		(*persons)[fromqq] = person;
	}
	else person = pptr->second;
	//处理
	list<string> &msglist = person->Message(msg);
	for (string str : msglist)
	{
		sendfun(fromqq, str);
	}
}



//实际调用函数
void MessageFunc(string msg, int msgtype, string logqq, string fromqq, SendMsg sendfun)
{
	TMessageFunc<TestPerson>(msg, msgtype, logqq, fromqq,sendfun);
}