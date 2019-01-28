//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
////----interface----(base class)
//class Car
//{
//protected:
//	string producer;
//	string color;
//	string type;
//	int maxSpeed;
//public:
//	Car(string prod, string col, string type, int maxSpeed) : producer(prod), color(col), type(type), maxSpeed(maxSpeed)
//	{
//
//	}
//	void ShowInfo()
//	{
//		cout << "Car: " << producer << " " << color << " " << type << "   Max speed is: " << maxSpeed << endl;
//	}
//	virtual void GetFuel() = 0;
//	virtual ~Car()
//	{
//
//	}
//};
//
////---concrete Product 1
//class PetrolCar : public Car
//{
//public:
//	PetrolCar(string prod, string col) : Car(prod, col, "Petrol car", 220)
//	{	}
//	void GetFuel() override
//	{
//		cout << " I go to petrol station\n";
//	}
//};
////---concrete Product 2
//class ElectroCar : public Car
//{
//public:
//	ElectroCar(string prod, string col) : Car(prod, col, "Electo car", 220)
//	{	}
//	void GetFuel() override
//	{
//		cout << " I go to electro station\n";
//	}
//};
//
//
//class Fabric
//{
//public: 
//	virtual Car * GetCar() = 0;
//	virtual ~Fabric() {};
//};
//
//class FabricPetrol : public Fabric
//{
//public:
//	Car * GetCar()
//	{
//		return new PetrolCar("Mazda", "red");
//	}
//};
//
//class FabricElectro : public Fabric
//{
//public:
//	Car * GetCar()
//	{
//		return new ElectroCar("Nissan", "grey");
//	}
//};
//void main()
//{
//	Car * car = nullptr;
//	Fabric * f = nullptr;
//
//	int userChoice = 0;
//	cout << "Enter your choice: 1 - patrol, 2 - electro\n";
//	cin >> userChoice;
//	if(userChoice == 1)
//		f = new FabricPetrol();
//	else
//		f = new FabricElectro();
//
//
//	//-----a long code with 3000 lines and 50 objects of Car....
//	car = f->GetCar();
//	car->ShowInfo();
//	car->GetFuel();
//
//
//	delete car;
//	delete f;
//}