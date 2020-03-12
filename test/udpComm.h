#pragma once
#include <WinSock2.h>

#define ISOCKET_READBUFF_MAX 4086


class udpComm
{
public:
	udpComm(void);
	~udpComm(void);

private:
	WSADATA wsaDta;
	int     Ret;
	SOCKET  m_socket;

public:	
	bool         m_status;
	SOCKADDR_IN  receiverAddr;
	int          receiverPort;
	SOCKADDR_IN  senderAddr;
	int          senderAddrSize;
	char         buffer[5000];

public:
	void   initUdp();
	void   creatUdp();
	int    recvUdpDta();
	int    closeUdp();
};



