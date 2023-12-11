#include "Cat.h"
#include <algorithm>

Cat::Cat(string pName)
{
	name = pName;
	transform(name.begin(), name.end(), name.begin(), ::tolower);
}

Cat::~Cat() {}