#pragma once
class BodyPart;
class Hand;
class Face;

class Brain
{
	Hand * hand;
	Face * face;
public:
	BodyPart * GetHand();
	BodyPart * GetFace();
	Brain();
	void SomethingHappensInBodyPart(BodyPart * part);
};
