#ifndef BAUDOT_H
#define BAUDOT_H

#include "LorenzWheelCollection.h"

class Baudot
{
private:

	std::string baudottext;

	char currentChiChar;

public:

	int* baudotdata;
	int* asciidata;

	Baudot();
	~Baudot();

	int loadBaudotData(std::string);
	int loadAsciiData(std::string);

	void setBaudotData(std::string);
	int getBaudotData(int);

	std::string convertToBaudot(char);
	char convertToAscii(int,int,int,int,int);

};

#endif