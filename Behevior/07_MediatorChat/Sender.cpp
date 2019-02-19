#include"Header.h"
#include"Sender.h"
#include"Server.h"


Sender ::Sender(Server * s)
{
	this->s = s;
}

void Sender:: RecieveMsg(string text, string nameSender)
{
	cout << "I am " << name << ". I recieve msg from " << nameSender << ": " << text << endl;
}