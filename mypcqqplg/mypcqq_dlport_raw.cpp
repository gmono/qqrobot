#include "mypcqq_dlport_raw.h"

/// \brief �����ύ��QQ�ż���õ�ҳ������ò���Bkn��G_tk`
char * Api_GetGtk_Bkn(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[0])(��Ӧ��QQ);
}

/// \brief �����ύ��QQ�ż���õ�ҳ������ò�����Bkn��G_tk`
char * Api_GetBkn32(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[1])(��Ӧ��QQ);
}

/// \brief �����ύ��QQ�ż���õ�ҳ������ò�����Ldw`
char * Api_GetLdw(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[2])(��Ӧ��QQ);
}

/// \brief ȡ�ÿ������Ŀ¼.���ܼ����ˡ�`
char * Api_GetRunPath()
{
	return ((char * (__stdcall *)())_dll__funs[3])();
}

/// \brief ȡ�õ�ǰ��������߿��õ�QQ�б�`
char * Api_GetOnlineQQlist()
{
	return ((char * (__stdcall *)())_dll__funs[4])();
}

/// \brief ȡ�ÿ��������QQ�б�����δ��¼�Լ���¼ʧ�ܵ�QQ`
char * Api_GetQQlist()
{
	return ((char * (__stdcall *)())_dll__funs[5])();
}

/// \brief ����QQȡ�ö�Ӧ�ĻỰ��Կ`
char * Api_GetSessionkey(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[6])(��Ӧ��QQ);
}

/// \brief ȡ��ҳ���¼�õ�Clientkey`
char * Api_GetClientkey(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[7])(��Ӧ��QQ);
}

/// \brief ȡ��ҳ���¼�õĳ�Clientkey`
char * Api_GetLongClientkey(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[8])(��Ӧ��QQ);
}

/// \brief ȡ��ҳ������õ�Cookies`
char * Api_GetCookies(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[9])(��Ӧ��QQ);
}

/// \brief ȡ�ÿ�������õ���Ϣ����ǰ׺`
char * Api_GetPrefix()
{
	return ((char * (__stdcall *)())_dll__funs[10])();
}

/// \brief ��Ⱥ��Ƭ������ٻ��浱��.`
void Api_Cache_NameCard(char * Ⱥ��, char * QQ, char * ��Ƭ)
{
	((void(__stdcall *)(char * Ⱥ��, char * QQ, char * ��Ƭ))_dll__funs[11])(Ⱥ��, QQ, ��Ƭ);
}

/// \brief ��ָ��QQ�Ƴ�QQ������`
void Api_DBan(char * ��Ӧ��QQ, char * QQ)
{
	((void(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[12])(��Ӧ��QQ, QQ);
}

/// \brief ��ָ��QQ����QQ������`
void Api_Ban(char * ��Ӧ��QQ, char * QQ)
{
	((void(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[13])(��Ӧ��QQ, QQ);
}

/// \brief ����Ⱥ��Ա`
/// \param Ⱥ��	"���Զ�������Ⱥ."
/// \param QQ	"���Զ���.����ΪȫȺ����"
/// \param ʱ��	"��λ:�� ���Ϊ1����. Ϊ���������ȫȺ����"
bool Api_Shutup(char * ��Ӧ��QQ, char * Ⱥ��, char * QQ, int ʱ��)
{
	return ((bool(__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��, char * QQ, int ʱ��))_dll__funs[14])(��Ӧ��QQ, Ⱥ��, QQ, ʱ��);
}

/// \brief ��Ⱥ����`
void Api_SetNotice(char * ��Ӧ��QQ, char * Ⱥ��, char * ����, char * ����)
{
	((void(__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��, char * ����, char * ����))_dll__funs[15])(��Ӧ��QQ, Ⱥ��, ����, ����);
}

/// \brief ȡȺ����`
char * Api_GetNotice(char * ��Ӧ��QQ, char * Ⱥ��)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��))_dll__funs[16])(��Ӧ��QQ, Ⱥ��);
}

