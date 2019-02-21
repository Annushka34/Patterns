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
//void SetCol(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//
//
//class Cook
//{
//protected:
//	virtual void PrepareProducts() = 0;
//	virtual void MixAndCutIngridients() = 0;
//	virtual void TermicalCooking() = 0;
//	virtual void PrettyDisign() = 0;
//
//public:
//	void CookMeal()
//	{
//		PrepareProducts();
//		MixAndCutIngridients();
//		TermicalCooking();
//		PrettyDisign();
//	}
//};
//
//
//class CookSoup : public Cook
//{
//	void PrepareProducts()
//	{
//		SetCol(10);
//		cout << "Візьміть картоплю, моркву, мясо, цибулю і крупу\n";
//	}
//	void MixAndCutIngridients()
//	{
//		cout << "В каструлю налийте воду, очістіть на наріжте продукти, киньте варитись мясо.....\n";
//	}
//	void TermicalCooking()
//	{
//		cout << "Варіть 40 хв\n";
//	}
//	void PrettyDisign()
//	{
//		cout << "Подавайте в глибокій тарілці. Прикрасьте зеленню\n";
//	}
//};
//
//class CookCake : public Cook
//{
//	void PrepareProducts()
//	{
//		SetCol(12);
//		cout << "Візьміть борошно, яйця, молоко, масло, цукор\n";
//	}
//	void MixAndCutIngridients()
//	{
//		cout << "Замісіть тісто.....\n";
//	}
//	void TermicalCooking()
//	{
//		cout << "Печіть 40 хв\n";
//	}
//	void PrettyDisign()
//	{
//		cout << "Подавайте на подносі. Прикрасьте тертим шоколадом\n";
//	}
//};
//
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	Cook * c = new CookSoup();
//	c->CookMeal();
//
//	delete c;
//	c = new CookCake();
//	c->CookMeal();
//
//
//}