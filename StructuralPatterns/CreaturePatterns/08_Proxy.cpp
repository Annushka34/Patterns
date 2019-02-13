//#include<iostream>
//#include<Windows.h>
//#include<string>
//#include<list>
//#include<ctime>
//#include<map>
//
//using namespace std;
//
//void SetCol(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//
//class Calc
//{
//public:
//	int Sum(int x, int y)
//	{
//		return x + y;
//	}
//	int Min(int x, int y)
//	{
//		return x - y;
//	}
//	int Mult(int x, int y)
//	{
//		return x * y;
//	}
//	int Dev(int x, int y)
//	{
//		return x / y;
//	}
//};
//
//class Proxy : public Calc
//{
//private:
//	Calc * calc;
//public:
//	Proxy()
//	{
//		calc = new Calc();
//	}
//	void InputVars(int &x, int &y)
//	{
//		cout << "Enter numbers: ";
//		cin >> x >> y;
//	}
//	void Sum()
//	{
//		int x, y;
//		InputVars(x, y);
//		int res = calc->Sum(x, y);
//		cout << res << endl;
//	}
//	void Div()
//	{
//		int x, y;
//		InputVars(x, y);
//		if (y == 0) cout << " Can't div on zero!!!\n";
//		else
//		{
//			int res = calc->Sum(x, y);
//			cout << res << endl;
//		}
//	}
//};
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//
//	Calc * calc = new Calc();
//	Proxy * calc1 = new Proxy();
//	calc1->Sum();
//}