/// \brief ȡȺ��Ƭ`
char * Api_GetNameCard(char * ��Ӧ��QQ, char * Ⱥ��, char * QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��, char * QQ))_dll__funs[17])(��Ӧ��QQ, Ⱥ��, QQ);
}

/// \brief ����Ⱥ��Ƭ`
void Api_SetNameCard(char * ��Ӧ��QQ, char * Ⱥ��, char * QQ, char * ��Ƭ)
{
	((void(__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��, char * QQ, char * ��Ƭ))_dll__funs[18])(��Ӧ��QQ, Ⱥ��, QQ, ��Ƭ);
}

/// \brief �˳�������`
void Api_QuitDG(char * ��Ӧ��QQ, char * ������ID)
{
	((void(__stdcall *)(char * ��Ӧ��QQ, char * ������ID))_dll__funs[19])(��Ӧ��QQ, ������ID);
}

/// \brief ɾ������`
bool Api_DelFriend(char * ��Ӧ��QQ, char * QQ)
{
	return ((bool(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[20])(��Ӧ��QQ, QQ);
}

/// \brief �������Ƴ�Ⱥ`
bool Api_Kick(char * ��Ӧ��QQ, char * Ⱥ��, char * ����)
{
	return ((bool(__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��, char * ����))_dll__funs[21])(��Ӧ��QQ, Ⱥ��, ����);
}

/// \brief ������Ⱥ.Ϊ�˱����桢Ⱥ����Ϊ��������֤��ʱ����ֱ��ʧ�ܲ�����`
void Api_JoinGroup(char * ��Ӧ��QQ, char * Ⱥ��, char * ��������)
{
	((void(__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��, char * ��������))_dll__funs[22])(��Ӧ��QQ, Ⱥ��, ��������);
}

/// \brief �˳�Ⱥ`
void Api_QuitGroup(char * ��Ӧ��QQ, char * Ⱥ��)
{
	((void(__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��))_dll__funs[23])(��Ӧ��QQ, Ⱥ��);
}

/// \brief ����ֵ:�ɹ�����ͼƬGUID���ڷ��͸�ͼƬ.ʧ�ܷ��ؿ�.  ͼƬ�ߴ�ӦС��4MB`
/// \param ��Ӧ��QQ	"������QQ"
/// \param ��_�ϴ�����	"1����2Ⱥ ע:����ͼ��Ⱥͼ��GUID������ͬ����ͨ�� ��Ҫ�Ǳ��ϴ���Ⱥ��������������2 ��ʱ�Ự��������Ϣ��Ҫ����1"
/// \param ��_�ο�����	"�ϴ���ͼƬ������Ⱥ�Ż�QQ"
/// \param ��_ͼƬ����	"ͼƬ�ֽڼ����ݻ��ֽڼ�����ָ��()"
char * Api_UploadPic(char * ��Ӧ��QQ, int ��_�ϴ�����, char * ��_�ο�����, unsigned char * ��_ͼƬ����)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, int ��_�ϴ�����, char * ��_�ο�����, unsigned char * ��_ͼƬ����))_dll__funs[24])(��Ӧ��QQ, ��_�ϴ�����, ��_�ο�����, ��_ͼƬ����);
}

/// \brief ����ͼƬGUIDȡ��ͼƬ�������� ʧ�ܷ��ؿ�`
/// \param ͼƬGUID	"{xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx}.jpg������GUID"
char * Api_GuidGetPicLink(char * ͼƬGUID)
{
	return ((char * (__stdcall *)(char * ͼƬGUID))_dll__funs[25])(ͼƬGUID);
}

/// \brief �ظ���Ϣ �뾡������ʹ�ø�API`
/// \param ��Ϣ����	"1���� 2Ⱥ 3������ 4Ⱥ��ʱ�Ự 5��������ʱ�Ự"
/// \param �ظ�����	"����������Ϣ�Ķ���"
/// \param ����	"��Ϣ����"
int Api_Reply(char * ��Ӧ��QQ, int ��Ϣ����, char * �ظ�����, char * ����)
{
	return ((int(__stdcall *)(char * ��Ӧ��QQ, int ��Ϣ����, char * �ظ�����, char * ����))_dll__funs[26])(��Ӧ��QQ, ��Ϣ����, �ظ�����, ����);
}

