//#include<iostream>
//#include<Windows.h>
//#include<string>
//#include<list>
//#include<ctime>
//
//using namespace std;
//
//void SetCol(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//
//class Component
//{
//public:
//	virtual void Add(Component* comp) = 0;
//	virtual void GetValue(int lev) = 0;
//	virtual void Remove(Component * removed) = 0;
//};
//
//class Paragrath : public Component
//{
//protected:
//	list<Component*> paragraths;
//	string header;
//public:
//	Paragrath(string name) :header(name)
//	{
//
//	}
//	void Add(Component * comp)
//	{
//		paragraths.push_back(comp);
//	}
//	void GetValue(int lev)
//	{
//		for (size_t i = 0; i < lev; i++)
//		{
//			cout << "*";
//		}
//		cout << header << endl;
//		for (auto el : paragraths)
//		{
//			el->GetValue(lev+6);
//		}
//	}
//	void Remove(Component * removed)
//	{
//		paragraths.remove(removed);
//	}
//	~Paragrath()
//	{
//		cout << "\n---Del---\n";
//		for (auto it = paragraths.begin(); it != paragraths.end(); it++)
//		{
//			delete (*it);
//		}
//	}
//};
//
//class TextBody : public Component
//{
//	string text;
//public:
//	TextBody(string t) :text(t)
//	{
//
//	}
//	void Add(Component * comp)
//	{
//		SetCol(12);
//		cout << "You can't do this. Its leaf!!!";
//		SetCol(7);
//	}
//	void GetValue(int lev)
//	{
//		SetCol(rand() % 10 + 2);
//		for (size_t i = 0; i < lev; i++)
//		{
//			cout << "-";
//		}
//		cout <<  text<< endl;
//		SetCol(7);
//	}
//
//	void Remove(Component * comp)
//	{
//		cout << "Can't remove\n";
//	}
//
//	~TextBody()
//	{
//			
//	}
//};
//
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	Component * book = new Paragrath("Програмирование на С++");
//	Component * par1 = new Paragrath("Масивы");
//	Component * par2 = new Paragrath("STL");
//	Component * par3 = new Paragrath("Функции");
//
//	Component * topik1 = new Paragrath("Одномерные масивы");
//	Component * topik2 = new Paragrath("Двумерные масивы");
//	Component * topik3 = new Paragrath("Вектор");
//	Component * topik4 = new Paragrath("Список");
//	Component * topik5 = new Paragrath("Меп");
//	Component * topik6 = new Paragrath("Сет");
//
//	book->Add(par1);
//	book->Add(par2);
//	book->Add(par3);
//
//	par1->Add(topik1);
//	par1->Add(topik2);
//
//	par2->Add(topik3);
//	par2->Add(topik4);
//	par2->Add(topik5);
//	par2->Add(topik6);
//
//	topik1->Add(new TextBody("dbdbvkjbjdbkvzj bjkdsf dsfsdhf sfjsldkfn dgfyfgdfy"));
//	topik2->Add(new TextBody("dbdbvkjbjdbkvzj bjkdsf dsfsdhf sfjsldkfn dgfyfgdfy"));
//	topik3->Add(new TextBody("dbdbvkjbjdbkvzj bjkdsf dsfsdhf sfjsldkfn dgfyfgdfy"));
//	topik4->Add(new TextBody("dbdbvkjbjdbkvzj bjkdsf dsfsdhf sfjsldkfn dgfyfgdfy"));
//	topik5->Add(new TextBody("dbdbvkjbjdbkvzj bjkdsf dsfsdhf sfjsldkfn dgfyfgdfy"));
//	topik6->Add(new TextBody("dbdbvkjbjdbkvzj bjkdsf dsfsdhf sfjsldkfn dgfyfgdfy"));
//	par3->Add(new TextBody("djjsshdv dsfhsdfh adjfgisf dfgsdgf uetyiuyt"));
//
//	book->GetValue(0);
//}