#include"Header.h"
#include"Sender.h"
#include"Server.h"


Server ::Server()
{
	s1 = new Sender(this);
	s1->name = "Vasja";

	s2 = new Sender(this);
	s2->name = "Olga";

	s3 = new Sender(this);
	s3->name = "Ivan";

	s4 = new Sender(this);
	s4->name = "Semen";

}
void Server::Msg(Sender * from, Sender * to, string msg)
{
	cout << from->name << endl;
	cout << "texting....\n";
	to->RecieveMsg(msg, from->name);
}