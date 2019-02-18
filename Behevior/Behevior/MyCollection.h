#pragma once
class Iterator;

class MyCollection
{
	//	Iterator * it;
	int arr[10];
public:
	MyCollection();
	int* GetArr();
	Iterator * CreateIterator();
	int GetSize();
};