#include "MsgPerson.h"
#include "mypcqq_dlport_raw.h"
#include <stdio.h>

MsgPerson::MsgPerson(string &ownqq, string &pqq):ownqq(ownqq),logqq(pqq)
{
	static int sum = 0;//记录对话人的数量

	sum ++ ;
	char *buf = new char[1024];
	sprintf_s(buf, 1024, "MsgPerson:添加新的对话人，目前对话人数量：%d", sum);
	Api_OutPut(buf);
	delete[] buf;
}

list<string>& MsgPerson::Message(string & msg)
{
	//此函数中首先重分配retmsg然后调用子类messageevent 接着返回结果
	if (this->retmsg) delete this->retmsg;
	this->retmsg = new list<string>();
	//调用
	this->MessageEvent(msg);
	//返回
	return *(this->retmsg);
	// TODO: 在此处插入 return 语句
}


MsgPerson::~MsgPerson()
{
	if (this->retmsg) delete this->retmsg;
	//释放
}

void MsgPerson::Post(string & str)
{
	this->retmsg->push_back(str);
}
