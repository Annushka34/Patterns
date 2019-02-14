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

class BankEmployee
{
protected:
	BankEmployee * accessor = nullptr; // next level employee

public:
	void SetAccessor(BankEmployee * empl)
	{
		accessor = empl;
	}
	virtual void GiveKredit(int sum) = 0;
};

class SimpleKlerk : public BankEmployee
{
public:
	void GiveKredit(int sum)
	{
		SetCol(rand() % 10 + 2);
		cout << "I am simple klerk!...wait a minute.....\n";

		if (sum < 1000) cout << "Take your money\n";
		else
		{
			if (accessor != nullptr)
				accessor->GiveKredit(sum);
			else
			{
				SetCol(12);
				cout << " your city is so small for such requst!!! No such manager in our bank!!! Go away!!!\n";
				SetCol(7);
			}
		//array<int, 6> arr{ 2,3,5,6,5,6 };
		}
		SetCol(7);

	}
};

class Manager : public BankEmployee
{
public:
	void GiveKredit(int sum)
	{
		SetCol(rand() % 10 + 2);
		cout << "I am manager!...wait a minute.....\n";
		if (sum < 10000) cout << "Take your money\n";
		else
		{
			if (accessor != nullptr)
				accessor->GiveKredit(sum);
			else
			{
				SetCol(12);
				cout << " your city is so small for such requst!!! No such manager in our bank!!! Go away!!!\n";
				SetCol(7);
			}
		}
		SetCol(7);
	}
};

class VIPManager : public BankEmployee
{
public:
	void GiveKredit(int sum)
	{
		SetCol(rand() % 10 + 2);
		cout << "I am VIP manager!...wait a minute.....\n";
		if (sum < 100000) cout << "Take your money\n";
		else
		{
			if (accessor != nullptr)
				accessor->GiveKredit(sum);
			else
			{
				SetCol(12);
				cout << " your city is so small for such requst!!! No such manager in our bank!!! Go away!!!\n";
				SetCol(7);
			}
		}
		SetCol(7);
	}
};

void main()
{
	SetConsoleOutputCP(1251);
	
}