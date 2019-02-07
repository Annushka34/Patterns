//#include<iostream>
//#include<Windows.h>
//
//using namespace std;
//
//void SetCol(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//
//class IPaint
//{
//public:
//	char symbol;
//};
//
//class PaintGreenLines : public IPaint
//{
//public:
//	PaintGreenLines()
//	{
//		symbol = '-';
//		SetCol(10);
//	}
//};
//
//class PaindRedPoint : public IPaint
//{
//public:
//	PaindRedPoint()
//	{
//		symbol = char(3);
//		SetCol(12);
//	}
//};
//
//class Figure
//{
//protected:
//	IPaint * colorPen;
//public:
//	void SetPen(IPaint * pen)
//	{
//		colorPen = pen;
//	}
//	virtual void PaintFigure() = 0;
//};
//
//class Triangle : public Figure
//{
//public:
//	void PaintFigure()
//	{
//		cout << "\n-------Triangle-----\n";
//		cout << "....." << colorPen->symbol << colorPen->symbol << "....\n";
//		cout << "...." << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << "...\n";
//		cout << "..." << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << "..\n";
//
//	}
//};
//
//class Rectangle2 : public Figure
//{
//public:
//	void PaintFigure()
//	{
//		cout << "\n-------Rectangle-----\n";
//		for (size_t i = 0; i < 10; i++)
//		{
//			for (size_t j = 0; j < 10; j++)
//			{
//				cout << colorPen->symbol;
//			}
//			cout << endl;
//		}
//	}
//};
//class Circle : public Figure
//{
//public:
//	void PaintFigure()
//	{
//		cout << "\n-------Circle-----\n";
//		cout << "....." << colorPen->symbol << colorPen->symbol << "...\n";
//		cout << "...." << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << "..\n";
//		cout << "...." << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << colorPen->symbol << "..\n";
//		cout << "....." << colorPen->symbol << colorPen->symbol << "....\n";
//	}
//};
//void Paint(Figure*f, IPaint * pen)
//{
//	f->SetPen(pen);
//	f->PaintFigure();
//}
//
//void main()
//{
//	IPaint * pen1 = new PaindRedPoint();
//	IPaint * pen2 = new PaintGreenLines();
//
//	Paint(new Circle(), pen1);
//	/*f->SetPen(new PaintGreenLines());
//	f->PaintFigure();
//	delete f;
//	f = new Rectangle2();
//	f->SetPen(new PaindRedPoint());
//	f->PaintFigure();*/
//}