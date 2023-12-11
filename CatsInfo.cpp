#include "CatsInfo.h"
#include <algorithm>

CatsInformation::CatsInformation() {}

CatsInformation::~CatsInformation() {}

string CatsInformation::GetWeight(string pName) const
{
	transform(pName.begin(), pName.end(), pName.begin(), ::tolower);
	if (pName == "jungle cat")
	{
		return "2-16 kg";
	}
	else if (pName == "sand cat")
	{
		return "1.5-3.4 kg";
	}
	else if (pName == "european wildcat")
	{
		return "3-8 kg";
	}
	return "0";
}

string CatsInformation::GetBodyLength(string pName) const
{
	transform(pName.begin(), pName.end(), pName.begin(), ::tolower);
	if (pName == "jungle cat")
	{
		return "59-76 cm";
	}
	else if (pName == "sand cat")
	{
		return "39-52 cm";
	}
	else if (pName == "european wildcat")
	{
		return "43-91 cm";
	}
	return "-1";
}