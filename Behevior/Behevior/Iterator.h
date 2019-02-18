#pragma once
class MyCollection;

class Iterator
{
	MyCollection * _col;
	int curInd;
public:
	Iterator(MyCollection * col);
	int First();
	int Next();
};