/// \brief �����Ŀ�귢����Ϣ ֧�ֺ��� Ⱥ ������ Ⱥ��ʱ�Ự ��������ʱ�Ự`
/// \param ��Ϣ����	"1���� 2Ⱥ 3������ 4Ⱥ��ʱ�Ự 5��������ʱ�Ự"
/// \param �ο�������	"������˵����������ջ�����"
/// \param ����Ⱥ_������	"����Ⱥ��Ϣ����������Ϣ��Ⱥ��ʱ�Ự��Ϣ����������ʱ�Ự��Ϣʱ��д"
/// \param ���Ŷ���	"���ս���������Ϣ�Ķ���QQ"
/// \param ����	"��Ϣ����"
int Api_SendMsg(char * ��Ӧ��QQ, int ��Ϣ����, int �ο�������, char * ����Ⱥ_������, char * ���Ŷ���, char * ����)
{
	return ((int(__stdcall *)(char * ��Ӧ��QQ, int ��Ϣ����, int �ο�������, char * ����Ⱥ_������, char * ���Ŷ���, char * ����))_dll__funs[27])(��Ӧ��QQ, ��Ϣ����, �ο�������, ����Ⱥ_������, ���Ŷ���, ����);
}

/// \brief ���ͷ��`
char * Api_Send(char * �������)
{
	return ((char * (__stdcall *)(char * �������))_dll__funs[28])(�������);
}

/// \brief �ڿ�ܼ�¼ҳ���һ����Ϣ`
/// \param ����	"���������"
int Api_OutPut(char * ����)
{
	return ((int(__stdcall *)(char * ����))_dll__funs[29])(����);
}

/// \brief ȡ�ñ��������״̬`
bool Api_IsEnable()
{
	return ((bool(__stdcall *)())_dll__funs[30])();
}

/// \brief ��¼һ���ִ��QQ`
/// \param QQ	"����¼��Q"
bool Api_Login(char * QQ)
{
	return ((bool(__stdcall *)(char * QQ))_dll__funs[31])(QQ);
}

/// \brief ��ָ��QQ����`
void Api_Logout(char * QQ)
{
	((void(__stdcall *)(char * QQ))_dll__funs[32])(QQ);
}

/// \brief tean�����㷨`
char * Api_Tea����(char * ��������, char * Key)
{
	return ((char * (__stdcall *)(char * ��������, char * Key))_dll__funs[33])(��������, Key);
}

/// \brief tean�����㷨`
char * Api_Tea����(char * ��������, char * Key)
{
	return ((char * (__stdcall *)(char * ��������, char * Key))_dll__funs[34])(��������, Key);
}

/// \brief ȡ�û���`
char * Api_GetNick(char * QQ)
{
	return ((char * (__stdcall *)(char * QQ))_dll__funs[35])(QQ);
}

/// \brief ȡQQ�ȼ�+QQ��Ա�ȼ� ����json��ʽ��Ϣ`
char * Api_GetQQLevel(char * QQ)
{
	return ((char * (__stdcall *)(char * QQ))_dll__funs[36])(QQ);
}

/// \brief Ⱥ��תȺID`
char * Api_GNGetGid(char * Ⱥ��)
{
	return ((char * (__stdcall *)(char * Ⱥ��))_dll__funs[37])(Ⱥ��);
}

/// \brief ȺIDתȺ��`
char * Api_GidGetGN(char * ȺID)
{
	return ((char * (__stdcall *)(char * ȺID))_dll__funs[38])(ȺID);
}

/// \brief ȡ��ܰ汾��(����ʱ���`
int Api_GetVersion()
{
	return ((int(__stdcall *)())_dll__funs[39])();
}

