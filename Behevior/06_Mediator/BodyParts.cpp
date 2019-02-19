#pragma once
#include"Brain.h"
#include"BodyParts.h"
#include"Header.h"

BodyPart::BodyPart(Brain * b) : _b(b)
{

}
void BodyPart::Feeling()
{
	_b->SomethingHappensInBodyPart(this);
}


Hand::Hand(Brain * b) : BodyPart(b)
{
	name = "Hand";
}
void Hand::MakeHelloGreeting()
{
	cout << "Hello!!!!hands feeling good!";
	Feeling();
}

void Hand::PushSomeone()
{
	cout << "Push from hand!";
	//Feeling();
}
Face::Face(Brain * b) : BodyPart(b)
{
	name = "Face";
}
void Face::Smile()
{
	cout << "Smile))))))))))))))";
	//Feeling();
}

void Face::Cry()
{
	cout << "Cry((((((((((((";
	//Feeling();
}