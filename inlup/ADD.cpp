#include "ADD.h"

Ad::Ad(std::string name, int id, std::string adText, Adtype AdType)
{
	this->name = name;
	this->id = id;
	this->adText = adText;
	this->AdType = AdType;
}
int Ad::getId() { return this->id; }
std::string Ad::getName() { return this->name; }
std::string Ad::getAdText() { return this->adText; }
Adtype Ad::getAdType() { return this->AdType; }
bool Ad::setId(int id)
{
	if (id > 0)
	{
		this->id = id;
		return true;
	}
	return false;
}
bool Ad::setName(std::string name)
{
	this->name = name;
	return true;
}
bool Ad::setAdText(std::string adtext)
{
	this->adText = adtext;
	return true;
}
bool Ad::setAdType(Adtype adType)
{
	this->AdType = adType;
	return true;
}

