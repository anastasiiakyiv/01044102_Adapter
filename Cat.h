#pragma once
#include <iostream>
using namespace std;

class Cat
{
protected:
	string name;
	string weight;
	string bodyLength;
public:
	Cat(string);
	virtual ~Cat();
	virtual void Show()
	{
		cout << "\nA species of the cat family: " << name << endl;
	}
};