//#include<iostream>
//#include<Windows.h>
//#include<string>
//#include<list>
//#include<vector>
//#include<ctime>
//#include<algorithm>
//
//
//using namespace std;
//
//class Context
//{
//public:
//	list<string> literalsInDictionary;
//	vector<string> lexema;
//	bool isValid;
//	int index;
//	Context()
//	{
//		lexema = {};//---what we want to parse
//		literalsInDictionary = { "cin","cout","printf" };
//		isValid = false;
//		index = 0;//---concrete word
//	}
//};
//
//
//class Excprecion
//{
//public:
//	virtual void Interpret(Context* context) = 0;
//};
//
////---check ONE elemen
//class TerminalExprecion : public Excprecion
//{
//public:
//	void Interpret(Context* context)
//	{
//		string lex = context->lexema[context->index];
//		if (find(context->literalsInDictionary.begin(), context->literalsInDictionary.end(), lex) != context->literalsInDictionary.end())
//			context->isValid = true;
//		else
//			context->isValid = false;
//	}
//};
//
////---check ALL EXPRESION
//class NonTerminalExprecion : public Excprecion
//{
//public:
//	NonTerminalExprecion * nonTerminal;
//	TerminalExprecion * terminal;
//
//	void Interpret(Context* context)
//	{
//		if (context->index < context->lexema.size())
//		{
//			terminal = new TerminalExprecion();
//			terminal->Interpret(context);
//
//			if (context->isValid)
//			{
//				context->index++;
//				nonTerminal = new NonTerminalExprecion();
//				nonTerminal->Interpret(context);
//			}
//			else
//			{
//				cout << "Can't contain such lexemas\n";
//				return;
//			}
//		}
//		else
//			cout << "Out code works fine!!!\n";
//		//give to terminal or not terminal
//	}
//};
//
//void main()
//{
//	Context * context = new Context();
//	context->lexema = { "cin","shit","cout" };
//	
//	Excprecion * expr = new NonTerminalExprecion();
//	expr->Interpret(context);
//
//	string str = "cin cout 111";
//	int pos =  str.find_first_of(' ', 0);
//	cout << pos << endl;
//	int pos1 = str.find_first_of(' ', pos+1);
//	cout << pos1 << endl;
//	string str1(str, 0, pos);
//	string str2(str, pos+1, pos1-pos);
//	
//	cout << str1 << endl;
//	cout << str2 << endl;
//}