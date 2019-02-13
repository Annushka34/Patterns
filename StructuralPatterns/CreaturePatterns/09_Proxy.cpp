#include<iostream>
#include<Windows.h>
#include<string>
#include<list>
#include<ctime>
#include<algorithm>

using namespace std;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

class Wireless
{
protected:
	string content = "";
public:
	void SetConnection(string ip)
	{
		cout << "Connected on " << ip << endl;
	}
	void LoadContent(string cont)
	{
		content = cont;
	}
	void ShowContent()
	{
		cout << "Something very interesting\n" << content << endl;;
	}
	string GetContent()
	{
		return content;
	}
};

class Proxy : public Wireless
{
private:
	Wireless * net;
	bool IsConnected()
	{
		if (net == nullptr)
		{
			cout << "No network!!!";
			return false;
		}
		cout << "connected....";
		return true;
	}
public:
	Proxy()
	{
		
	}
	Proxy(Wireless * net)
	{
		this->net = net;
	}
	
	void SetConnection(string ip)
	{
		if (IsConnected())
		{
			if (ip == "127.0.0.1")
			{
				cout << "You can't connect from localhost\n";
			}
			else
			{
				net->SetConnection(ip);
			}
		}		
	}
	void LoadContent(string cont)
	{
		string notAllowed = "18+";
		if (IsConnected())
		{
			if (search(cont.begin(), cont.end(), notAllowed.begin(), notAllowed.end()) != cont.end())
			{
				cout << "NOT ALLOWED !!!!!\n";
			}
			else
			{
				net->LoadContent(cont);
			}
		}
	}
	void ShowContent()
	{
		if (net->GetContent() != "")
		{
			net->ShowContent();
		}
		else
		{
			cout << "Not Loaded.....\n";
		}
	}
};

void main()
{
	SetConsoleOutputCP(1251);
	//Wireless * net = new Wireless();
	//net->SetConnection("198.12.5.125");
	////net->LoadContent("this content for 18+");
	//net->ShowContent();
	Proxy * p = new Proxy(new Wireless());
	//Wireless * p = new Wireless();

	p->SetConnection("198.12.5.136");
	//p->SetConnection("127.0.0.1");
	//p->LoadContent("the weather is fine");
	p->LoadContent("its interesting 18+ show it!!!!!");
	p->ShowContent();
}