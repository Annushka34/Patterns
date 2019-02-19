#include"Header.h"
#include"BodyParts.h"
#include"Brain.h"

void main()
{
	Brain * b = new Brain();
	b->SomethingHappensInBodyPart(b->GetHand());
	BodyPart * h = b->GetHand();
	((Hand*)h)->MakeHelloGreeting();
}