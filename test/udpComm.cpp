#pragma comment(lib,"ws2_32.lib")

#include "StdAfx.h"
#include "udpComm.h"
#include <cstdio>


udpComm::udpComm(void)
{
	initUdp();
	m_status     = 1;
	//buffer[4095] = '\0';
	receiverPort = 10000; //端口号 
	receiverAddr.sin_family = AF_INET;  
    receiverAddr.sin_port = htons(receiverPort);  
    receiverAddr.sin_addr.S_un.S_addr = INADDR_ANY; 
	//receiverAddr.sin_family = AF_INET;
	//receiverAddr.sin_port = htons(receiverPort);//端口号范围： 0 ~65535
	//receiverAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);//INADDR_ANY意思是接受所有IP的连接
	senderAddrSize = sizeof(senderAddr);
	creatUdp();
}


udpComm::~udpComm(void)
{
}

void udpComm::initUdp(){
	if(WSAStartup(MAKEWORD(2,2),&wsaDta) != 0){
		m_status = 0;
		TRACE(_T("init failed"));
		return;
	}else{
		if(LOBYTE(wsaDta.wVersion) != 2 || HIBYTE(wsaDta.wVersion) != 2){
			WSACleanup();
			return;
		}
		m_status = 1;
	}
}

void udpComm::creatUdp(){

	//初始化 CSocket 对象, 因为客户端不需要绑定任何端口和地址, 所以用默认参数即可
	
	if((m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == INVALID_SOCKET){		
		WSACleanup();
		TRACE(_T("socket failed"));
		m_status = 0;
		return;
	}else{
		m_status = 1;
	}

	if((Ret = bind(m_socket,(SOCKADDR*)&receiverAddr,sizeof(receiverAddr))) != 0){
		closesocket(m_socket);
		WSACleanup();
		m_status = 0;
		int r = WSAGetLastError();
		TRACE(_T("%d"),r);
		return;
	}else{
		m_status = 1;
	}
}

int udpComm::recvUdpDta(){

	if((Ret = recvfrom(m_socket,buffer,sizeof(buffer),0,(SOCKADDR*)&senderAddr,&senderAddrSize)) == SOCKET_ERROR){
		closesocket(m_socket);
		WSACleanup();
		m_status = 1;
		return Ret;
	}else{
		m_status = 1;
		return Ret;
	}
	Sleep(500);
}

int udpComm::closeUdp(){
	closesocket(m_socket);
	WSACleanup();
	return 1;
}
