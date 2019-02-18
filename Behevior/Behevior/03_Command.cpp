//#include<iostream>
//#include<Windows.h>
//#include<string>
//#include<list>
//#include<ctime>
//#include<algorithm>
//
//using namespace std;
//
//void SetCol(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//
//class Project
//{
//public:
//	void MakeCoolProjectForLongTime()
//	{
//		cout << "Hard work imitation...\n";
//		for (size_t i = 0; i < 100; i++)
//		{
//			cout << "."; Sleep(50);
//		}
//	}
//
//	void MakeFastSimpleBad()
//	{
//		cout << "Hard work imitation...\n";
//		for (size_t i = 0; i < 500; i++)
//		{
//			cout << "."; Sleep(100);
//		}
//	}
//};
//
//class IComand
//{
//protected:
//	Project * _project;
//public:
//	IComand(Project * p)
//	{
//		_project = p;
//	}
//	virtual void Execute() = 0;
//};
//
//class TeamDevelopers : public IComand
//{
//public:
//	TeamDevelopers(Project * p): IComand(p)
//	{
//			
//	}
//	void Execute()
//	{
//		_project->MakeCoolProjectForLongTime();
//	}
//};
//
//class HeroSingleDeveloper : public IComand
//{
//public:
//	HeroSingleDeveloper(Project * p) : IComand(p)
//	{
//
//	}
//	void Execute()
//	{
//		_project->MakeFastSimpleBad();
//	}
//};
//
//
//class Director
//{
//public:
//	void MakeProject(IComand * command)
//	{
//		command->Execute();
//	}
//};
//
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	IComand * com1 = new TeamDevelopers(new Project());
//	IComand * com2 = new HeroSingleDeveloper(new Project());
//	Director dir;
//	dir.MakeProject(com1);
//	dir.MakeProject(com2);
//
//}