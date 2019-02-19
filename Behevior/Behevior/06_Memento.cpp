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

class Memento
{
	//---STATE---
public:
	int score;
	int leave;
};


class Game
{
	string name;
	int score = 100;
	int leave = 3;

public:
	void Run()
	{
		while (!_kbhit())
		{
			cout << ".";
			Sleep(50);
			score++;
			if (score % 10 == 0) leave--;
		}
	}

	void Show()
	{
		cout << score << " " << leave << endl;
	}

	Memento* F5()
	{
		Memento * m = new Memento();
		m->leave = leave;
		m->score = score;
		return m;
	}

	void F9(Memento * m)
	{
		leave = m->leave;
		score = m->score;
	}
};




class CareTaker
{
	Game * g;
	Memento * savedState;
public:
	CareTaker(Game * g)
	{
		this->g = g;
	}

	void Game()
	{
		g->Run();
		g->Show();
	}

	void Save()
	{
		savedState = g->F5();
	}

	void Load()
	{
		g->F9(savedState);
	}
};
void Print(string str)
{
	cout << "------------------------------------------------------\n";
	cout << "---------------------------" << str << "-------------------\n";
	cout << "------------------------------------------------------\n";
}

void main()
{
	CareTaker * ct = new CareTaker(new Game());
	Print("game");
	ct->Game();
	_getch();
	Print("save");
	ct->Save();
	_getch();

	Print("game");
	_getch();
	_getch();

	ct->Game();
	_getch();

	Print("load");
	_getch();

	ct->Load();
	Print("game");
	_getch();
	_getch();
	_getch();

	ct->Game();
	_getch();

}