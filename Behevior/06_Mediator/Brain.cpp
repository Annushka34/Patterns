#pragma once
#include"BodyParts.h"
#include"Brain.h"
#include"Header.h"

Brain::Brain()
	{
		hand = new Hand(this); //---brain = this
		face = new Face(this);		
	}
BodyPart * Brain::GetHand()
{
	return hand;
}
BodyPart * Brain::GetFace()
{
	return face;
}
void Brain:: SomethingHappensInBodyPart(BodyPart * part)
	{
		if (part->name == "Hand")
		{
			//((Hand*)part)->PushSomeone();
			hand->PushSomeone();
			face->Cry();
		}
		if (part->name == "Face")
		{
			face->Cry();
		}
	}