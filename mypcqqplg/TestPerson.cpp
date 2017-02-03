#include "TestPerson.h"
#include "mypcqq_dlport_raw.h"


TestPerson::TestPerson(string &ownqq, string &pqq):MsgPerson(ownqq,pqq)
{
	
}


TestPerson::~TestPerson()
{
}

void TestPerson::MessageEvent(string & str)
{
	static int qsum = 0;//记录当前签到人数
	if (str == "签到")
	{
		char *nick = Api_GetNick((char *)str.c_str());
		char *buf = new char[1024];
		if (isal)
		{
			sprintf_s(buf, 1024, "@%s 您已经签到过了 请勿重复签到!");
			Post(string(buf));
		}
		else
		{
			jifen += 10;
			qsum++;
			sprintf_s(buf, 1024, "@%s 您今天第%d个签到\n 积分+10 \n当前积分:%d \n总排名:%d\n", nick, qsum, this->jifen, 0);
			Post(string(buf));
			isal = true;
		}
		delete[] buf;
	}
}
