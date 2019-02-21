//#include<iostream>
//#include<Windows.h>
//#include<string>
//#include<list>
//#include<vector>
//#include<ctime>
//#include<conio.h>
//#include<algorithm>
//#include"Iterator.h"
//#include"MyCollection.h"
//
//using namespace std;
//
//
//class Weather
//{
//public:
//	virtual string TakeBodyDress() = 0;
//	virtual string TakeShouse() = 0;
//	virtual string TakeSunglasses() = 0;
//	virtual string TakeUmbrella() = 0;
//
//};
//
//class Summer : public Weather
//{
//public:
//	string TakeBodyDress()
//	{
//		return "Сарафан";
//	}
//	string TakeShouse()
//	{
//		return "Сандалі";
//	}
//	string TakeSunglasses()
//	{
//		return "Сонячні окуляри";
//	}
//	string TakeUmbrella()
//	{
//		return "Парасолька від сонця";
//	}
//};
//
//class Autumn : public Weather
//{
//public:
//	string TakeBodyDress()
//	{
//		return "Пальто";
//	}
//	string TakeShouse()
//	{
//		return "Туфлі";
//	}
//	string TakeSunglasses()
//	{
//		return "Без окулярів";
//	}
//	string TakeUmbrella()
//	{
//		return "Парасолька від дощу";
//	}
//};
//
//
//class GoWalk
//{
//private:
//	Weather * weather = nullptr;
//	string bodyDress;
//	string legsDress;
//	string isUmbrella;
//	string isSunglasses;
//	void DressOurself()
//	{
//		bodyDress = weather->TakeBodyDress();
//		legsDress = weather->TakeShouse();
//		isUmbrella = weather->TakeUmbrella();
//		isSunglasses = weather->TakeSunglasses();
//	}
//
//public:
//	GoWalk(Weather * w)
//	{
//		weather = w;
//		DressOurself();
//	}
//
//	void ChangeStrategy(Weather * w)
//	{
//		if (weather != nullptr)
//			delete weather;
//		weather = w;
//		DressOurself();
//	}
//	void Go()
//	{
//		cout << "I'm dressed in: " << bodyDress << " " << legsDress << " " << isUmbrella << " " << isSunglasses << endl;
//	}
//
//	~GoWalk()
//	{
//		if (weather != nullptr)
//		delete weather;
//	}
//};
//
//
//
//
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	GoWalk * walk = new GoWalk(new Summer());
////	walk->DressOurself();
//	walk->Go();
//
//	walk->ChangeStrategy(new Autumn());
////	walk->DressOurself();
//	walk->Go();
//}