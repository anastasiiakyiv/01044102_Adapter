#pragma once
#include "Cat.h"
#include "CatsInfo.h"

class ExtendedCat : public Cat
{
private:
	unique_ptr<CatsInformation> pInformation;
public:
	ExtendedCat(string);
	virtual ~ExtendedCat();
	void Show();
};