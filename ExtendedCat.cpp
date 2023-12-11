#include <memory>
#include "ExtendedCat.h"

ExtendedCat::ExtendedCat(string pName) : Cat(pName)
{
	pInformation = make_unique<CatsInformation>();
}

ExtendedCat::~ExtendedCat() {}

void ExtendedCat::Show()
{
	Cat::Show();
	weight = pInformation->GetWeight(name);
	bodyLength = pInformation->GetBodyLength(name);
	cout << "\nWeight: " << weight << endl;
	cout << "\nBody length: " << bodyLength << endl;
	cout << "\n============================\n";
}