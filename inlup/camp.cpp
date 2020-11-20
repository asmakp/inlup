#define _CRT_SECURE_NO_WARNINGS
#include<iostream> 
#include<string> 
#include<ctime> 
#include<locale> 
#include "camp.h"
#include "ADD.h"
using namespace std;

Campaign::Campaign(string name, int id, time_t fromDateTime, time_t toDateTime, float campaignCost)
{
	this->name = name;
	this->id = id;
	this->fromDateTime = fromDateTime;
	this->toDateTime = toDateTime;
	this->campaignCost = campaignCost;

}
//getters
string Campaign::getName()
{
	return this->name;
}
int Campaign::getId()
{
	return this->id;
}
string Campaign::getFromDate()
{
	char str[50];
	struct tm* now_t = localtime(&(this->fromDateTime));
	strftime(str, 50, "%d-%m-%Y %H:%M:%S", now_t);
	return str;
}
string Campaign::getToDate()
{
	char str[50];
	struct tm* now_t = localtime(&(this->toDateTime));
	strftime(str, 50, "%d-%m-%Y %H:%M:%S", now_t);
	return str;
	
}
float Campaign::getcampaignCost()
{
	return this->campaignCost;
}

//setters
void Campaign::setName(string name)
{
	this->name = name;
}
void Campaign::setId(int id)
{
	this->id = id;
}
void Campaign::setFromDate(time_t fromdate)
{
	this->fromDateTime = fromdate;
}
void Campaign::setToDate(time_t todate)
{
	this->toDateTime = todate;
}
void Campaign::setcampaignCost(float campaigncost)
{
	this->campaignCost = campaigncost;
}

void Campaign::addAdds(Ad a)
{
	this->adds.push_back(a);
}
void Campaign::AddUse()
{
	usage = usage + 1;
}

int main()
{
	
	time_t now = time(NULL);
	struct tm* date = localtime(&now);
	struct tm* date2 = localtime(&now);
	char Namn[50];
	int ID;
	int fyear,fmonth,fday; 
	int tyear,tmonth,tday;
	float cost;
	cout << "Enter Campaign name: ";
	cin.getline(Namn, 50);
	cout << "\nEnter id: ";
	cin >> ID;
	cout << "\nEnter from Date in format YYYY MM DD: ";
	cin >> fyear >> fmonth >> fday;
	date->tm_year = fyear - 1900;
	date->tm_mon = fmonth - 1;
	date->tm_mday = fday;
	time_t fdate = mktime(date);
	cout << "\nEnter To Date in format YYYY MM DD: ";
	cin >> tyear >> tmonth >> tday;
	date2->tm_year = tyear - 1900;
	date2->tm_mon = tmonth - 1;
	date2->tm_mday = tday;
	time_t tdate = mktime(date2);
	cout << "\nEnter the cost: ";
	cin >> cost; 
	Campaign c(Namn, ID, fdate, tdate, cost);
	cout << c.getName() << " " << c.getId() << " " << c.getFromDate() << " " << c.getToDate() << " " << c.getcampaignCost();
}