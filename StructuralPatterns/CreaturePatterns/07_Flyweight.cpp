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
//class Image
//{
//public:
//	string name;
//	int size;
//	void LoadImg()
//	{
//		for (size_t i = 0; i < 20; i++)
//		{
//			cout << ".";
//			Sleep(50);
//		}
//		cout << endl;
//	}
//};
//
//class FlyweightFabric
//{
//	static map<string, Image*> imgs;
//public:
//	static Image* GetImg(string key, int size)
//	{
//		for (auto it = imgs.begin(); it != imgs.end(); it++)
//		{
//			if((*it).first == key)
//			return (*it).second;
//		}
//			
//		Image* img = new Image();
//		img->name = key;
//		img->size = size;
//		img->LoadImg();
//		imgs.insert(make_pair(key, img));
//		return img;
//	}
//};
//
//map<string, Image*> FlyweightFabric::imgs = {};
//
//class Hero
//{
//	string name;
//	Image * img;
//
//public:
//	void CreateHero(string name, int size)
//	{
//		this->name = name;
//		img = FlyweightFabric::GetImg(name, size);
//	}
//
//	void Show()
//	{
//		SetCol(rand() % 10 + 2);
//		cout << "---" << name << "---\n";
//		cout << "---" << img->name << "---\n";
//		cout << "---" << img->size << "---\n";
//		SetCol(7);
//	}
//};
//
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//
//	Hero heroes[5];
//	for (size_t i = 0; i < 3; i++)
//	{
//		heroes[i].CreateHero("hoblin", 20);
//	}
//	for (size_t i = 3; i < 5; i++)
//	{
//		heroes[i].CreateHero("princess", 28);
//	}
//	for (size_t i = 0; i < 5; i++)
//	{
//		heroes[i].Show();
//	}
//}