#include<iostream>
#include<string>


using namespace std;

class Multimedia
{
	int size;
	string name;
	
public:
	virtual Multimedia* Clone() = 0;
	virtual int SetSize()
	{
		return size;
	}
	virtual string GetName()
	{
		return name;
	}
	void SetData(string n, int s)
	{
		name = n; size = s;
	}
};

class Mp3 : public Multimedia 
{
public:
	Mp3(int size, string name)
	{
		this->SetData(name, size);
	}
	Multimedia * Clone()
	{
		return new Mp3(*this);
	}
};


class Gpeg : public Multimedia
{
public:
	Gpeg(int size, string name)
	{
		this->SetData(name, size);
	}
	Multimedia * Clone()
	{
		return new Gpeg(*this);
	}
};

class MultimediaFabric
{
	static Multimedia * photoGoblin;
	static Multimedia * photoPrincess;
	static Multimedia * soundGoblin;
	static Multimedia *soundPrincess;
public:
	static Multimedia* GetGoblinPhoto()
	{
		return photoGoblin->Clone();
	}
	static Multimedia* GetGoblinSound()
	{
		return soundGoblin->Clone();
	}
	static Multimedia* GetPrincessPhoto()
	{
		return photoPrincess->Clone();
	}
	static Multimedia* GetPrincessSound()
	{
		return soundPrincess->Clone();
	}

	~MultimediaFabric()
	{
		delete photoGoblin;
		delete photoPrincess;
		delete soundGoblin;
		delete soundPrincess;
	}
};

Multimedia* MultimediaFabric::photoGoblin = new Gpeg(50, "Goblin img 1");
Multimedia* MultimediaFabric::photoPrincess = new Gpeg(120, "Princess img 2");
Multimedia* MultimediaFabric::soundGoblin = new Gpeg(5, "brrrrrrr");
Multimedia* MultimediaFabric::soundPrincess = new Gpeg(7, "la-la-la");

//Multimedia* MultimediaFabric::arr{ new Gpeg(50, "Goblin img 1"), new Gpeg(50, "Goblin img 1"), new Gpeg(50, "Goblin img 1") };

void main()
{
	Multimedia* photoG =  MultimediaFabric::GetGoblinPhoto();
	Multimedia* soundP = MultimediaFabric::GetPrincessSound();
	cout<<photoG->GetName()<<endl;
	cout << soundP->GetName()<<endl;


	delete photoG;
	delete soundP;
}