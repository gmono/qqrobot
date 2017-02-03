#include "mypcqq_dlport_raw.h"

/// \brief 根据提交的QQ号计算得到页面操作用参数Bkn或G_tk`
char * Api_GetGtk_Bkn(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[0])(响应的QQ);
}

/// \brief 根据提交的QQ号计算得到页面操作用参数长Bkn或长G_tk`
char * Api_GetBkn32(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[1])(响应的QQ);
}

/// \brief 根据提交的QQ号计算得到页面操作用参数长Ldw`
char * Api_GetLdw(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[2])(响应的QQ);
}

/// \brief 取得框架所在目录.可能鸡肋了。`
char * Api_GetRunPath()
{
	return ((char * (__stdcall *)())_dll__funs[3])();
}

/// \brief 取得当前框架内在线可用的QQ列表`
char * Api_GetOnlineQQlist()
{
	return ((char * (__stdcall *)())_dll__funs[4])();
}

/// \brief 取得框架内所有QQ列表。包括未登录以及登录失败的QQ`
char * Api_GetQQlist()
{
	return ((char * (__stdcall *)())_dll__funs[5])();
}

/// \brief 根据QQ取得对应的会话秘钥`
char * Api_GetSessionkey(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[6])(响应的QQ);
}

/// \brief 取得页面登录用的Clientkey`
char * Api_GetClientkey(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[7])(响应的QQ);
}

/// \brief 取得页面登录用的长Clientkey`
char * Api_GetLongClientkey(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[8])(响应的QQ);
}

/// \brief 取得页面操作用的Cookies`
char * Api_GetCookies(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[9])(响应的QQ);
}

/// \brief 取得框架内设置的信息发送前缀`
char * Api_GetPrefix()
{
	return ((char * (__stdcall *)())_dll__funs[10])();
}

/// \brief 将群名片加入高速缓存当作.`
void Api_Cache_NameCard(char * 群号, char * QQ, char * 名片)
{
	((void(__stdcall *)(char * 群号, char * QQ, char * 名片))_dll__funs[11])(群号, QQ, 名片);
}

/// \brief 将指定QQ移出QQ黑名单`
void Api_DBan(char * 响应的QQ, char * QQ)
{
	((void(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[12])(响应的QQ, QQ);
}

/// \brief 将指定QQ列入QQ黑名单`
void Api_Ban(char * 响应的QQ, char * QQ)
{
	((void(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[13])(响应的QQ, QQ);
}

/// \brief 禁言群成员`
/// \param 群号	"禁言对象所在群."
/// \param QQ	"禁言对象.留空为全群禁言"
/// \param 时长	"单位:秒 最大为1个月. 为零解除对象或全群禁言"
bool Api_Shutup(char * 响应的QQ, char * 群号, char * QQ, int 时长)
{
	return ((bool(__stdcall *)(char * 响应的QQ, char * 群号, char * QQ, int 时长))_dll__funs[14])(响应的QQ, 群号, QQ, 时长);
}

/// \brief 发群公告`
void Api_SetNotice(char * 响应的QQ, char * 群号, char * 标题, char * 内容)
{
	((void(__stdcall *)(char * 响应的QQ, char * 群号, char * 标题, char * 内容))_dll__funs[15])(响应的QQ, 群号, 标题, 内容);
}

/// \brief 取群公告`
char * Api_GetNotice(char * 响应的QQ, char * 群号)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 群号))_dll__funs[16])(响应的QQ, 群号);
}

/// \brief 取群名片`
char * Api_GetNameCard(char * 响应的QQ, char * 群号, char * QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 群号, char * QQ))_dll__funs[17])(响应的QQ, 群号, QQ);
}

/// \brief 设置群名片`
void Api_SetNameCard(char * 响应的QQ, char * 群号, char * QQ, char * 名片)
{
	((void(__stdcall *)(char * 响应的QQ, char * 群号, char * QQ, char * 名片))_dll__funs[18])(响应的QQ, 群号, QQ, 名片);
}

