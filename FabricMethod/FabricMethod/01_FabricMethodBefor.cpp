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
//	Car(string prod, string col, string type, int maxSpeed): producer(prod), color(col), type(type), maxSpeed(maxSpeed)
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
//	PetrolCar(string prod, string col): Car(prod, col, "Petrol car", 220)
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
//void main()
//{
//	Car * car = nullptr;
//
//	int userChoice = 0;
//	cout << "Enter your choice: 1 - patrol, 2 - electro\n";
//	cin >> userChoice;
//	if (userChoice == 1)
//	{
//		car = new PetrolCar("Mazda", "red");
//	}
//	if (userChoice == 2)
//	{
//		car = new ElectroCar("Nissan", "grey");
//	}
//	car->ShowInfo();
//	car->GetFuel();
//	delete car;
//}