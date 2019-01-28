#include<iostream>
#include<string>


using namespace std;

enum class Type { Petrol = 1, Electro };

//----interface----(base class)
class Car
{
protected:
	string producer;
	string color;
	string type;
	int maxSpeed;
public:
	Car(string prod, string col, string type, int maxSpeed) : producer(prod), color(col), type(type), maxSpeed(maxSpeed)
	{

	}
	void ShowInfo()
	{
		cout << "Car: " << producer << " " << color << " " << type << "   Max speed is: " << maxSpeed << endl;
	}
	virtual void GetFuel() = 0;
	virtual ~Car()
	{

	}
};

//---concrete Product 1
class PetrolCar : public Car
{
public:
	PetrolCar(string prod, string col) : Car(prod, col, "Petrol car", 220)
	{	}
	void GetFuel() override
	{
		cout << " I go to petrol station\n";
	}
};
//---concrete Product 2
class ElectroCar : public Car
{
public:
	ElectroCar(string prod, string col) : Car(prod, col, "Electo car", 180)
	{	}
	void GetFuel() override
	{
		cout << " I go to electro station\n";
	}
};


class Fabric
{
public:
	Car * GetCar(Type ind)
	{
		if (ind == Type::Petrol)
			return new PetrolCar("Mazda", "red");
		if (ind == Type::Electro)
			return new ElectroCar("Nissan", "grey");
	}
};

void main()
{
	Car * car = nullptr;
	Fabric * f = new Fabric();

	int userChoice = 0;
	cout << "Enter your choice: 1 - patrol, 2 - electro\n";
	cin >> userChoice;
	


	//-----a long code with 3000 lines and 50 objects of Car....
	car = f->GetCar((Type)userChoice);
	car->ShowInfo();
	car->GetFuel();


	delete car;
	delete f;
}