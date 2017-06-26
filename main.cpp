
//#include "/home/njn/CLionProjects/ctpLinux/ThostTraderApi/ThostFtdcTraderApi.h"
#include <cstdio>
#include "ThostFtdcMdApi.h"
#include "MdSpi.h"
#include <iostream>
using namespace std;
// UserApi对象
CThostFtdcMdApi* pUserApi;

// 配置参数
//char FRONT_ADDR[] = "tcp://27.115.78.196:41213";		// 前置地址
char FRONT_ADDR[] = "tcp://180.168.146.187:10010";		// 前置地址
//TThostFtdcBrokerIDType	BROKER_ID = "66666";				// 经纪公司代码
TThostFtdcBrokerIDType	BROKER_ID = "9999";				// 经纪公司代码
//TThostFtdcInvestorIDType INVESTOR_ID = "88995014";			// 投资者代码
//TThostFtdcPasswordType  PASSWORD = "123321";			// 用户密码
TThostFtdcInvestorIDType INVESTOR_ID = "051444";			// 投资者代码
TThostFtdcPasswordType  PASSWORD = "123456";			// 用户密码
char *ppInstrumentID[] = {"m1709"};			// 行情订阅列表
int iInstrumentID = 1;									// 行情订阅数量

// 请求编号
int iRequestID = 0;

int main(void)
{

    cout << "HelloWorld" << endl;

    // 初始化UserApi
    pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();			// 创建UserApi
    CThostFtdcMdSpi* pUserSpi = new CMdSpi();
    pUserApi->RegisterSpi(pUserSpi);
    cout << FRONT_ADDR << endl;
    pUserApi->RegisterFront(FRONT_ADDR);					// connect
    pUserApi->Init();
    cout << "going to wait" << endl;

    pUserApi->Join();

    return 0;
//	pUserApi->Release();
}