/// \brief 退出讨论组`
void Api_QuitDG(char * 响应的QQ, char * 讨论组ID)
{
	((void(__stdcall *)(char * 响应的QQ, char * 讨论组ID))_dll__funs[19])(响应的QQ, 讨论组ID);
}

/// \brief 删除好友`
bool Api_DelFriend(char * 响应的QQ, char * QQ)
{
	return ((bool(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[20])(响应的QQ, QQ);
}

/// \brief 将对象移除群`
bool Api_Kick(char * 响应的QQ, char * 群号, char * 对象)
{
	return ((bool(__stdcall *)(char * 响应的QQ, char * 群号, char * 对象))_dll__funs[21])(响应的QQ, 群号, 对象);
}

/// \brief 主动加群.为了避免广告、群发行为。出现验证码时将会直接失败不处理`
void Api_JoinGroup(char * 响应的QQ, char * 群号, char * 附加理由)
{
	((void(__stdcall *)(char * 响应的QQ, char * 群号, char * 附加理由))_dll__funs[22])(响应的QQ, 群号, 附加理由);
}

/// \brief 退出群`
void Api_QuitGroup(char * 响应的QQ, char * 群号)
{
	((void(__stdcall *)(char * 响应的QQ, char * 群号))_dll__funs[23])(响应的QQ, 群号);
}

/// \brief 返回值:成功返回图片GUID用于发送该图片.失败返回空.  图片尺寸应小于4MB`
/// \param 响应的QQ	"机器人QQ"
/// \param 参_上传类型	"1好友2群 注:好友图和群图的GUID并不相同并不通用 需要非别上传。群、讨论组用类型2 临时会话、好友信息需要类型1"
/// \param 参_参考对象	"上传该图片所属的群号或QQ"
/// \param 参_图片数据	"图片字节集数据或字节集数据指针()"
char * Api_UploadPic(char * 响应的QQ, int 参_上传类型, char * 参_参考对象, unsigned char * 参_图片数据)
{
	return ((char * (__stdcall *)(char * 响应的QQ, int 参_上传类型, char * 参_参考对象, unsigned char * 参_图片数据))_dll__funs[24])(响应的QQ, 参_上传类型, 参_参考对象, 参_图片数据);
}

/// \brief 根据图片GUID取得图片下载连接 失败返回空`
/// \param 图片GUID	"{xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx}.jpg这样的GUID"
char * Api_GuidGetPicLink(char * 图片GUID)
{
	return ((char * (__stdcall *)(char * 图片GUID))_dll__funs[25])(图片GUID);
}

/// \brief 回复信息 请尽量避免使用该API`
/// \param 信息类型	"1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 回复对象	"接收这条信息的对象"
/// \param 内容	"信息内容"
int Api_Reply(char * 响应的QQ, int 信息类型, char * 回复对象, char * 内容)
{
	return ((int(__stdcall *)(char * 响应的QQ, int 信息类型, char * 回复对象, char * 内容))_dll__funs[26])(响应的QQ, 信息类型, 回复对象, 内容);
}

/// \brief 向对象、目标发送信息 支持好友 群 讨论组 群临时会话 讨论组临时会话`
/// \param 信息类型	"1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 参考子类型	"无特殊说明情况下留空或填零"
/// \param 收信群_讨论组	"发送群信息、讨论组信息、群临时会话信息、讨论组临时会话信息时填写"
/// \param 收信对象	"最终接收这条信息的对象QQ"
/// \param 内容	"信息内容"
int Api_SendMsg(char * 响应的QQ, int 信息类型, int 参考子类型, char * 收信群_讨论组, char * 收信对象, char * 内容)
{
	return ((int(__stdcall *)(char * 响应的QQ, int 信息类型, int 参考子类型, char * 收信群_讨论组, char * 收信对象, char * 内容))_dll__funs[27])(响应的QQ, 信息类型, 参考子类型, 收信群_讨论组, 收信对象, 内容);
}

/// \brief 发送封包`
char * Api_Send(char * 封包内容)
{
	return ((char * (__stdcall *)(char * 封包内容))_dll__funs[28])(封包内容);
}

/// \brief 在框架记录页输出一行信息`
/// \param 内容	"输出的内容"
int Api_OutPut(char * 内容)
{
	return ((int(__stdcall *)(char * 内容))_dll__funs[29])(内容);
}

/// \brief 取得本插件启用状态`
bool Api_IsEnable()
{
	return ((bool(__stdcall *)())_dll__funs[30])();
}

/// \brief 登录一个现存的QQ`
/// \param QQ	"欲登录的Q"
bool Api_Login(char * QQ)
{
	return ((bool(__stdcall *)(char * QQ))_dll__funs[31])(QQ);
}

/// \brief 让指定QQ下线`
void Api_Logout(char * QQ)
{
	((void(__stdcall *)(char * QQ))_dll__funs[32])(QQ);
}

/// \brief tean加密算法`
char * Api_Tea加密(char * 加密内容, char * Key)
{
	return ((char * (__stdcall *)(char * 加密内容, char * Key))_dll__funs[33])(加密内容, Key);
}

/// \brief tean解密算法`
char * Api_Tea解密(char * 解密内容, char * Key)
{
	return ((char * (__stdcall *)(char * 解密内容, char * Key))_dll__funs[34])(解密内容, Key);
}

/// \brief 取用户名`
char * Api_GetNick(char * QQ)
{
	return ((char * (__stdcall *)(char * QQ))_dll__funs[35])(QQ);
}

/// \brief 取QQ等级+QQ会员等级 返回json格式信息`
char * Api_GetQQLevel(char * QQ)
{
	return ((char * (__stdcall *)(char * QQ))_dll__funs[36])(QQ);
}

/// \brief 群号转群ID`
char * Api_GNGetGid(char * 群号)
{
	return ((char * (__stdcall *)(char * 群号))_dll__funs[37])(群号);
}

/// \brief 群ID转群号`
char * Api_GidGetGN(char * 群ID)
{
	return ((char * (__stdcall *)(char * 群ID))_dll__funs[38])(群ID);
}

/// \brief 取框架版本号(发布时间戳`
int Api_GetVersion()
{
	return ((int(__stdcall *)())_dll__funs[39])();
}

/// \brief 取框架版本名`
char * Api_GetVersionName()
{
	return ((char * (__stdcall *)())_dll__funs[40])();
}

/// \brief 取当前框架内部时间戳_周期性与服务器时间同步`
int Api_GetTimeStamp()
{
	return ((int(__stdcall *)())_dll__funs[41])();
}

/// \brief 取得框架输出列表内所有信息`
char * Api_GetLog()
{
	return ((char * (__stdcall *)())_dll__funs[42])();
}

/// \brief 判断是否处于被屏蔽群信息状态。`
bool Api_IfBlock(char * 响应的QQ)
{
	return ((bool(__stdcall *)(char * 响应的QQ))_dll__funs[43])(响应的QQ);
}

/// \brief 取包括群主在内的群管列表`
char * Api_GetAdminList(char * 响应的QQ, char * 群号)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 群号))_dll__funs[44])(响应的QQ, 群号);
}

