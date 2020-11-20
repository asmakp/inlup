#ifndef _CAMP_H
#define _CAMP_H
#include "ADD.h"
#include<string> 
#include<ctime> 
#include<vector> 
using namespace std;

class Campaign
{

	string name;
	int id;
	time_t fromDateTime;
	time_t toDateTime;
	float campaignCost;
	int usage;

public:
	// Campaign class constructor
	Campaign(string name, int id, time_t fromDateTime, time_t toDateTime, float campaignCost);

	void AddUse();
	void addAdds(Ad a);

	//getters
	string getName();
	int getId();
	string getFromDate();
	string getToDate();
	float getcampaignCost();

	//setters
	void setName(string name);
	void setId(int id);
	void setFromDate(time_t fromdate);
	void setToDate(time_t todate);
	void setcampaignCost(float campaigncost);


private:
	vector<Ad> adds;
};
#endif