/// \brief ȡ��ܰ汾��`
char * Api_GetVersionName()
{
	return ((char * (__stdcall *)())_dll__funs[40])();
}

/// \brief ȡ��ǰ����ڲ�ʱ���_�������������ʱ��ͬ��`
int Api_GetTimeStamp()
{
	return ((int(__stdcall *)())_dll__funs[41])();
}

/// \brief ȡ�ÿ������б���������Ϣ`
char * Api_GetLog()
{
	return ((char * (__stdcall *)())_dll__funs[42])();
}

/// \brief �ж��Ƿ��ڱ�����Ⱥ��Ϣ״̬��`
bool Api_IfBlock(char * ��Ӧ��QQ)
{
	return ((bool(__stdcall *)(char * ��Ӧ��QQ))_dll__funs[43])(��Ӧ��QQ);
}

/// \brief ȡ����Ⱥ�����ڵ�Ⱥ���б�`
char * Api_GetAdminList(char * ��Ӧ��QQ, char * Ⱥ��)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��))_dll__funs[44])(��Ӧ��QQ, Ⱥ��);
}

/// \brief ��˵˵`
char * Api_AddTaotao(char * ��Ӧ��QQ, char * ����)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * ����))_dll__funs[45])(��Ӧ��QQ, ����);
}

/// \brief ȡ��ǩ`
char * Api_GetSign(char * ��Ӧ��QQ, char * ����)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * ����))_dll__funs[46])(��Ӧ��QQ, ����);
}

/// \brief ���ø�ǩ`
char * Api_SetSign(char * ��Ӧ��QQ, char * ����)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * ����))_dll__funs[47])(��Ӧ��QQ, ����);
}

/// \brief ͨ��qun.qzone.qq.com�ӿ�ȡ��ȡȺ�б�.�ɹ�����ת����JSON��ʽ�ı���Ϣ`
char * Api_GetGroupListA(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[48])(��Ӧ��QQ);
}

/// \brief ͨ��qun.qq.com�ӿ�ȡ��ȡȺ�б�.�ɹ�����ת����JSON��ʽ�ı���Ϣ`
char * Api_GetGroupListB(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[49])(��Ӧ��QQ);
}

/// \brief ͨ��qun.qq.com�ӿ�ȡ��Ⱥ��Ա�б� �ɹ�����ת����JSON��ʽ�ı�`
char * Api_GetGroupMemberA(char * ��Ӧ��QQ, char * Ⱥ��)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��))_dll__funs[50])(��Ӧ��QQ, Ⱥ��);
}

/// \brief ͨ��qun.qzone.qq.com�ӿ�ȡ��Ⱥ��Ա�б� �ɹ�����ת����JSON��ʽ�ı�`
char * Api_GetGroupMemberB(char * ��Ӧ��QQ, char * Ⱥ��)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * Ⱥ��))_dll__funs[51])(��Ӧ��QQ, Ⱥ��);
}

/// \brief ͨ��qun.qq.com�ӿ�ȡ�ú����б��ɹ�����ת����JSON�ı�`
char * Api_GetFriendList(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[52])(��Ӧ��QQ);
}