/// \brief 发说说`
char * Api_AddTaotao(char * 响应的QQ, char * 内容)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 内容))_dll__funs[45])(响应的QQ, 内容);
}

/// \brief 取个签`
char * Api_GetSign(char * 响应的QQ, char * 对象)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 对象))_dll__funs[46])(响应的QQ, 对象);
}

/// \brief 设置个签`
char * Api_SetSign(char * 响应的QQ, char * 内容)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 内容))_dll__funs[47])(响应的QQ, 内容);
}

/// \brief 通过qun.qzone.qq.com接口取得取群列表.成功返回转码后的JSON格式文本信息`
char * Api_GetGroupListA(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[48])(响应的QQ);
}

/// \brief 通过qun.qq.com接口取得取群列表.成功返回转码后的JSON格式文本信息`
char * Api_GetGroupListB(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[49])(响应的QQ);
}

/// \brief 通过qun.qq.com接口取得群成员列表 成功返回转码后的JSON格式文本`
char * Api_GetGroupMemberA(char * 响应的QQ, char * 群号)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 群号))_dll__funs[50])(响应的QQ, 群号);
}

/// \brief 通过qun.qzone.qq.com接口取得群成员列表 成功返回转码后的JSON格式文本`
char * Api_GetGroupMemberB(char * 响应的QQ, char * 群号)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 群号))_dll__funs[51])(响应的QQ, 群号);
}

