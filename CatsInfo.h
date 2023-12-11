#pragma once
#include <string>
using namespace std;

class CatsInformation
{
public:
	CatsInformation();
	virtual ~CatsInformation();
	string GetWeight(string) const;
	string GetBodyLength(string) const;
};