/// \brief ȡQ�� �ɹ�����Q�� ʧ�ܷ���-1`
int Api_GetQQAge(char * ��Ӧ��QQ, char * QQ)
{
	return ((int(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[53])(��Ӧ��QQ, QQ);
}

/// \brief ȡ���� �ɹ��������� ʧ�ܷ���-1`
int Api_GetAge(char * ��Ӧ��QQ, char * QQ)
{
	return ((int(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[54])(��Ӧ��QQ, QQ);
}

/// \brief ȡ����˵��`
/// \param QQ	"����QQ"
char * Api_GetPersonalProfile(char * ��Ӧ��QQ, char * QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[55])(��Ӧ��QQ, QQ);
}

/// \brief ȡ���� �ɹ��������� ʧ�ܷ��ؿ�`
char * Api_GetEmail(char * ��Ӧ��QQ, char * QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[56])(��Ӧ��QQ, QQ);
}

/// \brief ȡ�����Ա� 1�� 2Ů  δ��ʧ�ܷ���-1`
int Api_GetGender(char * ��Ӧ��QQ, char * QQ)
{
	return ((int(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[57])(��Ӧ��QQ, QQ);
}

/// \brief ����ѷ��͡��������롯��״̬��Ϣ.�������յ���Ϣ֮�� ���������롱״̬�����̱����`
int Api_SendTyping(char * ��Ӧ��QQ, char * QQ)
{
	return ((int(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[58])(��Ӧ��QQ, QQ);
}

/// \brief ����ѷ��ʹ��ڶ�����Ϣ`
int Api_SendShake(char * ��Ӧ��QQ, char * QQ)
{
	return ((int(__stdcall *)(char * ��Ӧ��QQ, char * QQ))_dll__funs[59])(��Ӧ��QQ, QQ);
}

/// \brief ȡ�ÿ�������һ�������ҿ���ʹ�õ�QQ`
char * Api_GetRadomOnlineQQ()
{
	return ((char * (__stdcall *)())_dll__funs[60])();
}

/// \brief ���ʺ��б����һ��Q.����Q�Ѵ���ʱ�򸲸�����`
/// \param �Զ���¼	"���п��ʱ�Ƿ��Զ���¼��Q.����Ӻ���Ҫ��¼��Q����Ҫͨ��Api_Login����"
bool Api_AddQQ(char * QQ, char * ����, bool �Զ���¼)
{
	return ((bool(__stdcall *)(char * QQ, char * ����, bool �Զ���¼))_dll__funs[61])(QQ, ����, �Զ���¼);
}

/// \brief ��������״̬+������Ϣ `
/// \param ����״̬	"1~6 �ֱ��Ӧ��������"
/// \param ״̬������Ϣ	"���255�ֽ�"
bool Api_SetOLStatus(char * ��Ӧ��QQ, int ����״̬, char * ״̬������Ϣ)
{
	return ((bool(__stdcall *)(char * ��Ӧ��QQ, int ����״̬, char * ״̬������Ϣ))_dll__funs[62])(��Ӧ��QQ, ����״̬, ״̬������Ϣ);
}

/// \brief ȡ�û�����`
char * Api_GetMC()
{
	return ((char * (__stdcall *)())_dll__funs[63])();
}

/// \brief ����������Ⱥ ʧ�ܷ��ش�������`
/// \param ����QQ	"��������û��зָ�"
char * Api_GroupInvitation(char * ��Ӧ��QQ, char * ����QQ, char * Ⱥ��)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * ����QQ, char * Ⱥ��))_dll__funs[64])(��Ӧ��QQ, ����QQ, Ⱥ��);
}

/// \brief ����һ�������� �ɹ�����������ID ʧ�ܷ��ؿ� ע:ÿ24Сʱֻ�ܴ���100�������� ���ŵ���`
char * Api_CreateDG(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[65])(��Ӧ��QQ);
}

/// \brief �������Ƴ�������.�ɹ����ؿ� ʧ�ܷ�������`
char * Api_KickDG(char * ��Ӧ��QQ, char * ������ID, char * ��Ա)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * ������ID, char * ��Ա))_dll__funs[66])(��Ӧ��QQ, ������ID, ��Ա);
}

/// \brief ���������������� �ɹ����ؿ� ʧ�ܷ�������`
/// \param ��Ա��	"�����Ա�û��з��ָ�"
char * Api_DGInvitation(char * ��Ӧ��QQ, char * ������ID, char * ��Ա��)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ, char * ������ID, char * ��Ա��))_dll__funs[67])(��Ӧ��QQ, ������ID, ��Ա��);
}

/// \brief �ɹ������Ի��з��ָ����������б�.���Ϊ100��������  ʧ�ܷ��ؿ�`
char * Api_GetDGList(char * ��Ӧ��QQ)
{
	return ((char * (__stdcall *)(char * ��Ӧ��QQ))_dll__funs[68])(��Ӧ��QQ);
}

