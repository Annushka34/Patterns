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
class NewsInFb;

class Subscriber
{
public:
	string name;
	Subscriber(string name);
	virtual void GetNews(NewsInFb * news);
};

class SubscribersForAll : public Subscriber
{
public:
	SubscribersForAll(string name);
};

class SubscriberForRivneNews : public Subscriber
{
public:
	SubscriberForRivneNews(string name);
	void GetNews(NewsInFb * news);
};


class NewsInFb
{
	list<Subscriber*> subscribers;
	string news;
	void Notify();
public:
	NewsInFb();
	void Attach(Subscriber * s);
	void Detach(Subscriber * s);
	void CreateNews(string news);
	string GetNews();
};
