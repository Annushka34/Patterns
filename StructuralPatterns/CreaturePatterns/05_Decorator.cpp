#include<iostream>
#include<Windows.h>
#include<string>
#include<list>
#include<ctime>

using namespace std;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

class IPerson//---interface
{
public:
	virtual void Wear(string wear) = 0;
	virtual void ShowWear() = 0;
	virtual void SetName(string name) = 0;
};

class Person : public IPerson //---Concrete Person (realization of interface IPerson)
{
public:
	string weared;
	string name;
	Person()
	{
		weared = "I am nude ";
	}
	void SetName(string name)
	{
		this->name = name;
	}
	void Wear(string wear)
	{
		weared += wear;
	}
	void ShowWear()
	{
		SetCol(10);
		cout << "My name is: " << name << endl;
		SetCol(7);
		cout << weared << endl;
	}
};

class Decorator : public Person
{
protected:
	IPerson * _p;
public:
	Decorator(IPerson * p)
	{
		_p = p;
	}

};

class Suit : public Decorator
{
public:
	Suit(IPerson * p): Decorator(p)
	{
			
	}
	void Wear(string wear)
	{
		_p->Wear(wear);
	}
	void ShowWear()
	{
		_p->ShowWear();
	}
};

class Coat : public Decorator
{
public:
	Coat(IPerson * p) : Decorator(p)
	{

	}
	void Wear(string wear)
	{
	  _p->Wear(wear);
	}
	void ShowWear()
	{
		_p->ShowWear();
	}
};

class Dress : public Decorator
{
public:
	Dress(IPerson * p) : Decorator(p)
	{

	}
	void Wear(string wear)
	{
		SetCol(13);
		cout << "Wear Dress..";
		for (size_t i = 0; i < 50; i++)
		{
		cout << ".";
		Sleep(50);
		}
		_p->Wear(wear);
	}
	void ShowWear()
	{
		_p->ShowWear();
	}
};

void main()
{
	SetConsoleOutputCP(1251);
	//-----SIMPLE PERSON WITHOUT DECOR (WEAR)
	IPerson *p = new Person();
	p->SetName("Vasja");
	p->Wear("trouses");
	p->ShowWear();


	Suit * pDecor = new Suit(p);
	pDecor->Wear(" suit");
	pDecor->ShowWear();

	Decorator * cDecor = new Coat(pDecor);
	cDecor->Wear(" coat");
	cDecor->ShowWear();

	Decorator * dDecor = new Dress(cDecor);
	dDecor->Wear("dress");
	dDecor->ShowWear();
}