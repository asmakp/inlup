#ifndef ADD_INCLUDED
#define ADD_INCLUDED

#include <string>

enum class Adtype
{
	SCROLL,
	BLINK,
	PLAIN_TEXT
};

class Ad
{
private:
	// Ad values
	std::string name;
	int id;
	std::string adText;
	Adtype AdType;
public:
	// Ad class constructor
	Ad(std::string name, int id, std::string adText, Adtype AdType);

	// getters
	int getId();
	std::string getName();
	std::string getAdText();
	Adtype getAdType();

	// setters
	bool setId(int id);
	bool setName(std::string name);
	bool setAdText(std::string adtext);
	bool setAdType(Adtype adType);
};

#endif

