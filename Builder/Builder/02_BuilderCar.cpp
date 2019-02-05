#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;
void MySleep(int n)
{
	cout << "\n------------" << n << "-----------------\n";
	int num = 20;
	while (num)
	{
		cout << "."; Sleep(50); num--;
	}
}


class Car
{
	int year;
	string producer;
	string tractor;
	int loadÑapacity;
	int additionalPassengerSeats;
	string wheels;
public:
	void ShowCar()
	{
		cout << producer << " year: " << year<<" ";
		cout << tractor << " ";
		cout <<"load Ñapacity"<< loadÑapacity << " ";
		cout <<"additional Passenger Seats: "<< additionalPassengerSeats << " ";
		cout << wheels << " \n";
	}
	void SetCommonData(int y, string p)
	{
		year = y;
		producer = p;
	}

	void SetTractor(string t)
	{
		tractor = t;
	}
	void SetWheels(int n)
	{
		while (n)
		{
			wheels += "wheel "; n--;
		}
	}
	void SetPassSeats(int t)
	{
		additionalPassengerSeats = t;
	}
	void SetLoadÑapacity(int t)
	{
		loadÑapacity = t;
	}
};


class AbstractBuilder
{
protected:
	Car * car;
public:
	AbstractBuilder()
	{
		car = new Car();
	}
	Car * GetCar()
	{
		if (car != nullptr)
			return car;
	}

	virtual void SetData() = 0;
	virtual void SetAdditional() = 0;
	virtual void SetWheels() = 0;
};

class TractorBuilder : public AbstractBuilder
{
public:
	void SetData()
	{
		car->SetCommonData(2018, "Renault");
		car->SetTractor("òÿãà÷ âåëèêèé ÷åðâîíèé....");
		car->SetLoadÑapacity(200);
	}
	void SetAdditional()
	{
		car->SetCommonData(1998, "Bogdan");
		car->SetTractor("òÿãà÷ áðóäíèé íåïîíÿòíîãî êîëüðó....");
		car->SetLoadÑapacity(150);
	}
	void SetWheels()
	{
		car->SetWheels(8);
	}
};


class CarBuilder : public AbstractBuilder
{

public:
	void SetData()
	{
		car->SetCommonData(2017, "Mazda");
	}
	void SetAdditional()
	{
		car->SetCommonData(1992, "Opel");
	}
	void SetWheels()
	{
		car->SetWheels(4);
	}
};


class Director
{
	AbstractBuilder * _builder;
public:
	void SetBuilder(AbstractBuilder * builder)
	{
		_builder = builder;
	}

	void SetExpenciveCar()
	{
		_builder->SetData();
		_builder->SetAdditional();
		_builder->SetWheels();
	}

	void SetCheepCar()
	{
		_builder->SetData();
		_builder->SetWheels();
	}
};
void main()
{
	SetConsoleOutputCP(1251);


	AbstractBuilder * builder1 = new CarBuilder();
	AbstractBuilder * builder2 = new TractorBuilder();
	Car * car;


	Director * d = new Director();
	d->SetBuilder(builder1);

	//-----GET DOCUMENT FROM DIRECTOR (TYPE OF DEPENDS ON CONCRETE BUILDER)
	MySleep(1);
	d->SetExpenciveCar();
	car = builder1->GetCar();


	car->ShowCar();
	MySleep(2);
	/*delete car;
	car = nullptr;*/

	d->SetBuilder(builder2);
	car = builder2->GetCar();
	car->ShowCar();
	MySleep(3);
	delete car;
	delete d;
	delete builder1;
	delete builder2;
}