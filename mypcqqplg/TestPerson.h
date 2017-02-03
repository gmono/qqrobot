#pragma once
#include "MsgPerson.h"
static int qsum = 0;
class TestPerson:public MsgPerson
{
public:
	TestPerson(string &ownqq, string &pqq);
	virtual ~TestPerson();
protected:
	virtual void MessageEvent(string &str);
private:
	int jifen = 0;
	bool isal = false;
};

