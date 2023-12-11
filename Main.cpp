/*
На основі приклада патерна проектування “Адаптер” створіть програму, 
яка замість звичайних вказівників використовуватиме розумні вказівники
найвідповіднішого класу.
*/

#include <iostream>
#include "Cat.h"
#include "ExtendedCat.h"
using namespace std;

int main()
{
	unique_ptr<Cat> ptr = make_unique<ExtendedCat>("jungle cat");
	ptr->Show();

	ptr = make_unique<ExtendedCat>("sand cat");
	ptr->Show();

	ptr = make_unique<ExtendedCat>("european wildcat");
	ptr->Show();

	return 0;
}