/// \brief 通过qun.qq.com接口取得好友列表。成功返回转码后的JSON文本`
char * Api_GetFriendList(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[52])(响应的QQ);
}

/// \brief 取Q龄 成功返回Q龄 失败返回-1`
int Api_GetQQAge(char * 响应的QQ, char * QQ)
{
	return ((int(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[53])(响应的QQ, QQ);
}

/// \brief 取年龄 成功返回年龄 失败返回-1`
int Api_GetAge(char * 响应的QQ, char * QQ)
{
	return ((int(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[54])(响应的QQ, QQ);
}

/// \brief 取个人说明`
/// \param QQ	"对象QQ"
char * Api_GetPersonalProfile(char * 响应的QQ, char * QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[55])(响应的QQ, QQ);
}

/// \brief 取邮箱 成功返回邮箱 失败返回空`
char * Api_GetEmail(char * 响应的QQ, char * QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[56])(响应的QQ, QQ);
}

/// \brief 取对象性别 1男 2女  未或失败返回-1`
int Api_GetGender(char * 响应的QQ, char * QQ)
{
	return ((int(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[57])(响应的QQ, QQ);
}

/// \brief 向好友发送‘正在输入’的状态信息.当好友收到信息之后 “正在输入”状态会立刻被打断`
int Api_SendTyping(char * 响应的QQ, char * QQ)
{
	return ((int(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[58])(响应的QQ, QQ);
}

/// \brief 向好友发送窗口抖动信息`
int Api_SendShake(char * 响应的QQ, char * QQ)
{
	return ((int(__stdcall *)(char * 响应的QQ, char * QQ))_dll__funs[59])(响应的QQ, QQ);
}

/// \brief 取得框架内随机一个在线且可以使用的QQ`
char * Api_GetRadomOnlineQQ()
{
	return ((char * (__stdcall *)())_dll__funs[60])();
}

/// \brief 往帐号列表添加一个Q.当该Q已存在时则覆盖密码`
/// \param 自动登录	"运行框架时是否自动登录该Q.若添加后需要登录该Q则需要通过Api_Login操作"
bool Api_AddQQ(char * QQ, char * 密码, bool 自动登录)
{
	return ((bool(__stdcall *)(char * QQ, char * 密码, bool 自动登录))_dll__funs[61])(QQ, 密码, 自动登录);
}

/// \brief 设置在线状态+附加信息 `
/// \param 在线状态	"1~6 分别对应我在线上"
/// \param 状态附加信息	"最大255字节"
bool Api_SetOLStatus(char * 响应的QQ, int 在线状态, char * 状态附加信息)
{
	return ((bool(__stdcall *)(char * 响应的QQ, int 在线状态, char * 状态附加信息))_dll__funs[62])(响应的QQ, 在线状态, 状态附加信息);
}

/// \brief 取得机器码`
char * Api_GetMC()
{
	return ((char * (__stdcall *)())_dll__funs[63])();
}

/// \brief 邀请对象加入群 失败返回错误理由`
/// \param 好友QQ	"多个好友用换行分割"
char * Api_GroupInvitation(char * 响应的QQ, char * 好友QQ, char * 群号)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 好友QQ, char * 群号))_dll__funs[64])(响应的QQ, 好友QQ, 群号);
}

/// \brief 创建一个讨论组 成功返回讨论组ID 失败返回空 注:每24小时只能创建100个讨论组 悠着点用`
char * Api_CreateDG(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[65])(响应的QQ);
}

/// \brief 将对象移除讨论组.成功返回空 失败返回理由`
char * Api_KickDG(char * 响应的QQ, char * 讨论组ID, char * 成员)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 讨论组ID, char * 成员))_dll__funs[66])(响应的QQ, 讨论组ID, 成员);
}

