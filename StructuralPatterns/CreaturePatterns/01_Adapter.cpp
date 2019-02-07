//#include<iostream>
//
//using namespace std;
//
//class ICalc
//{
//public:
//	virtual void CalcSum() = 0;
//	virtual void CalcMin() = 0;
//	virtual void CalcDiv() = 0;
//	virtual void CalcMult() = 0;
//};
//
//
//class ConsoleCalc : public ICalc
//{
//	void CalcSum()
//	{
//		cout << "sum = 10\n";
//	}
//	void CalcMin()
//	{
//		cout << "min = 10\n";
//	}
//	void CalcDiv()
//	{
//		cout << "div = 10\n";
//	}
//	void CalcMult()
//	{
//		cout << "mult = 10\n";
//	}
//};
//
//class CalcWichIBorrowedInFriend
//{
//public:
//	int Sum()
//	{
//		int x,  y;
//		cin >> x >> y;
//		return x + y;
//	}
//	int Div()
//	{
//		int x,  y;
//		cin >> x >> y;
//		return x / y;
//	}
//	int Mult()
//	{
//		int x,  y;
//		cin >> x >> y;
//		return x * y;
//	}
//	int Min()
//	{
//		int x,  y;
//		cin >> x >> y;
//		return x - y;
//	}
//};
//
//
//class Adapter : public ICalc
//{
//	CalcWichIBorrowedInFriend * friendCalc;
//public:
//	Adapter()
//	{
//		friendCalc = new CalcWichIBorrowedInFriend();
//	}
//	void CalcSum() 
//	{
//		cout<<friendCalc->Sum();
//	}
//	void CalcMin() 
//	{ 
//		cout<<friendCalc->Min(); 
//	}
//	void CalcDiv() 
//	{ 
//		cout<<friendCalc->Div(); 
//	}
//	void CalcMult() 
//	{ 
//		cout<<friendCalc->Mult(); 
//	}
//};
//
//void MyCoolDontTouchProgram(ICalc* calc)
//{
//	int choice = 0;
//	cout << "1 - sum, 2 - min, 3 - div, 4 - mult\n";
//	cin >> choice;
//	switch (choice)
//	{
//		case 1:{calc->CalcSum(); break;}
//		case 2:{calc->CalcMin(); break;}
//		case 3:{calc->CalcDiv(); break;}
//		case 4:{calc->CalcMult(); break;}
//	}
//	
//}
//
//void main()
//{
//	ICalc * calc = new Adapter();
//	MyCoolDontTouchProgram(calc);
//}