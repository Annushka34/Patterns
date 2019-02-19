#pragma once
#include"Header.h"

class Brain;

class BodyPart
{
	Brain * _b;
public:
	BodyPart(Brain * b);
	string name;
protected:
	void Feeling();
};


class Hand: public BodyPart
{
public:
	Hand(Brain * b);
	void MakeHelloGreeting();
	void PushSomeone();
};


class Face : public BodyPart
{
public:
	Face(Brain * b);
	void Smile();
	void Cry();
};
