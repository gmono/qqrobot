#pragma once
//消息处理总文件 用于将代码从混乱的ports.cpp里抽离
#include <string>
#include <functional>
using namespace std;
typedef function<void(string &, string &)> SendMsg;//参数分别为 要回复的qq 要回复的消息 
//用于处理一般消息
//这里的msgtype 为>好友 小于 讨论组临时会话
void MessageFunc(string msg, int msgtype,string logqq, string fromqq,SendMsg sendfun);
//目前只有以上一个函数 用于处理一般消息