/// \brief 邀请对象加入讨论组 成功返回空 失败返回理由`
/// \param 成员组	"多个成员用换行符分割"
char * Api_DGInvitation(char * 响应的QQ, char * 讨论组ID, char * 成员组)
{
	return ((char * (__stdcall *)(char * 响应的QQ, char * 讨论组ID, char * 成员组))_dll__funs[67])(响应的QQ, 讨论组ID, 成员组);
}

/// \brief 成功返回以换行符分割的讨论组号列表.最大为100个讨论组  失败返回空`
char * Api_GetDGList(char * 响应的QQ)
{
	return ((char * (__stdcall *)(char * 响应的QQ))_dll__funs[68])(响应的QQ);
}

/// \brief 向对象发送一条音乐信息（所谓的点歌）次数不限`
/// \param 收信对象类型	"同Api_SendMsg  1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 收信对象所属群_讨论组	"发群内、临时会话必填 好友可不填"
/// \param 收信对象QQ	"临时会话、好友必填 发至群内可不填"
/// \param 音乐简介	"留空默认‘QQ音乐 的分享’"
/// \param 音乐播放页面连接	"任意直连或短链接均可 留空为空 无法点开"
/// \param 音乐封面连接	"任意直连或短链接均可 可空 例:http://url.cn/cDiJT4"
/// \param 音乐文件直连连接	"任意直连或短链接均可 不可空 例:http://url.cn/djwXjr"
/// \param 曲名	"可空"
/// \param 歌手名	"可空"
/// \param 音乐来源名	"可空 为空默认QQ音乐"
/// \param 音乐来源图标连接	"可空 为空默认QQ音乐 http://qzonestyle.gtimg.cn/ac/qzone/applogo/64/308/100497308_64.gif"
bool Api_SendMusic(char * 响应的QQ, int 收信对象类型, char * 收信对象所属群_讨论组, char * 收信对象QQ, char * 音乐简介, char * 音乐播放页面连接, char * 音乐封面连接, char * 音乐文件直连连接, char * 曲名, char * 歌手名, char * 音乐来源名, char * 音乐来源图标连接)
{
	return ((bool(__stdcall *)(char * 响应的QQ, int 收信对象类型, char * 收信对象所属群_讨论组, char * 收信对象QQ, char * 音乐简介, char * 音乐播放页面连接, char * 音乐封面连接, char * 音乐文件直连连接, char * 曲名, char * 歌手名, char * 音乐来源名, char * 音乐来源图标连接))_dll__funs[69])(响应的QQ, 收信对象类型, 收信对象所属群_讨论组, 收信对象QQ, 音乐简介, 音乐播放页面连接, 音乐封面连接, 音乐文件直连连接, 曲名, 歌手名, 音乐来源名, 音乐来源图标连接);
}

/// \brief `
/// \param 收信对象类型	"同Api_SendMsg  1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 收信对象所属群_讨论组	"发群内、临时会话必填 好友可不填"
/// \param 收信对象QQ	"临时会话、好友必填 发至群内可不填"
/// \param 结构子类型	"00 基本 02 点歌 其他不明"
bool Api_SendObjectMsg(char * 响应的QQ, int 收信对象类型, char * 收信对象所属群_讨论组, char * 收信对象QQ, char * ObjectMsg, int 结构子类型)
{
	return ((bool(__stdcall *)(char * 响应的QQ, int 收信对象类型, char * 收信对象所属群_讨论组, char * 收信对象QQ, char * ObjectMsg, int 结构子类型))_dll__funs[70])(响应的QQ, 收信对象类型, 收信对象所属群_讨论组, 收信对象QQ, ObjectMsg, 结构子类型);
}

/// \brief 判断对象是否为好友（双向）`
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
	tempp = GetProcAddress(hel, "Api_Tea加密");
	_dll__funs[33] = tempp;
	tempp = GetProcAddress(hel, "Api_Tea解密");
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
