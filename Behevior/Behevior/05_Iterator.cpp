//#include<iostream>
//#include<Windows.h>
//#include<string>
//#include<list>
//#include<vector>
//#include<ctime>
//#include<algorithm>
//#include"Iterator.h"
//#include"MyCollection.h"
//
//using namespace std;
//
//	MyCollection::MyCollection()
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			arr[i] = rand() % 10;
//		}
//	}
//	int* MyCollection::GetArr()
//	{
//		return arr;
//	}
//	int MyCollection:: GetSize()
//	{
//		return 10;
//	}
//	Iterator * MyCollection:: CreateIterator()
//	{
//		return new Iterator(this);
//	}
//
//
//Iterator::Iterator(MyCollection * col)
//{
//	_col = col;
//	curInd = 0;
//}
//int Iterator::First()
//{
//	return _col->GetArr()[0];
//}
//
//int Iterator::Next()
//{
//	if(curInd < _col->GetSize()-1)
//	return _col->GetArr()[++curInd];
//	return -1;
//}
//
//void main()
//{
//	MyCollection * col = new MyCollection();
//	//----ITERATOR-----
//	Iterator * it = col->CreateIterator();
//	cout << it->First()<<" ";
//	while (true)
//	{
//		int el = it->Next();
//		if (el == -1) break;
//		cout << el<<" ";
//	}
//}