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
//		cout << "³����� ��������, ������, ����, ������ � �����\n";
//	}
//	void MixAndCutIngridients()
//	{
//		cout << "� �������� ������� ����, ������� �� ������ ��������, ������ �������� ����.....\n";
//	}
//	void TermicalCooking()
//	{
//		cout << "����� 40 ��\n";
//	}
//	void PrettyDisign()
//	{
//		cout << "��������� � ������� ������. ���������� �������\n";
//	}
//};
//
//class CookCake : public Cook
//{
//	void PrepareProducts()
//	{
//		SetCol(12);
//		cout << "³����� �������, ����, ������, �����, �����\n";
//	}
//	void MixAndCutIngridients()
//	{
//		cout << "������ ����.....\n";
//	}
//	void TermicalCooking()
//	{
//		cout << "������ 40 ��\n";
//	}
//	void PrettyDisign()
//	{
//		cout << "��������� �� ������. ���������� ������ ���������\n";
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