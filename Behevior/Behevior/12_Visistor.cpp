#include<iostream>
#include<Windows.h>
#include<string>
#include<list>
#include<vector>
#include<ctime>
#include<conio.h>
#include<algorithm>
#include"Iterator.h"
#include"MyCollection.h"

using namespace std;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

class GirlHouse;
class BoyHouse;
class Visitor // St Mikolay
{
public:
	void VisitGirl(GirlHouse * h);
	void VisitBoy(BoyHouse * h);
};

class House
{
public:
	virtual void Accept(Visitor * v) = 0;
};

class GirlHouse : public House
{
public:
	void Accept(Visitor * v)
	{
		v->VisitGirl(this);
	}

	void IWonnaDoll()
	{
		cout << "Dear st. Mikolay. Give me please a prityy doll\n";
	}
};

class BoyHouse : public House
{
public:
	void Accept(Visitor * v)
	{
		v->VisitBoy(this);
	}

	void IWonnaCar()
	{
		SetCol(10);
		cout << "Dear st. Mikolay. Give me please a cool radio ruled car\n";
		SetCol(7);
	}
};

void Visitor::VisitGirl(GirlHouse * h)
{
	h->IWonnaDoll();
}
void Visitor::VisitBoy(BoyHouse * h)
{
	h->IWonnaCar();
}


class Village
{
	list<House*> houses;
public:
	void AddHouse(House * h)
	{
		houses.push_back(h);
	}
	void Accept(Visitor * v)
	{
		for (auto h : houses)
		{
			h->Accept(v);
		}
	}
	~Village()
	{
		/*for (size_t i = 0; i < houses.size; i++)
		{
			auto h = houses.back();
			delete h;
		}*/
	}
};


void main()
{
	SetConsoleOutputCP(1251);
	Village * v = new Village();
	v->AddHouse(new GirlHouse());
	v->AddHouse(new BoyHouse());
	v->AddHouse(new GirlHouse());
	v->AddHouse(new GirlHouse());
	v->AddHouse(new BoyHouse());
	v->AddHouse(new BoyHouse());

	Visitor * visitor = new Visitor();
	v->Accept(visitor);

	delete visitor;
	delete v;
}