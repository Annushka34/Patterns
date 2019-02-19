#include"Header.h"
#include"Sender.h"
#include"Server.h"


void main()
{
	Server * s = new Server();
	s->Msg(s->s1, s->s3, "Hello, You are so nice))");

	cout << endl;
	s->Msg(s->s3, s->s4, ")))Hello too");

}