/// \brief �������һ��������Ϣ����ν�ĵ�裩��������`
/// \param ���Ŷ�������	"ͬApi_SendMsg  1���� 2Ⱥ 3������ 4Ⱥ��ʱ�Ự 5��������ʱ�Ự"
/// \param ���Ŷ�������Ⱥ_������	"��Ⱥ�ڡ���ʱ�Ự���� ���ѿɲ���"
/// \param ���Ŷ���QQ	"��ʱ�Ự�����ѱ��� ����Ⱥ�ڿɲ���"
/// \param ���ּ��	"����Ĭ�ϡ�QQ���� �ķ���"
/// \param ���ֲ���ҳ������	"����ֱ��������Ӿ��� ����Ϊ�� �޷��㿪"
/// \param ���ַ�������	"����ֱ��������Ӿ��� �ɿ� ��:http://url.cn/cDiJT4"
/// \param �����ļ�ֱ������	"����ֱ��������Ӿ��� ���ɿ� ��:http://url.cn/djwXjr"
/// \param ����	"�ɿ�"
/// \param ������	"�ɿ�"
/// \param ������Դ��	"�ɿ� Ϊ��Ĭ��QQ����"
/// \param ������Դͼ������	"�ɿ� Ϊ��Ĭ��QQ���� http://qzonestyle.gtimg.cn/ac/qzone/applogo/64/308/100497308_64.gif"
bool Api_SendMusic(char * ��Ӧ��QQ, int ���Ŷ�������, char * ���Ŷ�������Ⱥ_������, char * ���Ŷ���QQ, char * ���ּ��, char * ���ֲ���ҳ������, char * ���ַ�������, char * �����ļ�ֱ������, char * ����, char * ������, char * ������Դ��, char * ������Դͼ������)
{
	return ((bool(__stdcall *)(char * ��Ӧ��QQ, int ���Ŷ�������, char * ���Ŷ�������Ⱥ_������, char * ���Ŷ���QQ, char * ���ּ��, char * ���ֲ���ҳ������, char * ���ַ�������, char * �����ļ�ֱ������, char * ����, char * ������, char * ������Դ��, char * ������Դͼ������))_dll__funs[69])(��Ӧ��QQ, ���Ŷ�������, ���Ŷ�������Ⱥ_������, ���Ŷ���QQ, ���ּ��, ���ֲ���ҳ������, ���ַ�������, �����ļ�ֱ������, ����, ������, ������Դ��, ������Դͼ������);
}

/// \brief `
/// \param ���Ŷ�������	"ͬApi_SendMsg  1���� 2Ⱥ 3������ 4Ⱥ��ʱ�Ự 5��������ʱ�Ự"
/// \param ���Ŷ�������Ⱥ_������	"��Ⱥ�ڡ���ʱ�Ự���� ���ѿɲ���"
/// \param ���Ŷ���QQ	"��ʱ�Ự�����ѱ��� ����Ⱥ�ڿɲ���"
/// \param �ṹ������	"00 ���� 02 ��� ��������"
bool Api_SendObjectMsg(char * ��Ӧ��QQ, int ���Ŷ�������, char * ���Ŷ�������Ⱥ_������, char * ���Ŷ���QQ, char * ObjectMsg, int �ṹ������)
{
	return ((bool(__stdcall *)(char * ��Ӧ��QQ, int ���Ŷ�������, char * ���Ŷ�������Ⱥ_������, char * ���Ŷ���QQ, char * ObjectMsg, int �ṹ������))_dll__funs[70])(��Ӧ��QQ, ���Ŷ�������, ���Ŷ�������Ⱥ_������, ���Ŷ���QQ, ObjectMsg, �ṹ������);
}

/// \brief �ж϶����Ƿ�Ϊ���ѣ�˫��`
bool Api_IsFriend()
{
	return ((bool(__stdcall *)())_dll__funs[71])();
}

