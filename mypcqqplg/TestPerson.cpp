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
	static int qsum = 0;//��¼��ǰǩ������
	if (str == "ǩ��")
	{
		char *nick = Api_GetNick((char *)str.c_str());
		char *buf = new char[1024];
		if (isal)
		{
			sprintf_s(buf, 1024, "@%s ���Ѿ�ǩ������ �����ظ�ǩ��!");
			Post(string(buf));
		}
		else
		{
			jifen += 10;
			qsum++;
			sprintf_s(buf, 1024, "@%s �������%d��ǩ��\n ����+10 \n��ǰ����:%d \n������:%d\n", nick, qsum, this->jifen, 0);
			Post(string(buf));
			isal = true;
		}
		delete[] buf;
	}
}
