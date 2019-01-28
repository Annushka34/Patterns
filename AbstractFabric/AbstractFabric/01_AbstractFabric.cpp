#include <iostream>
// AbstractProduct A
class IWheel {
public:
	virtual void printName() = 0;
};
// ConcreteProductA1
class FordWheel : public IWheel {
public:
	virtual void printName()
	{
		std::cout << "Ford wheel" << std::endl;
	}
};
// ConcreteProductA2
class ToyotaWheel : public IWheel
{
public:
	virtual void printName()
	{
		std::cout << "Toyota wheel" << std::endl;
	}
};
// AbstractProductB
class IEngine {
public:
	virtual void printPower() = 0;
};
// ConcreteProductB1
class FordEngine : public IEngine
{
public:
	virtual void printPower()
	{
		std::cout << "Ford Engine 4.4" << std::endl;
	}
};

// ConcreteProductB2
class ToyotaEngine : public IEngine
{
public:
	virtual void printPower()
	{
		std::cout << "Toyota Engine 3.2" << std::endl;
	}
};


class ICarFactory// AbstractFactory
{
public:
	virtual IWheel*     createWheel() = 0;
	virtual IEngine*  createEngine() = 0;
};
// ConcreteFactory1
class FordFactory : public ICarFactory
{
public:
	// from ICarFactory
	virtual IWheel* createWheel()
	{
		return new FordWheel();
	}
	virtual IEngine* createEngine()
	{
		return new FordEngine();
	}
};

// ConcreteFactory2
class ToyotaFactory : public ICarFactory {
public:
	// from ICarFactory
	virtual IWheel* createWheel()
	{
		return new ToyotaWheel();
	}
	virtual IEngine* createEngine()
	{
		return new ToyotaEngine();
	}
};


void use(ICarFactory* f) {
	IWheel*     myCar = f->createWheel();
	IEngine*  myEngine = f->createEngine();

	myCar->printName();
	myEngine->printPower();

	delete myCar;
	delete myEngine;
}

int main() {
	//ToyotaFactory  factory;
	FordFactory factory;
	use(&factory);
	return 0;
}