void DPLS_INIT_LOADALLPORT() {
	HMODULE hel = NULL;
	void *tempp = nullptr;
	hel = LoadLibrary(L"Message.DLL");
	tempp = GetProcAddress(hel, "Api_GetGtk_Bkn");
	_dll__funs[0] = tempp;
	tempp = GetProcAddress(hel, "Api_GetBkn32");
	_dll__funs[1] = tempp;
	tempp = GetProcAddress(hel, "Api_GetLdw");
	_dll__funs[2] = tempp;
	tempp = GetProcAddress(hel, "Api_GetRunPath");
	_dll__funs[3] = tempp;
	tempp = GetProcAddress(hel, "Api_GetOnlineQQlist");
	_dll__funs[4] = tempp;
	tempp = GetProcAddress(hel, "Api_GetQQlist");
	_dll__funs[5] = tempp;
	tempp = GetProcAddress(hel, "Api_GetSessionkey");
	_dll__funs[6] = tempp;
	tempp = GetProcAddress(hel, "Api_GetClientkey");
	_dll__funs[7] = tempp;
	tempp = GetProcAddress(hel, "Api_GetLongClientkey");
	_dll__funs[8] = tempp;
	tempp = GetProcAddress(hel, "Api_GetCookies");
	_dll__funs[9] = tempp;
	tempp = GetProcAddress(hel, "Api_GetPrefix");
	_dll__funs[10] = tempp;
	tempp = GetProcAddress(hel, "Api_Cache_NameCard");
	_dll__funs[11] = tempp;
	tempp = GetProcAddress(hel, "Api_DBan");
	_dll__funs[12] = tempp;
	tempp = GetProcAddress(hel, "Api_Ban");
	_dll__funs[13] = tempp;
	tempp = GetProcAddress(hel, "Api_Shutup");
	_dll__funs[14] = tempp;
	tempp = GetProcAddress(hel, "Api_SetNotice");
	_dll__funs[15] = tempp;
	tempp = GetProcAddress(hel, "Api_GetNotice");
	_dll__funs[16] = tempp;
	tempp = GetProcAddress(hel, "Api_GetNameCard");
	_dll__funs[17] = tempp;
	tempp = GetProcAddress(hel, "Api_SetNameCard");
	_dll__funs[18] = tempp;
	tempp = GetProcAddress(hel, "Api_QuitDG");
	_dll__funs[19] = tempp;
	tempp = GetProcAddress(hel, "Api_DelFriend");
	_dll__funs[20] = tempp;
	tempp = GetProcAddress(hel, "Api_Kick");
	_dll__funs[21] = tempp;
	tempp = GetProcAddress(hel, "Api_JoinGroup");
	_dll__funs[22] = tempp;
	tempp = GetProcAddress(hel, "Api_QuitGroup");
	_dll__funs[23] = tempp;
	tempp = GetProcAddress(hel, "Api_UploadPic");
	_dll__funs[24] = tempp;
	tempp = GetProcAddress(hel, "Api_GuidGetPicLink");
	_dll__funs[25] = tempp;
	tempp = GetProcAddress(hel, "Api_Reply");
	_dll__funs[26] = tempp;
	tempp = GetProcAddress(hel, "Api_SendMsg");
	_dll__funs[27] = tempp;
	tempp = GetProcAddress(hel, "Api_Send");
	_dll__funs[28] = tempp;
	tempp = GetProcAddress(hel, "Api_OutPut");
	_dll__funs[29] = tempp;
	tempp = GetProcAddress(hel, "Api_IsEnable");
	_dll__funs[30] = tempp;
	tempp = GetProcAddress(hel, "Api_Login");
	_dll__funs[31] = tempp;
	tempp = GetProcAddress(hel, "Api_Logout");
	_dll__funs[32] = tempp;
	tempp = GetProcAddress(hel, "Api_Tea����");
	_dll__funs[33] = tempp;
	tempp = GetProcAddress(hel, "Api_Tea����");
	_dll__funs[34] = tempp;
	tempp = GetProcAddress(hel, "Api_GetNick");
	_dll__funs[35] = tempp;
	tempp = GetProcAddress(hel, "Api_GetQQLevel");
	_dll__funs[36] = tempp;
	tempp = GetProcAddress(hel, "Api_GNGetGid");
	_dll__funs[37] = tempp;
	tempp = GetProcAddress(hel, "Api_GidGetGN");
	_dll__funs[38] = tempp;
	tempp = GetProcAddress(hel, "Api_GetVersion");
	_dll__funs[39] = tempp;
	tempp = GetProcAddress(hel, "Api_GetVersionName");
	_dll__funs[40] = tempp;
	tempp = GetProcAddress(hel, "Api_GetTimeStamp");
	_dll__funs[41] = tempp;
	tempp = GetProcAddress(hel, "Api_GetLog");
	_dll__funs[42] = tempp;
	tempp = GetProcAddress(hel, "Api_IfBlock");
	_dll__funs[43] = tempp;
	tempp = GetProcAddress(hel, "Api_GetAdminList");
	_dll__funs[44] = tempp;
	tempp = GetProcAddress(hel, "Api_AddTaotao");
	_dll__funs[45] = tempp;
	tempp = GetProcAddress(hel, "Api_GetSign");
	_dll__funs[46] = tempp;
	tempp = GetProcAddress(hel, "Api_SetSign");
	_dll__funs[47] = tempp;
	tempp = GetProcAddress(hel, "Api_GetGroupListA");
	_dll__funs[48] = tempp;
	tempp = GetProcAddress(hel, "Api_GetGroupListB");
	_dll__funs[49] = tempp;
	tempp = GetProcAddress(hel, "Api_GetGroupMemberA");
	_dll__funs[50] = tempp;
	tempp = GetProcAddress(hel, "Api_GetGroupMemberB");
	_dll__funs[51] = tempp;
	tempp = GetProcAddress(hel, "Api_GetFriendList");
	_dll__funs[52] = tempp;
	tempp = GetProcAddress(hel, "Api_GetQQAge");
	_dll__funs[53] = tempp;
	tempp = GetProcAddress(hel, "Api_GetAge");
	_dll__funs[54] = tempp;
	tempp = GetProcAddress(hel, "Api_GetPersonalProfile");
	_dll__funs[55] = tempp;
	tempp = GetProcAddress(hel, "Api_GetEmail");
	_dll__funs[56] = tempp;
	tempp = GetProcAddress(hel, "Api_GetGender");
	_dll__funs[57] = tempp;
	tempp = GetProcAddress(hel, "Api_SendTyping");
	_dll__funs[58] = tempp;
	tempp = GetProcAddress(hel, "Api_SendShake");
	_dll__funs[59] = tempp;
	tempp = GetProcAddress(hel, "Api_GetRadomOnlineQQ");
	_dll__funs[60] = tempp;
	tempp = GetProcAddress(hel, "Api_AddQQ");
	_dll__funs[61] = tempp;
	tempp = GetProcAddress(hel, "Api_SetOLStatus");
	_dll__funs[62] = tempp;
	tempp = GetProcAddress(hel, "Api_GetMC");
	_dll__funs[63] = tempp;
	tempp = GetProcAddress(hel, "Api_GroupInvitation");
	_dll__funs[64] = tempp;
	tempp = GetProcAddress(hel, "Api_CreateDG");
	_dll__funs[65] = tempp;
	tempp = GetProcAddress(hel, "Api_KickDG");
	_dll__funs[66] = tempp;
	tempp = GetProcAddress(hel, "Api_DGInvitation");
	_dll__funs[67] = tempp;
	tempp = GetProcAddress(hel, "Api_GetDGList");
	_dll__funs[68] = tempp;
	tempp = GetProcAddress(hel, "Api_SendMusic");
	_dll__funs[69] = tempp;
	tempp = GetProcAddress(hel, "Api_SendObjectMsg");
	_dll__funs[70] = tempp;
	tempp = GetProcAddress(hel, "Api_IsFriend");
	_dll__funs[71] = tempp;
}
