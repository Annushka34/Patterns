#pragma once
#include"Header.h"

class Sender;

class Server
{
public:
	Sender * s1;
	Sender * s2;
	Sender * s3;
	Sender * s4;
	Server();
	void Msg(Sender * from, Sender * to, string msg);
};
