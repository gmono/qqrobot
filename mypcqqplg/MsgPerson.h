#pragma once
//虚拟对话人的基类
#include <string>
#include <vector>
#include <list>
#include <functional>
//这里由于需要随时投递 发送时顺序发送 因此使用list代替vector
using namespace std;
class MsgPerson
{
public:
	//ownqq为自身qq pqq为登录qq
	MsgPerson(string &ownqq,string &pqq);
	list<string> &Message(string &msg); //固定的消息响应函数 用于被外部调用
	virtual ~MsgPerson();
protected:
	virtual void MessageEvent(string &msg)=0;//子类实现的消息处理函数
	void Post(string &str);//这是投递消息的函数 提供给子类用于投递消息
	string ownqq;//自身对应的对话qq
	string logqq;//账号qq
private:
	list<string> *retmsg = nullptr;//这是每次返回的消息序列 每次新消息来时这个指针被重新分配 子类不可访问此指针
};

