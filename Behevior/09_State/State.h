#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
#include<list>
#include<vector>
#include<ctime>
#include<conio.h>
#include<algorithm>

using namespace std;
class State;

class Bankomat
{
	State * state;
public:
	int sumMoney;
	int creditLimit;
	Bankomat();
	void EnterPSWD(string pswd);
	void BlockCard();
	void TakeOffMoney(int sum);
	void PutOn(int sum);
	void PayForProduct(int sum);

	void SetState(State * st);
};


class State
{
protected:
	Bankomat * bankomat;
public:
	State(Bankomat * b);
	State();
	virtual void EnterPSWD(string pswd);
	virtual void BlockCard();
	virtual void TakeOffMoney(int sum);
	virtual void PutOn(int sum);
	virtual void BuySmth(int sum);
};


class StateNoLoginen : public State
{
	string pswd;
public:
	StateNoLoginen(Bankomat * b);
	void EnterPSWD(string pswd);
	void BlockCard();
	void TakeOffMoney(int sum);
	void PutOn(int sum);
	void BuySmth(int sum);
};



class StateBlocked : public State
{
public:
	StateBlocked(Bankomat * b);
	void EnterPSWD(string pswd);
	void BlockCard();
	void TakeOffMoney(int sum);
	void PutOn(int sum);
	void BuySmth(int sum);
};




class StatePositiveBalance : public State
{
public:
	StatePositiveBalance(Bankomat * b);
	void EnterPSWD(string pswd);
	void BlockCard();
	void TakeOffMoney(int sum);
	void PutOn(int sum);
	void BuySmth(int sum);
};



class StateMinusBalance : public State
{
public:
	StateMinusBalance(Bankomat * b);
	void EnterPSWD(string pswd);
	void BlockCard();
	void TakeOffMoney(int sum);
	void PutOn(int sum);
	void BuySmth(int sum);
};