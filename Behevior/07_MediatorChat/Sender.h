#pragma once
#include"Header.h"

class Server;


class Sender
{
	Server * s;
public:
	string name;
	Sender(Server * s);

	void RecieveMsg(string text, string nameSender);
};
