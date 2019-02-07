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
//	virtual void GetValue() = 0;
//};
//
//class Branch : public Component
//{
//protected:
//	list<Component*> components;
//	string name;
//public:
//	Branch(string name):name(name)
//	{	
//	
//	}
//	void Add(Component * comp)
//	{
//		components.push_back(comp);
//	}
//	void GetValue()
//	{
//		cout << name << endl;
//		for (auto el: components)
//		{
//			el->GetValue();
//		}
//	}
//};
//
//class Leaf : public Component
//{
//	string mathExample;
//public:	
//	Leaf(string ex):mathExample(ex)
//	{
//			
//	}
//	void Add(Component * comp)
//	{
//		SetCol(12);
//		cout << "You can't do this. Its leaf!!!";
//		SetCol(7);
//	}
//	void GetValue()
//	{
//		SetCol(rand() % 10 + 2);
//		cout <<"...."<< mathExample<<endl;
//		SetCol(7);
//	}
//};
//
//
//void main()
//{
//	Component * root = new Branch("root");
//
//	Component * branch_1 = new Branch("branch_1");
//	Component * branch_2 = new Branch("branch_2");
//
//	Component * leaf_1 = new Leaf("1+3=");
//	Component * leaf_2 = new Leaf("12+7=");
//	Component * leaf_3 = new Leaf("8-22=");
//
//	branch_1->Add(leaf_1);
//	branch_1->Add(leaf_2);
//
//	branch_2->Add(new Leaf("5+5="));
//
//	root->Add(leaf_3);
//	root->Add(branch_1);
//	root->Add(branch_2);
//
//
//	branch_1->Add(new Leaf("1+1="));
//
//	root->GetValue();
//
//}