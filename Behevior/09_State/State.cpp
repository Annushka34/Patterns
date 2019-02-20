#include"State.h"

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}




Bankomat::Bankomat()
{
	state = new StateNoLoginen(this);
	sumMoney = 10;	
	creditLimit = 1000;
}

void Bankomat::EnterPSWD(string pswd)
{
	state->EnterPSWD(pswd);
}

void Bankomat::BlockCard()
{
	state->BlockCard();
}

void Bankomat::TakeOffMoney(int sum)
{
	state->TakeOffMoney(sum);
}

void Bankomat::PutOn(int sum)
{
	state->PutOn(sum);
}

void Bankomat::PayForProduct(int sum)
{
	state->BuySmth(sum);
}

void Bankomat::SetState(State * st)
{
	state = st;
}

State::State(Bankomat * b)
{
	bankomat = b;
}

State::State()
{
}

void State::EnterPSWD(string pswd)
{
}

void State::BlockCard()
{
}

void State::TakeOffMoney(int sum)
{
}

void State::PutOn(int sum)
{
}

void State::BuySmth(int sum)
{
}

StateNoLoginen::StateNoLoginen(Bankomat * b): State(b)
{
	pswd = "1234";
}

void StateNoLoginen::EnterPSWD(string pswd)
{
	string pswd1;
	int counter = 3;
	while (counter)
	{
		cout << "Enter: ";
		cin >> pswd1;
		if (pswd1 == this->pswd)
		{
			if (bankomat->sumMoney > 0)
			{				
				bankomat->SetState(new StatePositiveBalance(bankomat));
			}
			else
				bankomat->SetState(new StateMinusBalance(bankomat));

			cout << "correct\n";
				return;
		}
		counter--;
	}
		BlockCard();
}

void StateNoLoginen::BlockCard()
{
	cout << "blocked\n";
	bankomat->SetState(new StateBlocked(bankomat));
}

void StateNoLoginen::TakeOffMoney(int sum)
{
	SetCol(12);
	cout << "can't do this\n";
	SetCol(7);
}

void StateNoLoginen::PutOn(int sum)
{
	SetCol(12);
	cout << "can't do this\n";
	SetCol(7);
}

void StateNoLoginen::BuySmth(int sum)
{
	SetCol(12);
	cout << "can't do this\n";
	SetCol(7);
}

StateBlocked::StateBlocked(Bankomat * b) : State(b)
{

}

void StateBlocked::EnterPSWD(string pswd)
{
	SetCol(12);
	cout << "can't do this. Go to manager\n";
	SetCol(7);
}

void StateBlocked::BlockCard()
{
	SetCol(12);
	cout << "can't do this. Go to manager\n";
	SetCol(7);
}

void StateBlocked::TakeOffMoney(int sum)
{
	SetCol(12);
	cout << "can't do this. Go to manager\n";
	SetCol(7);
}

void StateBlocked::PutOn(int sum)
{
	SetCol(12);
	cout << "can't do this. Go to manager\n";
	SetCol(7);
}

void StateBlocked::BuySmth(int sum)
{
	SetCol(12);
	cout << "can't do this. Go to manager\n";
	SetCol(7);
}

StatePositiveBalance::StatePositiveBalance(Bankomat * b) : State(b)
{
}

void StatePositiveBalance::EnterPSWD(string pswd)
{
	SetCol(10);
	cout << "already logined\n";
	SetCol(7);
}

void StatePositiveBalance::BlockCard()
{
	SetCol(10);
	cout << "already logined\n";
	SetCol(7);
}

void StatePositiveBalance::TakeOffMoney(int sum)
{
	if (bankomat->sumMoney >= sum)
	{
		cout << " take it: ";
		bankomat->sumMoney -= sum;
	}
	else
	{
		cout << "you can take only " << bankomat->sumMoney << endl;
	}
	if (bankomat->sumMoney == 0)
		bankomat->SetState(new StateMinusBalance(bankomat));
}

void StatePositiveBalance::PutOn(int sum)
{
	bankomat->sumMoney += sum;
	cout << "\nBalance: " << bankomat->sumMoney << endl;
}

void StatePositiveBalance::BuySmth(int sum)
{
	if (bankomat->sumMoney >= sum)
	{
		cout << " take it: ";
		bankomat->sumMoney -= sum;
	}
	else
	{
		cout << "you can take only " << bankomat->sumMoney << endl;
	}
	if (bankomat->sumMoney == 0)
		bankomat->SetState(new StateMinusBalance(bankomat));
}

StateMinusBalance::StateMinusBalance(Bankomat * b) : State(b)
{
}

void StateMinusBalance::EnterPSWD(string pswd)
{
	SetCol(10);
	cout << "already logined\n";
	SetCol(7);
}

void StateMinusBalance::BlockCard()
{
	SetCol(10);
	cout << "already logined\n";
	SetCol(7);
}

void StateMinusBalance::TakeOffMoney(int sum)
{
	SetCol(10);
	cout << "no money\n";
	SetCol(7);
}

void StateMinusBalance::PutOn(int sum)
{
	bankomat->sumMoney += sum;
	cout << "Balance: " << bankomat->sumMoney << endl;
}

void StateMinusBalance::BuySmth(int sum)
{
	SetCol(10);
	cout << "no money\n";
	SetCol(7);
}



void main()
{
	Bankomat * b = new Bankomat();
	b->PutOn(1000);
	b->PayForProduct(500);
	b->EnterPSWD("1234");
	b->PutOn(1000);
	b->PayForProduct(500);
	b->TakeOffMoney(600);
	b->TakeOffMoney(510);
	b->PayForProduct(100);
	b->EnterPSWD("1234");
}